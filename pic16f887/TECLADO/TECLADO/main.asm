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
 SW
 SS
 TECLA
 COL
 FILA
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
    CLRF    TRISD
    MOVLW   0XF0
    MOVWF   TRISB
    MOVLW   B'00000111'
    MOVWF   OPTION_REG  
    
    BANKSEL WPUB
    MOVLW   0XF0
    MOVWF   WPUB	;RESISTENCIAS DE PULL-UP
    MOVWF   IOCB	;INT CAMBIO DE ESTADO
    MOVLW   0X88	; ACTIVA GLOBAL INT Y EL PORTB
    MOVWF   INTCON
    BANKSEL PORTB
    MOVLW   0XF0
    MOVWF   PORTB
  
   
CC
    
    ;MOVWF   PORTB
    GOTO    CC
    
  
    
    
;.............................................
INTER
    ;BCF	    INTCON,7
    ;---SE SALVA W Y STATUS
    MOVWF   SW
    SWAPF   STATUS,W
    MOVWF   SS
 ;RUTINA DE GESTION DE INTERRUPCIONES-----
 ;----------------------------------------
 ;....RUTINA DE TECLADO........
    CALL    RETARDO
    MOVLW   0XFF
    MOVWF   PORTB
    BCF	    PORTB,0
    CLRF    FILA
    CLRF    COL
    GOTO    COLUMNA
    ;........................

FN_1:
    BSF	    STATUS,C
    RLF	    PORTB
    MOVLW   0X04
    ADDWF   COL
    INCF    FILA
    BTFSS   FILA,3
    GOTO    COLUMNA
    GOTO    RET
    
    
    
    

   
;---TESTEO DE COLUMNA
COLUMNA:
    BTFSC   PORTB,4
    GOTO    $+4
    MOVLW   0
    ADDWF   COL
    GOTO    RET
    BTFSC   PORTB,5
    GOTO    $+4
    MOVLW   1
    ADDWF   COL
    GOTO    RET
    BTFSC   PORTB,6
    GOTO    $+4
    MOVLW   2
    ADDWF   COL
    GOTO    RET
    BTFSC   PORTB,7
    GOTO    FN_1
    MOVLW   3
    ADDWF   COL
    GOTO    RET
    
    
RB4_RB0:    
    BTFSC   PORTB,4
    ;11101110
    GOTO    RB5_RB0
    MOVLW   0X07
    GOTO    RET
RB5_RB0:
    BTFSC   PORTB,5  ;11011110
    GOTO    RB6_RB0
    MOVLW   0X08
    GOTO    RET
    
RB6_RB0:
    BTFSC   PORTB,6  ;10111110
    GOTO    RB7_RB0
    MOVLW   0X09
    GOTO    RET
    
RB7_RB0:
    BTFSC   PORTB,7  ;11011110
    GOTO    RB4_RB1
    MOVLW   0X0A
    GOTO    RET
    
RB4_RB1:
    BSF	    STATUS,C
    RLF	    PORTB
    BTFSC   PORTB,4
    ;11101110
    GOTO    RB5_RB1
    MOVLW   0X04
    GOTO    RET
    
RB5_RB1:
    BTFSC   PORTB,5  ;11011110
    GOTO    RB6_RB1
    MOVLW   0X05
    GOTO    RET
    
RB6_RB1:
    BTFSC   PORTB,6  ;10111110
    GOTO    RB7_RB1
    MOVLW   0X06
    GOTO    RET
    
RB7_RB1:
    BTFSC   PORTB,7  ;11011110
    GOTO    RB4_RB2
    MOVLW   0X0B
    GOTO    RET

RB4_RB2:
    BSF	    STATUS,C
    RLF	    PORTB
    BTFSC   PORTB,4
    ;11101110
    GOTO    RB5_RB2
    MOVLW   0X01
    GOTO    RET
    
RB5_RB2:
    BTFSC   PORTB,5  ;11011110
    GOTO    RB6_RB2
    MOVLW   0X02
    GOTO    RET
    
RB6_RB2:
    BTFSC   PORTB,6  ;10111110
    GOTO    RB7_RB2
    MOVLW   0X03
    GOTO    RET
    
RB7_RB2:
    BTFSC   PORTB,7  ;11011110
    GOTO    RB4_RB3
    MOVLW   0X0C
    GOTO    RET
    
RB4_RB3:
    BSF	    STATUS,C
    RLF	    PORTB
    BTFSC   PORTB,4
    ;11101110
    GOTO    RB5_RB3
    MOVLW   0X0D
    GOTO    RET
    
RB5_RB3:
    BTFSC   PORTB,5  ;11011110
    GOTO    RB6_RB3
    MOVLW   0X00
    GOTO    RET
    
RB6_RB3:
    BTFSC   PORTB,6  ;10111110
    GOTO    RB7_RB3
    MOVLW   0X0E
    GOTO    RET
    
RB7_RB3:
    BTFSC   PORTB,7  ;11011110
    GOTO    RET
    MOVLW   0X0F
    GOTO    RET


    
    
    
;....RESTAURA W Y STATUS......
RET
    MOVF    COL,W
    ;ADDWF   COL,W
    MOVWF   PORTC
    MOVLW   0XF0
    MOVWF   PORTB
   
    BCF	    INTCON,0
    SWAPF   SS,W
    MOVWF   STATUS
    MOVF    SW,W
    RETFIE
    
MULTI
	    MOVF   REG3,W
	    DECF   REG4,F
ESTADO	    
	    ADDWF   REG3,F
	    DECF    REG4,F
	    BTFSS   STATUS,Z
	    GOTO    $-3
	    RETURN
;----------RUTINA DE RETARDO---------------
RETARDO		MOVLW	.2
		MOVWF	REG3
DOS		MOVLW	.2
		MOVWF	REG2
UNO		MOVLW	.2
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