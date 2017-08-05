#include "typedef.h"
#include "configuraciones.h"
#define  word_control 0x10

void SPI_INIT(){
    SSPSTATbits.SMP=0;
    SSPSTATbits.CKE=0;
    SSPCON1bits.SSPEN=1;
    SSPCON1bits.CKP=0;
    SSPCON1bits.SSPM=0;
    TRISC=0X00;
}

u8 SPI_WRITE(u8 data){
     SSPBUF=data;
     while (!SSPSTATbits.BF);   // wait for the receive flag (transfer complete)
     return SSPBUF;
}

void WRITE_MCP(u16 data){
    
    u8 aux= data>>8;
    aux=aux | word_control;
    
    PORTDbits.RD0=0; //cs=0
    SPI_WRITE(aux);
    SPI_WRITE(data);
    __delay_us(2);
    PORTBbits.RB4=0; //ld=0
    __delay_us(2);
    PORTBbits.RB4=1;  //ld=1  
    PORTDbits.RD0=1;  //cs=1
}
