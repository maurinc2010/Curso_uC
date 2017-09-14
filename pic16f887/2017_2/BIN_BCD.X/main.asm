; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
#INCLUDE "p16f887.inc"
CBLOCK 0X20
 DECIMAL_1    ;UNIDADES Y DECENAS
 DECIMAL_2    ;CENTENAS	
 DATO
 AUX
 ROTAR
ENDC    
    
    
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program
 


START
    
    BANKSEL TRISB
    CLRF    TRISC
    CLRF    TRISD
    BANKSEL PORTB
    
    CLRF    PORTD
    CLRF    PORTC
    
    MOVLW   .230
    MOVWF   DATO
    
    MOVLW   .5
    MOVWF   ROTAR
    RLF	    DATO,F
    CALL    ROTAR_IZQUIERDA
    
    RLF	    DATO,F
    CALL    ROTAR_IZQUIERDA
    
COMPROBAR_UNIDADES:
    RLF	    DATO,F
    CALL    ROTAR_IZQUIERDA
    
    
    MOVF    DECIMAL_1,W  
    SUBLW   .4
    BTFSC   STATUS,DC
    GOTO    COMPROBAR_DECENAS
    MOVF    DECIMAL_1,W  
    ADDLW   .3
    MOVWF   DECIMAL_1
    
COMPROBAR_DECENAS:
    MOVF    DECIMAL_1,W  
    ANDLW   0XF0
    MOVWF   AUX
    SUBLW   0X40
    BTFSC   STATUS,C
    GOTO    COMPROBAR_CENTENAS
    MOVF    AUX,W
    ADDLW   0X30
    MOVWF   AUX
    
    BTFSS   STATUS,C
    GOTO    CC
    INCF    DECIMAL_2,F
CC:    
    MOVF    DECIMAL_1,W
    ANDLW   0X0F
    XORWF   AUX,W
    MOVWF   DECIMAL_1
    
 COMPROBAR_CENTENAS:
    MOVF    DECIMAL_2,W  
    SUBLW   .4
    BTFSC   STATUS,DC
    GOTO    CF
    MOVF    DECIMAL_2,W
    ADDLW   .3
    MOVWF   DECIMAL_2
CF:    
    DECF    ROTAR,F
    BTFSS   STATUS,Z
    GOTO    COMPROBAR_UNIDADES
    
    RLF	    DATO,F
    CALL    ROTAR_IZQUIERDA
    
    MOVF    DECIMAL_1,W
    MOVWF   PORTD
    
    MOVF    DECIMAL_2,W
    MOVWF   PORTC
    
    GOTO $                          ; loop forever
    
ROTAR_IZQUIERDA:
    RLF	    DECIMAL_1,F
    RLF	    DECIMAL_2,F
    RETURN

END