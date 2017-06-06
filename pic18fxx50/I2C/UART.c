#include <pic18f4550.h>
#include "typedef.h"
#include "UART.h"

void init_uart(u16 baudios){  ///configura el modulo uart con la velocidad de baudios
    TRISCbits.RC6=1;        //configuracion de pines rx,tx
    TRISCbits.RC7=1;
    
    BAUDCONbits.BRG16=1; //REGISTRO DE BAUDIOS DE 16 BITS
    SPBRGH=0x00; 
    SPBRG=207;          // 96000
    
    TXSTAbits.SYNC=0;  //MODO ASINCRONO DE TX
    TXSTAbits.BRGH=1;   //ALTA VELOCIDAD DE TX
    TXSTAbits.TX9=0;    //TRANSMICION DEL NOVENO BIT DESACTIVADA DE TX
    TXSTAbits.TXEN=1;    //ENCENDER TRANSMICION
    
    RCSTAbits.RX9=0;     //RECEPCION DEL NOVENO BIT DESACTIVADA
    RCSTAbits.CREN=1;    //ENCENDER RECEPCION
    RCSTAbits.SPEN=1;
}

void write_uart(u8 a){      //Transmite caracter
   while (!TXSTAbits.TRMT);
        TXREG=a; 
}
u8 read_uart(void){         //recive caracter
     while(!PIR1bits.RCIF);
        return RCREG; 
}

u8 send_msm(u8 *msm){
    u8 a=0;
    do 
        write_uart(msm[a++]);
    while (msm[a]!='\r');
    write_uart('\r');
}

char *read_msm(){
    u8 a=0;
    char c;
    static u8  buffer[25];
    do {
        c=read_uart();
        buffer[a++]=c;
    }
    while (c!='\r');
    buffer[a]='\r';
    return (buffer);
}