/* 
 * File:   SPI.c
 * Author: game
 *
 * Created on 5 de noviembre de 2016, 08:35 AM
 */

#include <pic18f4550.h>
#include <xc.h>
#include "typedef.h"
#include "configuraciones.h"
void set_spi(){
    SSPSTATbits.SMP=0;
    SSPSTATbits.CKE=0;
    SSPCON1bits.CKP=0; 
    SSPCON1bits.SSPM=1;
    TRISC=0X00;
    SSPCON1bits.SSPEN=1;
    
}

unsigned char send_spi(unsigned char data)
    {
    SSPBUF = data;             // write to buffer for TX
    while (!SSPSTATbits.BF);   // wait for the receive flag (transfer complete)
    return SSPBUF;
    }

void send_mcp(u16 x){
    unsigned char a=x;
    x>>=8;
    unsigned char b=0x10 | x;
    PORTDbits.RD0=0;
    PORTBbits.RB4=1;
    send_spi(b);
    send_spi(a);
    __delay_us(2);
    PORTBbits.RB4=0;
    __delay_us(2);
    PORTBbits.RB4=1;
    PORTDbits.RD0=1;
}
   