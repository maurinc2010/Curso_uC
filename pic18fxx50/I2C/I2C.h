/* 
 * File:   I2C.h
 * Author: game
 *
 * Created on 1 de junio de 2017, 09:01 AM
 */

#ifndef I2C_H
#define	I2C_H

#include "typedef.h"

// Mode I2C
#define I2C_WRITE		0
#define I2C_READ		1
#define I2C_MASTER_MODE	0
#define I2C_SLAVE_MODE	1
#define I2C_SLEW_OFF	0
#define I2C_SLEW_ON		1

// Speed definitions
#define I2C_100KHZ		100
#define I2C_400KHZ		400
#define I2C_1MHZ		1000


void I2C_init(u8,u16);

u8 I2C_write(u8);
u8 I2C_read();
#endif	/* I2C_H */

