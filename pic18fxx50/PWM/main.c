/*
 * File:   main.c
 * Author: game
 *
 * Created on 9 de mayo de 2017, 08:20 PM
 */
#include <pic18f4550.h>
#include "PWM.h"
#include "configuraciones.h"
#include "typedef.h"

#include <xc.h>
//u8 flag_c=0,flag_d=0,flag_p;
void set_port(){
    //TRISC=0;
    TRISD=0;
    TRISB=0;
    PORTC=255;
    PORTD=255;
}
void set_clock(){
    OSCCONbits.IRCF=7;  //clk a 8MHz
}

void toggle_d(){
    PORTD=~PORTD;
}

void toggle_c(){
    PORTC=~PORTC;
}
void main(void) {
    int i=0;
    set_clock();
    set_port();
    init_pwm(CCP1,1,3000,434);
    init_pwm(CCP2,1,3000,334);
    //set_frecuencia(3000);
    //set_duty(CCP1 ,334);
    //set_duty(CCP2 ,200);
    while(1){
        toggle_d();
        __delay_ms(90);
        i=i+10;
        set_duty(CCP2,i);
       
        }
        
      
    
    return;
}