/* 
 * File:   MCP4821.h
 * Author: game
 *
 * Created on 1 de junio de 2017, 10:40 AM
 */

#ifndef MCP4821_H
#define	MCP4821_H
#include "typedef.h"

void SPI_INIT();
u8 SPI_WRITE(u8);
void WRITE_MCP(u16);

#endif	/* MCP4821_H */

