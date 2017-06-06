/*
 * File:   adc.c
 * Author: game
 *
 * Created on 26 de noviembre de 2016, 09:05 AM
 */

#include <pic18f4550.h>
#include "adc.h"


void conf_adc(void){
    TRISAbits.RA0=1;    //pin ra0 como entrada
    ADCON2bits.ADCS=1;  //tad=1us
    ADCON2bits.ACQT=2;  //tacq=4us
    ADCON1=0;           //todos los anx como entradas analogicas
    ADCON0bits.CHS=0;   //an0 como entrada analogica
    ADCON2bits.ADFM=derecha; //justificacion
}

void set_adc(unsigned char x){
    ADCON0bits.ADON=x;          //enciende el modulo adc
}

void star_convercion(void){
    ADCON0bits.GO=1;            //inicia conversion
}

unsigned char final_convercion(void){
    if (PIR1bits.ADIF){         //conversion exitosa
        PIR1bits.ADIF=0;
        return 1;
    }
    else
        return 0;
    
}

unsigned char dato_8(void){
    return (ADRESL);
    
}

int dato_16(){
    unsigned int y;
    y=ADRESH;
    y<<=8;
    y|=ADRESL;
    return y;
    
}
