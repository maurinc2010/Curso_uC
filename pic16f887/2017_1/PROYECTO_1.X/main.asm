; TODO INSERT CONFIG CODE HERE USING CONFIG BITS GENERATOR
__CONFIG1 EQU H'2007'
TRISB EQU  H'0086'
PORTB	EQU H'0006'
STATUS	EQU H'0003'
__CONFIG __CONFIG1, 0002	
RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

; TODO ADD INTERRUPTS HERE IF USED

MAIN_PROG CODE                      ; let linker place main program

START
 
    BSF	STATUS,5
    MOVLW   0X00
    MOVWF   TRISB
    BCF	    STATUS,5
    
    MOVLW   0XFF
    MOVWF    PORTB
    
    MOVLW   0XF0
    MOVWF    PORTB
    
    GOTO $                          ; loop forever

    END