/*
 * File:   main.c
 * Author: game
 *
 * Created on 9 de mayo de 2017, 08:20 PM
 */
#include <pic18f4550.h>
#include "adc.h"
#include "configuraciones.h"
#include "typedef.h"
#include "UART.h"
#include "SPI.h"
char msm[]="ESCRIBA UN MSM \r";
#include <xc.h>
char *buffer;
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
    u16 a;
    u8 t=64;
    OSCCONbits.IRCF=7;  //clk a 8MHz
    //set_clock();
    set_port();
    //conf_adc();
    //set_adc(1);
    set_spi();
    //init_uart(9600);
    while(1){
        send_mcp(a++);
        if(a>=4100)
            a=0;
        __delay_ms(1);
       
        }
        
      
    
    return;
}