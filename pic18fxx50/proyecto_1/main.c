/*
 * File:   main.c
 * Author: game
 *
 * Created on 2 de mayo de 2017, 08:23 PM
 */

#include "pic18f4550.h"
#include "configuraciones.h"
#include <xc.h>
#define  _XTAL_FREQ 8000000
//UNSIGNED CHAR ES 8 BITS
void set_leds(){   
    PORTD=0;    
    LATD=0;     
    PORTB=0;
    TRISB=0;            //TODO EL PUERTO COMO SALIDA    
    TRISD=0xF0;         //PARTE ALTA DEL PUERTO ENTRADA, BAJA SALIDA   
    //ANSEL=0XE0;     
    TRISA=0XFF;
}

void port(unsigned char c){
    LATD &=0XF0;  //LATD=LATD&0XF0
    LATB &= 0XF0;
    LATD |=(c & 0x0F); //  | OR
    LATB |=(c>>4);
}

void ss(){
    unsigned char d;
    d=PORTD & 0XF0;
    LATB|=d;
}


void main(void) {
    //OSCCONbits.IRCF=7;
    set_leds();
    //while(1){
        ss();
        port(0xFF);
        __delay_ms(10);
        port(0x00);
        __delay_ms(10);
    
        
    //}
    return;
}
