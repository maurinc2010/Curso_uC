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
 
CBLOCK 0X20
 REG1
 REG2
 REG3
 REG4
 FLAG
 UNIDADES
 DECENAS
ENDC
 
CBLOCK	0XA0
 REG5
 REG6
ENDC
 
 
    
    
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program
 
ORG 0X05
TABLA	ADDWF	PCL,1				;7448
	retlw	b'00111111'	;0
	retlw	b'00000110'	;1
	retlw	b'01011011'	;2
	retlw	b'01001111'	;3
	retlw	b'01100110'	;4
	retlw	b'01101101'	;5
	retlw	b'01111101'	;6
	retlw	b'00000111'	;7
	retlw	b'01111111'	;8
	retlw	b'01101111'	;9
	retlw	b'01110111'	;a
	retlw	b'01111100'	;b
	retlw	b'00111001'	;c
	retlw	b'01011110'	;d
	retlw	b'01111001'	;e
	retlw	b'01110001'	;f
	retlw	0
	
TABLA1	ADDWF	PCL,1
	DT	0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67

START
    BSF	    STATUS,5		;BANCO 1
    CLRF    TRISB
    CLRF    TRISD
    CLRF    TRISC
    BCF	    STATUS,5		;BANCO 0
    CLRF    UNIDADES
    CLRF    DECENAS
    CLRF    FLAG
    CLRF    PORTB
    CLRF    PORTC
    CLRF    PORTD

BCDD:    
    CALL    RETARDO
    MOVF    UNIDADES,W
    BCF	    FLAG,0
    CALL    CONTADOR
    MOVWF   UNIDADES
    CALL    TABLA1
    MOVWF   PORTC
    BTFSS   FLAG,0
    GOTO    BCDD
    CLRF    UNIDADES
    MOVF    DECENAS,W
    BCF	    FLAG,0
    CALL    CONTADOR
    MOVWF   DECENAS
    CALL    TABLA
    MOVWF   PORTD
    BTFSS   FLAG,0
    GOTO    BCDD
    CLRF    DECENAS
    GOTO    BCDD
    
    
    
    
    GOTO $                          ; loop forever    
    
CONTADOR    MOVWF    REG3
	    INCF     REG3
	    MOVF     REG3,W
	    XORLW   .10
	    BTFSS   STATUS,Z
	    GOTO    MENOR
	    MOVLW   .0
	    BSF	    FLAG,0
	    RETURN
MENOR	    MOVF    REG3,W
	    RETURN

;----------RUTINA DE RETARDO---------------
RETARDO		MOVLW	.5
		MOVWF	REG3
DOS		MOVLW	.255
		MOVWF	REG2
UNO		MOVLW	.255
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