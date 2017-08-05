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
    TRISC=0;
    PORTC=0;
}

void port(unsigned char c){
    LATD &=0XF0;  //LATD=LATD&0XF0
    LATB &= 0XF0;
    LATD |=(c & 0x0F); //  | OR
    LATB |=(c>>4);
}

unsigned char input_d(){
    unsigned char d;
    d=(PORTD & 0XF0)>>4;
    LATC=d;
    return d;
}

unsigned char contador(unsigned char i){
    //unsigned char m;
    ///contador----
        //for (m=i;m<=255;m++){
        
           port(i++);
          __delay_ms(90);
        //}
          return i;
}

unsigned char comparar(unsigned char i){
    if(i==0XFF)
        return 0xF0;
    else if (i==0x0F)
       return 0;
    else 
       return 0xAA;              
}


void main(void) {
    OSCCONbits.IRCF=7;
    set_leds();
    unsigned char i;
    while(1){
        ///ss();        
        switch (input_d()){
            case 0:
            {
                i=contador(i);

                break;
            }
            case 1:
            {
                i=comparar(i);
                port(i);
                __delay_ms(90);
                break;
            }
            
            default:
                break;
        }
        
    
        
    }
    return;
}
