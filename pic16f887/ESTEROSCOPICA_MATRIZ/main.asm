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
 REG5
 REG6
 FLAG
ENDC
CBLOCK 0X28
 UNIDADES
 DECENAS
 CENTENAS
 MIL
ENDC

;CBLOCK	0XA0
; REG5
; REG6
;ENDC




RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program

ORG 0X05

START
    BSF	    STATUS,5		;BANCO 1
    CLRF    TRISB
    CLRF    TRISD
    CLRF    TRISC
    BCF	    STATUS,5		;BANCO 0
    CLRF    UNIDADES
    CLRF    DECENAS
    CLRF    CENTENAS
    CLRF    MIL
    CLRF    FLAG
    CLRF    REG4
    CLRF    PORTB
    CLRF    PORTC
    CLRF    PORTD
    MOVLW   0XFF
    MOVWF   REG5

BUCLE:
    MOVLW   .8
    MOVWF   REG4
    MOVWF   REG6
    CALL    ESTEROSCO
    ;INCF    REG4
    ;BTFSS   STATUS,Z
    ;BTFSS   REG4,7
    ;GOTO    BUCLE
    ;CALL    BCDD
    MOVLW   .3
    MOVWF   REG3
    MOVLW   .8
    MOVWF   REG4
    CALL    MULTI
    GOTO    BUCLE




    GOTO $                          ; loop forever
    

	    

;+++++++++++++++++++++++++++++++++++++++++++++++++++++
ESTEROSCO
	    MOVLW   0XFF
	    MOVWF   REG5
	    BCF     REG5,0
EST
	    MOVF    REG5,W
	    MOVWF   PORTB
TSR
	    MOVF    REG4,W
	    CALL    NUMEROS
	    MOVWF   PORTD
	    MOVF    REG6,W
	    CALL    NUMEROS
	    MOVWF   PORTC
	    CALL    RETARDO
	    INCF    REG4
	    INCF    REG6
	    BSF	    STATUS,C
	    RLF	    REG5,F
	    BTFSC   STATUS,C
	    GOTO    EST
	    CLRF    REG4
	    CLRF    REG6
	    RETURN
;-----------------------------------------------------

;......................................................+
BCDD
    MOVLW   0X28
    MOVWF   FSR
BCCC
    BCF	    FLAG,0
    MOVF    INDF,W
    CALL    CONTADOR
    MOVWF   INDF
    BTFSS   FLAG,0
    RETURN
    CLRF    INDF
    INCF    FSR
    GOTO    BCCC
;.....................................................


;*++++++CONTADOR DE 0 A 9 +++++++++++++++++++++
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
;++++++++++++++++++++++++++++++++++++++++++++++++++++++

;----------RUTINA DE RETARDO---------------
RETARDO		MOVLW	.1
		MOVWF	REG3
DOS		MOVLW	.2
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
NUMEROS:		
    ADDWF	PCL,1
	DT	.63,.63,.51,.51,.51,.51,.63,.63 ;NUMERO 0
	DT	.4,.12,.4,.4,.4,.4,.63,.63	;NUMERO 1
	




END