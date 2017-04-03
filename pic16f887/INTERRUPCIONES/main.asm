; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
list	p=16f887
INCLUDE	"p16f887.inc"

; CONFIG1
; __config 0xFBF2
 __CONFIG _CONFIG1, _FOSC_HS & _WDTE_OFF & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_OFF & _FCMEN_ON & _LVP_ON
; CONFIG2
; __config 0xFFFF
 __CONFIG _CONFIG2, _BOR4V_BOR40V & _WRT_OFF

;cristal 8MHz

RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program
    
INTE_VECT CODE 0x0004
    GOTO    INTER

CBLOCK 0X20
 REG1
 REG2
 REG3
 REG4
 REG5
 REG6
 REG7
 REG8
 FLAG
 LONG  
ENDC
 
    
MAIN_PROG CODE                      ; let linker place main program

ORG 0X05
 

START
;CONFIGURACIÓN DE PUERTOS C Y E COMO SALIDA
   
    BANKSEL ANSEL
    CLRF    ANSEL
    CLRF    ANSELH
    BANKSEL TRISE
    CLRF    TRISC
    MOVLW   0XFF
    MOVWF   TRISB
    MOVLW   B'10010000'
    MOVWF   INTCON
    MOVLW   B'00000000'
    MOVWF   OPTION_REG
    BANKSEL PORTC
    CLRF    PORTC
    CLRF    REG6
   
CC
    CALL    RETARDO
    GOTO    CC
    
  
    
    
;.............................................
INTER
    BCF	    INTCON,7
    BCF	    INTCON,1
    INCF    REG6,F
    MOVF    REG6,W
    MOVWF    PORTC
    BSF	    INTCON,7
    RETFIE
;----------RUTINA DE RETARDO---------------
RETARDO		MOVLW	.2
		MOVWF	REG3
DOS		MOVLW	.2
		MOVWF	REG2
UNO		MOVLW	.25
		MOVWF	REG1
		DECFSZ	REG1,1
		GOTO	$-1
		DECFSZ	REG2,1
		GOTO	UNO
		DECFSZ	REG3,1
		GOTO	DOS
		RETURN
;------------------------------------------

END