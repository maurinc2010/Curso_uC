/* 
 * File:   adc.h
 * Author: game
 *
 * Created on 24 de mayo de 2017, 12:18 AM
 */

#ifndef ADC_H
#define	ADC_H

#define izquierda 0;
#define derecha   1;

void conf_adc(void);  //Configura el TAD,TACQ

void set_adc(unsigned char a); //enciende modulo adc
 
void star_convercion(void); //inicializa adc

unsigned char final_convercion(void);  //flag de fin de convercion

unsigned char dato_8(void); //ocho bit mas bajo

int dato_16(void); //conversion de 10 bits

#endif	/* ADC_H */

