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
 LONG  ;NUMERO DE LINEAS DE LA MATRICES 32
ENDC
CBLOCK 0X35
 UNIDADES
 DECENAS
 CENTENAS
 MIL
ENDC


RES_VECT  CODE    0x0000            ; processor reset vector
    GOTO    START                   ; go to beginning of program

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
    CLRF    REG5
    CLRF    REG7
DD: 
    INCF    REG7    ;SE INCREMENTA CADA VES QUE SE ACTUALIZA LAS MATRICES
    BTFSS   REG7,7  ;SE USA COMO TIEMPO DE INCREMENTO DEL CONTADOR
    GOTO    $+3
    CLRF    REG7
    CALL    BCDD
    MOVLW   0X35
    MOVWF   FSR
    CALL    DIRE
    CALL    L_TABLA
    CALL    INI74HC
    CALL    RETARDO
FF:
    ;--SE USA PARA APAGAR LA COLUMNA DE LA MATRIZ
    MOVLW   .255
    MOVWF   PORTC
    CALL    L74HC
INCDD:
    INCF    REG5    ;SE INCREMENTA HASTA 8
    BTFSS   REG5,3  ;DETERMINA SI ES 8 O MENOR
    GOTO    TAL
    ;SI ES MAYOR QUE 8, ES QUE CAMBIAMOS DE MATRIZ, ES DECIR DE UNIDADES A DECENAS
    ;O DE DECENAS A CENTENENAS O DE CENTENAS A MIL
    INCF    FSR
    CLRF    REG5 ;SE REINCIA PARA INDICAR QUE ES LA PRIMERA COLUMNA DE UNA MATRIZ
    CALL    DIRE ;CALCULA LA POSICION, 0X1000+8*(INDF)   
    BTFSS   FLAG,1 ; SE USA PARA DETERMINAR QUE SE HAN RECORRIDO LAS 32 LINEAS DE LAS MATRICES
    GOTO    TAL
    GOTO    DD
TAL:
    ;SE LEE EL DATO CORRESPONDIENTE A LA COLUMNA
    CALL    L_TABLA
    CALL    RETARDO
    GOTO    FF
    
    
    GOTO $                          ; loop forever
;.......DESPLAZAMIENTO DE BIT  MATRIZ................
L74HC
    DECF    LONG    
    BTFSS   STATUS,Z
    GOTO    $+3
    BSF	    FLAG,1  ;INDICA QUE SE RECORRIERON LAS 32 LINEAS DE LAS MATRICES
    RETURN
    BCF	    FLAG,1  ;INDICA QUE NO SE HAN RECORIODO LAS 32 LINEAS DE LAS MATRICES
    BSF	    PORTD,0 ;CLOCK
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
    
;-------------------------------------------------
;---LEE LA TABLA,MODIFICA EL PCH PARA PODER ACEDER----------
L_TABLA
    MOVLW   .16	    
    MOVWF   PCLATH  ;SE CAMBIA EL PC A LA POSICION 0X1000
    MOVF    REG8,W
    ADDWF   REG5,W
    CALL    NUMEROS
    CLRF    PCLATH
    MOVWF   PORTC
    RETURN
;..................................................
;------CALCULA LA DIRECION DE LA TABLA CORRESPONDIENTE AL CARACTER-------------	
DIRE
    MOVLW   .8
    MOVWF   REG4
    MOVF    INDF,W
    MOVWF   REG3
    CALL    MULTI
    MOVF    REG3,W
    MOVWF   REG8    
    RETURN
;..................................................
;.....MULTIPLICACION...............................   
MULTI
	    MOVF   REG3,W
	    DECF   REG4,F
ESTADO	    
	    ADDWF   REG3,F
	    DECF    REG4,F
	    BTFSS   STATUS,Z
	    GOTO    $-3
	    RETURN
;..................................................
	    

;........CONTADOR BCD.......................................+
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
	DT	.255,.0,.60,.60,.60,.0,.255,.255		    ;NUMERO 0
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