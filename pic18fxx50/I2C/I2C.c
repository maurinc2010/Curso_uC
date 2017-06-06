#include "pic18f4550.h"
#include "typedef.h"
#include "I2C.h"

void I2C_init(u8 modo ,u16 speed){
    TRISBbits.TRISB0 = 1;			// SDA = INPUT
    TRISBbits.TRISB1 = 1;			// SCL = INPUT
    SSPCON1= 0b00101000;		// Master Mode, clock = FOSC/(4 * (SSPADD + 1))
    SSPSTATbits.SMP = 0;    // Slew Mode On
    SSPADD= 29;             // 400kHz = FOSC/(4 * (SSPADD + 1)) 
    SSPCON2= 0;
    PIR1bits.SSPIF = 0; // MSSP Interrupt Flag
    PIR2bits.BCLIF = 0; // Bus Collision Interrupt Flag
    
}