/* 
 * File:   UART.h
 * Author: game
 *
 * Created on 30 de mayo de 2017, 09:44 PM
 */

#ifndef UART_H
#define	UART_H
#include "typedef.h"

void init_uart(u16 baudios);  ///configura el modulo uart con la velocidad de baudios
void write_uart(u8 a);      //Transmite caracter
u8 read_uart(void);         //recive caracter
u8 send_msm(u8 *msm);
char *read_msm();

#endif	/* UART_H */

