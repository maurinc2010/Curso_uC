; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
    
    STATUS	    EQU H'0003'
    FSR		    EQU H'0004'
    PORTA	    EQU H'0005'
    PORTB	    EQU H'0006'
    PORTC	    EQU H'0007'
    PORTD	    EQU H'0008'
    PORTE	    EQU H'0009'
    PCLATCH	    EQU H'000A'
    INTCON	    EQU H'000B'
    TRISB	    EQU H'0086'
    TRISD	    EQU	H'0088'	 

RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE	0x0005                     ; let linker place main program

START
 ;OPERACIONES DE BIT
    CLRF    PORTB
    BSF	    STATUS,5
    ;BCF	    TRISB,2
    CLRF    TRISB
    CLRF    TRISD
    BCF	    STATUS,5
    BSF	    PORTB,2
    
  ;OPERACIONES DE MOVIEMIENTO
    MOVLW   0XAA	;MOVER DE MEMORIA DE PROGRAMA AL ACUMULADOR
    MOVWF   PORTB	;MUEVE DEL ACUMULADOR AL PUERTO B
    MOVF    PORTB,W	;MUEVE EL VALOR DE PORTB AL ACUMULADOR
    
    COMF    PORTB,F
    CLRW    
    COMF    PORTB,W
    MOVWF   PORTD
    
    GOTO $                          ; loop forever

    END