###############################################################################
# Makefile for project 
###############################################################################

## General options
PROJECT = 
MCU = PIC16F887
COMPILER = "MPASM (Proteus)"
TARGET = Debug
SHELL = C:\Windows\system32\cmd.exe

## Tools general options
ASMFLAGS=/q+ /p16f887
LDFLAGS=/x /p16f887

## Processing Tools
ASM=MPASMWIN.exe
LD=mplink.exe
LIB=mplib.exe
#  E:/pic16f887/PROYECTO_1.X/PIC16F877/Debug/Debug.cof: TOOL=LD
#     E:/pic16f887/PROYECTO_1.X/PIC16F877/Debug/main.o: TOOL=ASM
#        E:/pic16f887/PROYECTO_1.X/PIC16F877/main.asm

# Build tree:
all:	Debug

Debug:	Debug.cof

Debug.cof:	main.o 
	$(LD) $(LDFLAGS) /o "./Debug.cof" 16f887_g.lkr "main.o"

main.o:	../main.asm 
	$(ASM) /e"./main.err" /l"./main.lst" /o"main.o" $(ASMFLAGS)  "..\main.asm"

# tidy - delete all temporary files which are not involved in the target generation
tidy:
	rm -rf ./main.err
	rm -rf ./main.hex
	rm -rf ./main.lst

# cleanup - delete all generated files
clean:	tidy
	rm -rf Debug.cof
	rm -rf main.o

