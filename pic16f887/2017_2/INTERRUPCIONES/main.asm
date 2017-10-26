; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR

#include "p16f887.inc"

; CONFIG1
; __config 0xFFFC
 __CONFIG _CONFIG1, _FOSC_INTRC_NOCLKOUT & _WDTE_OFF & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_ON & _FCMEN_ON & _LVP_ON
; CONFIG2
; __config 0xFFFF
 __CONFIG _CONFIG2, _BOR4V_BOR40V & _WRT_OFF


 
CBLOCK 0X20
 AUX_W
 AUX_S
 REG1
 REG2	
 REG3
 REG4
 REG5
 CONTEO   ;-256 0 255
 SIGNO
 DATO
 ROTAR
 AUX
ENDC
CBLOCK 0X30
 UNIDADES
 DECENAS 
 CENTENAS
 DECIMAL_1    ;UNIDADES Y DECENAS
 DECIMAL_2    ;CENTENAS
 FLAG
ENDC 
 
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

INT_VECT  CODE    0x0004            ; processor reset vector
    GOTO    INTERRUPCION        
; TODO ADD INTERRUPTS HERE IF USED
ORG 0X05
MAIN_PROG CODE                      ; let linker place main program

START
    BANKSEL	ANSEL
    CLRF	ANSEL
    CLRF        ANSELH
    BANKSEL	OPTION_REG
    BSF		OPTION_REG,6	    ;INTERRUPCION POR FLANCO ASENDENTE
    MOVLW	0XFF	
    MOVWF	TRISB
    CLRF	TRISC
    CLRF	TRISD
    BANKSEL	PORTB
    BSF		INTCON,7	    ;ACTIVAR INTERRUPCIONES GLOBALES
    BSF		INTCON,4	    ;ACTIVAR INTERRUPCIONES POR FLANCO
    
LOOP_3:
    COMF	PORTD
    CALL	RETARDO
    
    GOTO	LOOP_3                          ; loop forever

;---SECUENCIA DE RETARTDO---------------    
RETARDO:
    MOVLW	.43	    ;1
    MOVWF	REG2	    ;1

LOOP_1:
    MOVLW	.50	    ;1      REG2=255	
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
    ;T=(3*REG1*REG2+(2*REG1-1)*REG2+REG2+2*REG2-1+2)*(Tcy)    
    
ORG 0X100
INTERRUPCION:
    BCF	    INTCON,4
    BCF	    INTCON,1
    ;-----SALVAR W Y STATUS
    MOVWF   AUX_W
    SWAPF   STATUS,W
    MOVWF   AUX_S
    ;--------------------------
    COMF    PORTC
    
    ;RESTAURAR W Y STATUS
    SWAPF   AUX_S,W
    MOVWF   STATUS
    MOVF    AUX_W,W
    ;---------------------------
    BSF	    INTCON,4
    RETFIE
    END