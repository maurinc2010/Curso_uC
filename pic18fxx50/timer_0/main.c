/*
 * File:   main.c
 * Author: game
 *
 * Created on 9 de mayo de 2017, 08:20 PM
 */
#include "pic18f4550.h"
#include "timer_0.h"
#include "configuraciones.h"
#include "typedef.h"

#include <xc.h>
u8 flag_c=0,flag_d=0,flag_p;
void set_port(){
    TRISC=0;
    TRISD=0;
    PORTC=255;
    PORTD=255;
}
void set_clock(){
    OSCCONbits.IRCF=7;
}

void toggle_d(){
    PORTD=~PORTD;
}

void toggle_c(){
    PORTC=~PORTC;
}
void main(void) {
    set_clock();
    set_timer(20, ms);
    init_timer(1);
    set_port();
    while(1){
        if (flag_time()){
            flag_d=flag_d+1;
            flag_c=flag_c+1;
        }
        
        if (flag_c==10){
            toggle_c();
            flag_c=0;
        }
        if (flag_d==5){
            toggle_d();
            flag_d=0;
        }
       
        }
        
      
    
    return;
}