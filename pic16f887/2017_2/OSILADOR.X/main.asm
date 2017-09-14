; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
; PIC16F887 Configuration Bit Settings

; Assembly source line config statements

#include "p16f887.inc"

; CONFIG1
; __config 0xFFF2
 __CONFIG _CONFIG1, _FOSC_HS & _WDTE_OFF & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_ON & _FCMEN_ON & _LVP_ON
; CONFIG2
; __config 0xFFFF
 __CONFIG _CONFIG2, _BOR4V_BOR40V & _WRT_OFF


    
    
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program

START
    MOVLW	0X55;0b01010101
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
    
LOOP:    
    COMF	PORTB		;UN CICLO DE MAQUINA

    GOTO LOOP                         ; DOS CICLOS MAQUINA

    END