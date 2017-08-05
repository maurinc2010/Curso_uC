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
 REG7
 REG8
 FLAG
 LONG  ;32
ENDC
CBLOCK 0X35
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
    MOVLW   .16
    MOVWF   LONG
    
    
    
    CALL    INI74HC
BUCLE:
    CALL    L74HC
    ;CALL    RETARDO
    ;CALL    ESTEROSCO
   ; INCF    MIL
   ; BTFSS   STATUS,Z
    ;BTFSS   MIL,7
    ;GOTO    BUCLE
    ;CALL    BCDD
    GOTO    BUCLE




    GOTO $                          ; loop forever

L74HC
    DECF    LONG    
    BTFSS   STATUS,Z
    GOTO    $+3
    CALL    INI74HC
    RETURN
    BSF	    PORTC,0 ;CLOCK
    ;RETARDO
    BCF	    PORTC,0 ;CLOCK
    RETURN
    
INI74HC
    BCF	    PORTC,0 ;CLOCK
    BSF	    PORTC,1 ;DATA
    BSF	    PORTC,0 ;CLOCK
    BCF	    PORTC,0 ;CLOCK
    BCF	    PORTC,1 ;DATA
    RETURN
	    
    
MULTI
	    MOVF   REG3,W
	    DECF   REG4,F
ESTADO	    
	    ADDWF   REG3,F
	    DECF    REG4,F
	    BTFSS   STATUS,Z
	    GOTO    $-3
	    RETURN
	    

;+++++++++++++++++++++++++++++++++++++++++++++++++++++
ESTEROSCO
	    ;AND ROT (REG5) AND 0XFF
	    MOVLW   0XFF
	    MOVWF   REG5
	    BCF     REG5,0
	    ;REG8=DECENAS*8
	    MOVF    DECENAS,W
	    MOVWF   REG3
	    MOVLW   .8
	    MOVWF   REG4
	    CALL    MULTI
	    MOVF    REG3,W
	    MOVWF   REG7
	    ;REG7=UNIDADES*8
	    MOVF    UNIDADES,W
	    MOVWF   REG3
	    MOVLW   .8
	    MOVWF   REG4
	    CALL    MULTI
	    MOVF    REG3,W
	    MOVWF   REG8
	    
EST
	    MOVF    REG5,W
	    MOVWF   PORTB
TSR
	    MOVF    REG7,W
	    CALL    NUMEROS
	    MOVWF   PORTD
	    MOVF    REG8,W
	    CALL    NUMEROS
	    MOVWF   PORTC
	    CALL    RETARDO
	    INCF    REG7
	    INCF    REG8
	    BSF	    STATUS,C
	    RLF	    REG5,F
	    BTFSC   STATUS,C
	    GOTO    EST
	    ;CLRF    REG4
	    ;CLRF    REG6
	    RETURN
;-----------------------------------------------------

;......................................................+
BCDD
    MOVLW   0X35
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
RETARDO		MOVLW	.255
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
NUMEROS:		
    ADDWF	PCL,1
	DT	.63,.63,.51,.51,.51,.51,.63,.63 ;NUMERO 0
	DT	.4,.12,.4,.4,.4,.4,.63,.63	;NUMERO 1
	DT	.6,.9,.9,.2,.4,.8,.63,.63	;NUMERO 2
	DT	.63,.1,.2,.4,.2,.1,.1,.63	;NUEMR0 3
	DT	.2,.6,.10,.31,.2,.2,.2,.63	;NUMERO 4







END