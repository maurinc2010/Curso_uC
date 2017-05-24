#include "pic18f4550.h"
#include "timer_0.h"
#include "configuraciones.h"
#include "typedef.h"
#define Tcy=1/(_XTAL_FREQ/4)


///ecuacion para calcular los parametros de configuracion del timer
//a partir de valor del tiempo deseado

//Time=(Tcy(prescaler)+2*Tcy)*(2^n-1-TMR)
//n es el valor de la resolucion del timer 16 o 8 bits
//Fcy/4
//TMR valor de inicio de la cuenta del timer
void set_timer(u32 time, u8 unidad){
    periodo=time;
    u16 aux=65535;
    u16 t=2;
    switch (unidad){
            case ms:{
                    if (periodo>=1 && periodo<65){
                        T0CONbits.T0PS=0;
                        t=1;
                    }
                    else if (periodo>=65 && periodo<131)
                    {
                        T0CONbits.T0PS=1;
                        t=2;
                    }
                    else if (periodo>=131 && periodo<262)
                    {
                        T0CONbits.T0PS=2;
                        t=4;
                    }
                    else if (periodo>=262 && periodo<524)
                    {
                        T0CONbits.T0PS=3;
                        t=8;
                    }
                    else if (periodo>=524 && periodo<1040)
                    {
                        T0CONbits.T0PS=4;
                        t=16;
                    }
                    else if (periodo>=1040 && periodo<2090)
                    {
                        T0CONbits.T0PS=5;
                        t=32;
                    }
                    else if (periodo>=2090 && periodo<4190){
                        T0CONbits.T0PS=6;
                        t=64;
                    }
                    else if (periodo>=4190 && periodo<8380)
                    {
                        T0CONbits.T0PS=7;
                        t=128;
                    }
                    //calculo de Tmr0l  y Tmr0l
            aux=aux-(((1000*periodo)-2)/t);
                break;
            }
            case us:{
                if (periodo>=1 && periodo<65000){
                        T0CONbits.T0PS=0;
                        t=1;
                }
                    else if (periodo>=65000 && periodo<131000){
                        T0CONbits.T0PS=1;
                        t=2;
                    }
                    else if (periodo>=131000 && periodo<262000){
                        T0CONbits.T0PS=2;
                        t=4;
                    }
                    else if (periodo>=262000 && periodo<524000){
                        T0CONbits.T0PS=3;
                        t=8;
                    }
                    else if (periodo>=524000 && periodo<1040000){
                        T0CONbits.T0PS=4;
                        t=16;
                    }
                    else if (periodo>=1040000 && periodo<2090000){
                        T0CONbits.T0PS=5;
                        t=32;
                    }        
                    else if (periodo>=2090000 && periodo<4190000){
                        T0CONbits.T0PS=6;
                        t=64;
                    }
                    else if (periodo>=4190000 && periodo<8380000){
                        T0CONbits.T0PS=7;
                        t=128;
                    }
                    aux=aux-((periodo-2)/t);
                    break;
                    //calculo de Tmr0l  y Tmr0l
            }
    }
    tl=aux;
    th=aux>>8;
    T0CONbits.T08BIT=0;
    T0CONbits.PSA=0;
    T0CONbits.T0CS=0;
    set_time();
    
}
void set_time(){
    TMR0H=th;
    TMR0L=tl;
}
void init_timer(unsigned char state){
    T0CONbits.TMR0ON=state;
}

u8 flag_time(){
    if (INTCONbits.T0IF==1){
        INTCONbits.T0IF=0;
        set_time();
        init_timer(1);
        return 1;
    }
    else 
        return 0;
        
}

