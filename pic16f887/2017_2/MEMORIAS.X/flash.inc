CBLOCK 0X170
ADDRL
ADDRH	
DATAADDR
DATAH
DATAL
ENDC			   
			    
READ_FLASH:
    BANKSEL	EEADR
    MOVLW	ADDRH
    MOVWF	EEADRH		    ;MS Byte of Program Address to read
    MOVLW	ADDRL
    MOVWF	EEADR		    ;LS Byte of Program Address to read
    BANKSEL	EECON1
    BSF	EECON1, EEPGD		    ;Point to PROGRAM memory
    BSF	EECON1, RD		    ;EE Read
				    ;First instruction after BSF EECON1,RD executes normally
    NOP
    NOP
				    ;Any instructions here are ignored as program
				    ;memory is read in second cycle after BSF EECON1,RD
    BANKSEL	EEDAT
    MOVF	EEDAT, W	    ;W = LS Byte of Program Memory
    MOVWF	DATAL
    MOVF	EEDATH, W	    ;W = MS Byte of Program EEDAT
    MOVWF	DATAH
    BCF	STATUS, RP1		    ;Bank 0;
			
RETURN			    

WRITE_FLASH:
    ;This write routine assumes the following:
    ;
    ;1. A valid starting address (the least significant bits = ?00?)is loaded in ADDRH:ADDRL
    ;2. The 8 bytes of data are loaded, starting at the address in DATADDR
    ;3. ADDRH, ADDRL and DATADDR are all located in shared data memory 0x70 - 0x7f
    ;
    BSF	    STATUS,RP1
    BCF	    STATUS,RP0	;Bank 2
    MOVF    ADDRH,W	;Load initial address
    MOVWF   EEADRH
    MOVF    ADDRL,W
    MOVWF   EEADR
    MOVF    DATAADDR,W
    MOVWF   FSR
LOOP:
    MOVF    INDF,W	;Load first data byte into lower
    MOVWF   EEDAT
    INCF    FSR,F	;Next byte
    MOVF    INDF,W	;Load second data byte into upper
    MOVWF   EEDATH	;
    INCF    FSR,F
    BSF	    STATUS,RP0	; Bank 3
    BSF	    EECON1,EEPGD; Point to program memory
    BSF	    EECON1,WREN	; Enable writes
    BCF	    INTCON,GIE	; Disable interrupts (if using)
    BTFSC   INTCON,GIE	; See AN576
    GOTO    $-2
    MOVLW   0X55	; Start of required write sequence:
    MOVWF   EECON2	; Write 55h
    MOVLW   0XAA	; 
    MOVWF   EECON2	; Write AAh
    BSF	    EECON1,WR	; Set WR bit to begin write
    NOP			; Any instructions here are ignored as processor
			; halts to begin write sequence
    NOP			; processor will stop here and wait for write complete
			; after write processor continues with 3rd instruction
    BCF	    EECON1,WREN	; Disable writes
    BSF	    INTCON,GIE	; Enable interrupts (if using)
    BCF	    STATUS,RP0	; Bank 2
    INCF    EEADR,F	; Increment address
    MOVF    EEADR,W	; Check if lower two bits of address are ?00?
    ANDLW   0x07	; Indicates when four words have been programmed
    XORLW   0x07	;
    BTFSS   STATUS,Z	; Exit if more than eight words,
    GOTO    LOOP	; Continue if less than eight words
RETURN

