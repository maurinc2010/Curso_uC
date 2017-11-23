CBLOCK 0X30
ADDR_FL
ADDR_FLH			 
DATA_FLH
DATA_FL
ENDC			   
			    
READ_FLASH:
    BANKSEL	EEADR
    MOVLW	ADDR_FLH
    MOVWF	EEADRH		    ;MS Byte of Program Address to read
    MOVLW	ADDR_FL
    MOVWF	EEADR		    ;LS Byte of Program Address to read
    BANKSEL	EECON1
    BSF	EECON1, EEPGD	    ;Point to PROGRAM memory
    BSF	EECON1, RD	    ;EE Read
				;First instruction after BSF EECON1,RD executes normally
    NOP
    NOP
				;Any instructions here are ignored as program
				;memory is read in second cycle after BSF EECON1,RD
    BANKSEL	EEDAT
    MOVF	EEDAT, W	    ;W = LS Byte of Program Memory
    MOVWF	DATA_FL
    MOVF	EEDATH, W	    ;W = MS Byte of Program EEDAT
    MOVWF	DATA_FLH
    BCF	STATUS, RP1	    ;Bank 0;
			
RETURN			    
