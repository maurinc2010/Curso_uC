/*
 * File:   main.c
 * Author: game
 *
 * Created on 9 de mayo de 2017, 08:20 PM
 */
#include "pic18f4550.h"
#include "timer_0.h"
#include "configuraciones.h"
#include "typedef.h"

#include <xc.h>
u8 flag,flag_t,flag_p;
void main(void) {
    set_timer(200, ms);
    while(1){
        if(flag_time()){
            flag_t=flag_t+1;
           flag_p=flag_p+1;
        }
        
      
    }
    return;
}
