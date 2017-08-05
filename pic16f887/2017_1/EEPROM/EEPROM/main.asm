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
 EDATA
 EADDR
 REG1
 REG2
 REG3
 REG4
 REG5
 REG6
 REG7
 REG8
 FLAG
 
ENDC
CBLOCK 0X35
 UNIDADES
 DECENAS
 CENTENAS
 MIL
ENDC


RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program
    
INT_VECT  CODE    0x0004           ; processor reset vector
    GOTO    INTER                   ; go to beginning of program

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
    BANKSEL PORTB
    
    MOVLW   0X0F
    MOVWF   EADDR
    
    MOVLW   0XAA
    MOVWF   EDATA
    
    CALL    EWRITE
    MOVLW   0X0F
    CALL    EREAD
    MOVWF   PORTC
    
    GOTO $
    
    
;---ESCRIBIR EEPROM
EWRITE
    BANKSEL EEADR
    MOVLW   0X20
    MOVWF   FSR
    MOVF    INDF,W
    MOVWF   EEDAT
    INCF    FSR
    MOVF    INDF,W
    MOVWF   EEADR
    BANKSEL EECON1
    BCF	    EECON1,EEPGD
    BSF	    EECON1,WREN
    
    BCF	    INTCON,GIE
    BTFSC   INTCON,GIE
    GOTO    $-2
    
    MOVLW   0X55
    MOVWF   EECON2
    MOVLW   0XAA
    MOVWF   EECON2
    
    BSF	    EECON1,WR
    BSF	    INTCON,GIE
    NOP
    NOP 
    NOP
    NOP
    
    BTFSC   EECON1,WR
    GOTO    $-1
    BCF	    EECON1,WREN
    BANKSEL PORTB
    
    RETURN
    
    
    
;---LEER EEPROM
EREAD
    BANKSEL EEADR
    MOVWF   EEADR	    ;DIRECIÓN QUE SE LEE DE LA EEPROM
    
    BANKSEL EECON1
    BCF	    EECON1,EEPGD    ;SE SELECIONA LA MEMORIA EEPROM
    BSF	    EECON1,RD	    ;SE INICIA LA LECTURA DE LA EEPROM
    BANKSEL EEDAT
    MOVF    EEDAT,W	    ;MUEVE EL DATO LEIDO DE LA EEPROM A W
    BANKSEL PORTB
    RETURN
    ;...........................................................
    
INTER
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