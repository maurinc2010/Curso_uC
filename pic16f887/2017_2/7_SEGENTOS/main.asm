; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
; PIC16F887 Configuration Bit Settings

; Assembly source line config statements

#include "p16f887.inc"

; CONFIG1
; __config 0xFFFC
 __CONFIG _CONFIG1, _FOSC_INTRC_NOCLKOUT & _WDTE_ON & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_ON & _FCMEN_ON & _LVP_ON
; CONFIG2
; __config 0xFFFF
 __CONFIG _CONFIG2, _BOR4V_BOR40V & _WRT_OFF


 
CBLOCK 0X20
 REG1
 REG2	
 REG3
 REG4
 REG5
 FLAG
ENDC 
    
    
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program

START
    MOVLW	0b01110111;0b01010101
    banksel	OSCCON
    
    MOVWF	OSCCON
    ;BSF		OSCCON,4
    ;BSF		OSCCON,6
    ;BCF		OSCCON,5
    ;BSF		OSCCON,2
    ;BCF		OSCCON,3        ;PARA TRABAJAR CON RELOJ INTERNO
    ;BSF		OSCCON,3        ;PARA TRABAJAR CON RELOJ EXTERNO
;    BCF		OSCCON,0	;PARA TRABAJAR CON RELOJ EXTERNO
    ;BSF		OSCCON,0	;PARA TRABAJAR CON RELOJ INTERNO
    
    CLRF	TRISB
    BANKSEL	PORTB
    CLRF	PORTB
        
   
END_R:
    CALL    RETARDO
    COMF    PORTB
    GOTO    END_R
    
RETARDO:
    MOVLW	.255	    ;1
    MOVWF	REG2	    ;1

LOOP_1:
    MOVLW	.255	    ;1      REG2=255	
    MOVWF	REG1	    ;1	    REG2=255	
    
    LOOP:    
    NOP			    ;1      REG1*REG2
    NOP			    ;1      REG1*REG2
    NOP			    ;1      REG1*REG2
    DECFSZ    REG1,F	    ;1	    REG1*REG2
    GOTO      LOOP	    ;2	    (2*REG1-1)*REG2
    DECFSZ    REG2,F	    ;1	    REG2
    GOTO      LOOP_1	    ;2	    2*REG2-1
    RETURN		    ;2	
     ;R=(Tciclo*REG1*4)-1+2*Tciclo
    
END