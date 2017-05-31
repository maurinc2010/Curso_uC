/* 
 * File:   PWM.h
 * Author: game
 *
 * Created on 24 de mayo de 2017, 12:56 PM
 */

#ifndef PWM_H
#define	PWM_H

#include "typedef.h"
#define PWMMODE         0b00001100 
#define CCP1    1
#define CCP2    2

void init_pwm(u8,u8,u16,u16);

void set_pin(u8 , u8 );     //seleciona el pin de salida del pwm

void set_frecuencia(u16 );  //establece la frecuencia de la pwm

void set_duty(u8 ,u16);    //ciclo util


#endif	/* PWM_H */

