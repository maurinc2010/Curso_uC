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
                    if (periodo>=1 && periodo<131){
                        T0CONbits.T0PS=0;
                        t=2;
                    }
                    else if (periodo>=131 && periodo<196)
                    {
                        T0CONbits.T0PS=1;
                        t=3;
                    }
                    else if (periodo>=196 && periodo<327)
                    {
                        T0CONbits.T0PS=2;
                        t=5;
                    }
                    else if (periodo>=327 && periodo<589)
                    {
                        T0CONbits.T0PS=3;
                        t=9;
                    }
                    else if (periodo>=589 && periodo<1110)
                    {
                        T0CONbits.T0PS=4;
                        t=17;
                    }
                    else if (periodo>=1110 && periodo<2160)
                    {
                        T0CONbits.T0PS=5;
                        t=33;
                    }
                    else if (periodo>=2160 && periodo<4120){
                        T0CONbits.T0PS=6;
                        t=65;
                    }
                    else if (periodo>=4120 && periodo<8450)
                    {
                        T0CONbits.T0PS=7;
                        t=129;
                    }
                    //calculo de Tmr0l  y Tmr0l
            aux=aux-(1000*periodo/t);
                break;
            }
            case us:{
                if (periodo>=2 && periodo<131000)
                        T0CONbits.T0PS=0;
                    else if (periodo>=131000 && periodo<196000)
                        T0CONbits.T0PS=1;
                    else if (periodo>=196000 && periodo<327000)
                        T0CONbits.T0PS=2;
                    else if (periodo>=327000 && periodo<589000)
                        T0CONbits.T0PS=3;
                    else if (periodo>=589000 && periodo<1110000)
                        T0CONbits.T0PS=4;
                    else if (periodo>=1110000 && periodo<2160000)
                        T0CONbits.T0PS=5;
                    else if (periodo>=2160000 && periodo<4120000)
                        T0CONbits.T0PS=6;
                    else if (periodo>=4120000 && periodo<8450000)
                        T0CONbits.T0PS=7;
                    break;
                    //calculo de Tmr0l  y Tmr0l
            aux=aux-(periodo/t);
            }
    }
    tl=aux;
    th=aux>>8;
    
}
void set_time(){
    TMR0L=tl;
    TMR0H=th;
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

