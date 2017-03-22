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
    BSF	    STATUS,5
    CLRF    TRISD
    CLRF    TRISC
    BCF	    STATUS,5		;BANCO 0
    CLRF    FLAG
    CLRF    REG4
    CLRF    PORTC
    CLRF    PORTD  
    MOVLW   .32
    MOVWF   LONG 
    
    CLRF   REG5
DD:    
    MOVLW   .16
    MOVWF   PCLATH
    MOVF    REG5,W
    CALL    NUMEROS
    MOVWF   PORTC
    MOVLW   .0
    MOVWF   PCLATH
    CALL    INI74HC
    CALL    RETARDO
FF:
    INCF    REG5
    BTFSS   REG5,3
    GOTO    $+6
    CLRF    REG5
    ;MOVF    LONG,W
    BTFSS   LONG,1
    GOTO    $-5
    GOTO    DD
    MOVLW   .255
    MOVWF   PORTC
    CALL    L74HC
    ;MOVF    REG5,W
    MOVLW   .16
    MOVWF   PCLATH
    MOVF    REG5,W
    CALL    NUMEROS
    MOVWF   PORTC
    MOVLW   .0
    MOVWF   PCLATH
    CALL    RETARDO
    CALL    BCDD
    GOTO    FF
    
    
    GOTO $                          ; loop forever

L74HC
    DECF    LONG    
    BTFSS   STATUS,Z
    GOTO    $+3
    CALL    INI74HC
    RETURN
    BSF	    PORTD,0 ;CLOCK
    ;CALL    RETARDO
    BCF	    PORTD,0 ;CLOCK
    RETURN
    
INI74HC
    MOVLW   .32
    MOVWF   LONG 
    BCF	    PORTD,0 ;CLOCK
    BSF	    PORTD,1 ;DATA
    BSF	    PORTD,0 ;CLOCK
    BCF	    PORTD,0 ;CLOCK
    BCF	    PORTD,1 ;DATA
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
ORG 0X1000
NUMEROS:		
    ADDWF	PCL,1
	DT	.0,.0,.60,.60,.60,.0,.0,.255		    ;NUMERO 0
	DT	.255,.254,.254,.0,.190,.254,.255,.255	    ;NUMERO 1
	DT	.255,.142,.118,.122,.156,.254,.255,.255	    ;NUMERO 2
	DT	.255,.120,.22,.110,.126,.125,.255,.255	    ;NUEMR0 3
	DT	.255,.247,.0,.183,.215,.231,.247,.255	    ;NUMERO 4
	DT	.255,.113,.110,.110,.110,.13,.255,.255	    ;NUMERO 5
	DT	.255,.241,.110,.110,.174,.193,.255,.255	    ;NUMERO 6
	DT	.255,.31,.111,.112,.127,.63,.255,.255	    ;NUMERO 7
	DT	.255,.145,.110,.110,.110,.145,.255,.255	    ;NUMERO 8
	DT	.255,.131,.109,.110,.111,.159,.255,.255	    ;NUMERO 9




END