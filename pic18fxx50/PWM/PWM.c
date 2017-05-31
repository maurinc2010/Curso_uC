#include "pic18f4550.h"
#include "PWM.h"
#include "typedef.h"
#include "configuraciones.h"
//#define   _XTAL_FREQ
#define   Tmr2 1

void set_pin(u8 modulo , u8 st){     //seleciona el pin de salida del pwm
    switch (modulo){
            case CCP1:
                TRISCbits.RC2=st; //st out in
                break;
            case CCP2:
                TRISCbits.RC1=st;
                break;
    }
             
}

void set_frecuencia(u16 p){  //establece la frecuencia de la pwm
    int pr2=_XTAL_FREQ/(4*p*Tmr2);//Tpwm/(Tmr2*Tosc)-1;
    PR2=pr2-1;
    TMR2=0;
}

void set_duty(u8 modulo,u16 duty){    //ciclo util 0-1023
    //0b101001110 original 11
    //msb=01010011
    //lsb=00100000
    u8 msb,lsb;
    msb = (duty >> 2) & 0xFF;          // 8 MSB
    lsb = ((u8)duty & 0x03) << 4;      // 2 LSB in <5:4>
    switch (modulo){
            case CCP1:
                 CCPR1L=msb;
                 CCP1CON |=lsb;
                break;
            case CCP2:
                 CCPR2L=msb;
                 CCP2CON |=lsb;
                break;
    }   
}

void init_pwm(u8 modulo, u8 st,u16 f,u16 duty){
    T2CONbits.T2CKPS=1;
    T2CONbits.TMR2ON=1;
    switch (modulo){
        case CCP1:
            if (st){
                CCP1CON=PWMMODE;
                set_frecuencia(f);
                set_duty(CCP1,duty);
                set_pin(CCP1,OUT);
            }
            else
                CCP1CON=0;
            break;
        case CCP2:
            if (st){
                CCP2CON=PWMMODE;
                set_frecuencia(f);
                set_duty(CCP2,duty);
                set_pin(CCP2,OUT);
            }
            else
                CCP2CON=0;
            break;
              
    }
            
    
}