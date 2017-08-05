/* 
 * File:   timer_0.h
 * Author: game
 *
 * Created on 9 de mayo de 2017, 08:25 PM
 */

#ifndef TIMER_0_H
#define	TIMER_0_H
#include "typedef.h"

u32 periodo;
u8 tl;
u8 th;

void set_timer(u32 time,u8 unidad);
void set_time();
void init_timer( u8 state);
u8 flag_time();

#endif	/* TIMER_0_H */

