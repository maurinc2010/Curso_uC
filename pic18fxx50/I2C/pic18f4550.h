// Version 1.35
// Generated 08/07/2015 GMT

/*
 * Copyright © 2015, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *     1. Redistributions of source code must retain the above copyright notice, this list of
 *        conditions and the following disclaimer.
 * 
 *     2. Redistributions in binary form must reproduce the above copyright notice, this list
 *        of conditions and the following disclaimer in the documentation and/or other
 *        materials provided with the distribution.
 * 
 *     3. Microchip's name may not be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  */

#ifndef _PIC18F4550_H_
#define _PIC18F4550_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F4550
 *  */
#ifndef __XC8
#warning Header file pic18f4550.h included directly. Use #include <xc.h> instead.
#endif

/*
 * Register Definitions
 *  */

// Register: SPPDATA
extern volatile unsigned char           SPPDATA             @ 0xF62;
#ifndef _LIB_BUILD
asm("SPPDATA equ 0F62h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DATA                   :8;
    };
} SPPDATAbits_t;
extern volatile SPPDATAbits_t SPPDATAbits @ 0xF62;
// bitfield macros
#define _SPPDATA_DATA_POSN                                  0x0
#define _SPPDATA_DATA_POSITION                              0x0
#define _SPPDATA_DATA_SIZE                                  0x8
#define _SPPDATA_DATA_LENGTH                                0x8
#define _SPPDATA_DATA_MASK                                  0xFF

// Register: SPPCFG
extern volatile unsigned char           SPPCFG              @ 0xF63;
#ifndef _LIB_BUILD
asm("SPPCFG equ 0F63h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WS                     :4;
        unsigned CLK1EN                 :1;
        unsigned CSEN                   :1;
        unsigned CLKCFG                 :2;
    };
    struct {
        unsigned WS0                    :1;
        unsigned WS1                    :1;
        unsigned WS2                    :1;
        unsigned WS3                    :1;
        unsigned                        :2;
        unsigned CLKCFG0                :1;
        unsigned CLKCFG1                :1;
    };
} SPPCFGbits_t;
extern volatile SPPCFGbits_t SPPCFGbits @ 0xF63;
// bitfield macros
#define _SPPCFG_WS_POSN                                     0x0
#define _SPPCFG_WS_POSITION                                 0x0
#define _SPPCFG_WS_SIZE                                     0x4
#define _SPPCFG_WS_LENGTH                                   0x4
#define _SPPCFG_WS_MASK                                     0xF
#define _SPPCFG_CLK1EN_POSN                                 0x4
#define _SPPCFG_CLK1EN_POSITION                             0x4
#define _SPPCFG_CLK1EN_SIZE                                 0x1
#define _SPPCFG_CLK1EN_LENGTH                               0x1
#define _SPPCFG_CLK1EN_MASK                                 0x10
#define _SPPCFG_CSEN_POSN                                   0x5
#define _SPPCFG_CSEN_POSITION                               0x5
#define _SPPCFG_CSEN_SIZE                                   0x1
#define _SPPCFG_CSEN_LENGTH                                 0x1
#define _SPPCFG_CSEN_MASK                                   0x20
#define _SPPCFG_CLKCFG_POSN                                 0x6
#define _SPPCFG_CLKCFG_POSITION                             0x6
#define _SPPCFG_CLKCFG_SIZE                                 0x2
#define _SPPCFG_CLKCFG_LENGTH                               0x2
#define _SPPCFG_CLKCFG_MASK                                 0xC0
#define _SPPCFG_WS0_POSN                                    0x0
#define _SPPCFG_WS0_POSITION                                0x0
#define _SPPCFG_WS0_SIZE                                    0x1
#define _SPPCFG_WS0_LENGTH                                  0x1
#define _SPPCFG_WS0_MASK                                    0x1
#define _SPPCFG_WS1_POSN                                    0x1
#define _SPPCFG_WS1_POSITION                                0x1
#define _SPPCFG_WS1_SIZE                                    0x1
#define _SPPCFG_WS1_LENGTH                                  0x1
#define _SPPCFG_WS1_MASK                                    0x2
#define _SPPCFG_WS2_POSN                                    0x2
#define _SPPCFG_WS2_POSITION                                0x2
#define _SPPCFG_WS2_SIZE                                    0x1
#define _SPPCFG_WS2_LENGTH                                  0x1
#define _SPPCFG_WS2_MASK                                    0x4
#define _SPPCFG_WS3_POSN                                    0x3
#define _SPPCFG_WS3_POSITION                                0x3
#define _SPPCFG_WS3_SIZE                                    0x1
#define _SPPCFG_WS3_LENGTH                                  0x1
#define _SPPCFG_WS3_MASK                                    0x8
#define _SPPCFG_CLKCFG0_POSN                                0x6
#define _SPPCFG_CLKCFG0_POSITION                            0x6
#define _SPPCFG_CLKCFG0_SIZE                                0x1
#define _SPPCFG_CLKCFG0_LENGTH                              0x1
#define _SPPCFG_CLKCFG0_MASK                                0x40
#define _SPPCFG_CLKCFG1_POSN                                0x7
#define _SPPCFG_CLKCFG1_POSITION                            0x7
#define _SPPCFG_CLKCFG1_SIZE                                0x1
#define _SPPCFG_CLKCFG1_LENGTH                              0x1
#define _SPPCFG_CLKCFG1_MASK                                0x80

// Register: SPPEPS
extern volatile unsigned char           SPPEPS              @ 0xF64;
#ifndef _LIB_BUILD
asm("SPPEPS equ 0F64h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDR                   :4;
        unsigned SPPBUSY                :1;
        unsigned                        :1;
        unsigned WRSPP                  :1;
        unsigned RDSPP                  :1;
    };
    struct {
        unsigned ADDR0                  :1;
        unsigned ADDR1                  :1;
        unsigned ADDR2                  :1;
        unsigned ADDR3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned BUSY                   :1;
    };
} SPPEPSbits_t;
extern volatile SPPEPSbits_t SPPEPSbits @ 0xF64;
// bitfield macros
#define _SPPEPS_ADDR_POSN                                   0x0
#define _SPPEPS_ADDR_POSITION                               0x0
#define _SPPEPS_ADDR_SIZE                                   0x4
#define _SPPEPS_ADDR_LENGTH                                 0x4
#define _SPPEPS_ADDR_MASK                                   0xF
#define _SPPEPS_SPPBUSY_POSN                                0x4
#define _SPPEPS_SPPBUSY_POSITION                            0x4
#define _SPPEPS_SPPBUSY_SIZE                                0x1
#define _SPPEPS_SPPBUSY_LENGTH                              0x1
#define _SPPEPS_SPPBUSY_MASK                                0x10
#define _SPPEPS_WRSPP_POSN                                  0x6
#define _SPPEPS_WRSPP_POSITION                              0x6
#define _SPPEPS_WRSPP_SIZE                                  0x1
#define _SPPEPS_WRSPP_LENGTH                                0x1
#define _SPPEPS_WRSPP_MASK                                  0x40
#define _SPPEPS_RDSPP_POSN                                  0x7
#define _SPPEPS_RDSPP_POSITION                              0x7
#define _SPPEPS_RDSPP_SIZE                                  0x1
#define _SPPEPS_RDSPP_LENGTH                                0x1
#define _SPPEPS_RDSPP_MASK                                  0x80
#define _SPPEPS_ADDR0_POSN                                  0x0
#define _SPPEPS_ADDR0_POSITION                              0x0
#define _SPPEPS_ADDR0_SIZE                                  0x1
#define _SPPEPS_ADDR0_LENGTH                                0x1
#define _SPPEPS_ADDR0_MASK                                  0x1
#define _SPPEPS_ADDR1_POSN                                  0x1
#define _SPPEPS_ADDR1_POSITION                              0x1
#define _SPPEPS_ADDR1_SIZE                                  0x1
#define _SPPEPS_ADDR1_LENGTH                                0x1
#define _SPPEPS_ADDR1_MASK                                  0x2
#define _SPPEPS_ADDR2_POSN                                  0x2
#define _SPPEPS_ADDR2_POSITION                              0x2
#define _SPPEPS_ADDR2_SIZE                                  0x1
#define _SPPEPS_ADDR2_LENGTH                                0x1
#define _SPPEPS_ADDR2_MASK                                  0x4
#define _SPPEPS_ADDR3_POSN                                  0x3
#define _SPPEPS_ADDR3_POSITION                              0x3
#define _SPPEPS_ADDR3_SIZE                                  0x1
#define _SPPEPS_ADDR3_LENGTH                                0x1
#define _SPPEPS_ADDR3_MASK                                  0x8
#define _SPPEPS_BUSY_POSN                                   0x4
#define _SPPEPS_BUSY_POSITION                               0x4
#define _SPPEPS_BUSY_SIZE                                   0x1
#define _SPPEPS_BUSY_LENGTH                                 0x1
#define _SPPEPS_BUSY_MASK                                   0x10

// Register: SPPCON
extern volatile unsigned char           SPPCON              @ 0xF65;
#ifndef _LIB_BUILD
asm("SPPCON equ 0F65h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SPPEN                  :1;
        unsigned SPPOWN                 :1;
    };
} SPPCONbits_t;
extern volatile SPPCONbits_t SPPCONbits @ 0xF65;
// bitfield macros
#define _SPPCON_SPPEN_POSN                                  0x0
#define _SPPCON_SPPEN_POSITION                              0x0
#define _SPPCON_SPPEN_SIZE                                  0x1
#define _SPPCON_SPPEN_LENGTH                                0x1
#define _SPPCON_SPPEN_MASK                                  0x1
#define _SPPCON_SPPOWN_POSN                                 0x1
#define _SPPCON_SPPOWN_POSITION                             0x1
#define _SPPCON_SPPOWN_SIZE                                 0x1
#define _SPPCON_SPPOWN_LENGTH                               0x1
#define _SPPCON_SPPOWN_MASK                                 0x2

// Register: UFRM
extern volatile unsigned short          UFRM                @ 0xF66;
#ifndef _LIB_BUILD
asm("UFRM equ 0F66h");
#endif

// Register: UFRML
extern volatile unsigned char           UFRML               @ 0xF66;
#ifndef _LIB_BUILD
asm("UFRML equ 0F66h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM                    :8;
    };
    struct {
        unsigned FRM0                   :1;
        unsigned FRM1                   :1;
        unsigned FRM2                   :1;
        unsigned FRM3                   :1;
        unsigned FRM4                   :1;
        unsigned FRM5                   :1;
        unsigned FRM6                   :1;
        unsigned FRM7                   :1;
    };
    struct {
        unsigned FRML                   :8;
    };
} UFRMLbits_t;
extern volatile UFRMLbits_t UFRMLbits @ 0xF66;
// bitfield macros
#define _UFRML_FRM_POSN                                     0x0
#define _UFRML_FRM_POSITION                                 0x0
#define _UFRML_FRM_SIZE                                     0x8
#define _UFRML_FRM_LENGTH                                   0x8
#define _UFRML_FRM_MASK                                     0xFF
#define _UFRML_FRM0_POSN                                    0x0
#define _UFRML_FRM0_POSITION                                0x0
#define _UFRML_FRM0_SIZE                                    0x1
#define _UFRML_FRM0_LENGTH                                  0x1
#define _UFRML_FRM0_MASK                                    0x1
#define _UFRML_FRM1_POSN                                    0x1
#define _UFRML_FRM1_POSITION                                0x1
#define _UFRML_FRM1_SIZE                                    0x1
#define _UFRML_FRM1_LENGTH                                  0x1
#define _UFRML_FRM1_MASK                                    0x2
#define _UFRML_FRM2_POSN                                    0x2
#define _UFRML_FRM2_POSITION                                0x2
#define _UFRML_FRM2_SIZE                                    0x1
#define _UFRML_FRM2_LENGTH                                  0x1
#define _UFRML_FRM2_MASK                                    0x4
#define _UFRML_FRM3_POSN                                    0x3
#define _UFRML_FRM3_POSITION                                0x3
#define _UFRML_FRM3_SIZE                                    0x1
#define _UFRML_FRM3_LENGTH                                  0x1
#define _UFRML_FRM3_MASK                                    0x8
#define _UFRML_FRM4_POSN                                    0x4
#define _UFRML_FRM4_POSITION                                0x4
#define _UFRML_FRM4_SIZE                                    0x1
#define _UFRML_FRM4_LENGTH                                  0x1
#define _UFRML_FRM4_MASK                                    0x10
#define _UFRML_FRM5_POSN                                    0x5
#define _UFRML_FRM5_POSITION                                0x5
#define _UFRML_FRM5_SIZE                                    0x1
#define _UFRML_FRM5_LENGTH                                  0x1
#define _UFRML_FRM5_MASK                                    0x20
#define _UFRML_FRM6_POSN                                    0x6
#define _UFRML_FRM6_POSITION                                0x6
#define _UFRML_FRM6_SIZE                                    0x1
#define _UFRML_FRM6_LENGTH                                  0x1
#define _UFRML_FRM6_MASK                                    0x40
#define _UFRML_FRM7_POSN                                    0x7
#define _UFRML_FRM7_POSITION                                0x7
#define _UFRML_FRM7_SIZE                                    0x1
#define _UFRML_FRM7_LENGTH                                  0x1
#define _UFRML_FRM7_MASK                                    0x80
#define _UFRML_FRML_POSN                                    0x0
#define _UFRML_FRML_POSITION                                0x0
#define _UFRML_FRML_SIZE                                    0x8
#define _UFRML_FRML_LENGTH                                  0x8
#define _UFRML_FRML_MASK                                    0xFF

// Register: UFRMH
extern volatile unsigned char           UFRMH               @ 0xF67;
#ifndef _LIB_BUILD
asm("UFRMH equ 0F67h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FRM                    :3;
    };
    struct {
        unsigned FRM8                   :1;
        unsigned FRM9                   :1;
        unsigned FRM10                  :1;
    };
} UFRMHbits_t;
extern volatile UFRMHbits_t UFRMHbits @ 0xF67;
// bitfield macros
#define _UFRMH_FRM_POSN                                     0x0
#define _UFRMH_FRM_POSITION                                 0x0
#define _UFRMH_FRM_SIZE                                     0x3
#define _UFRMH_FRM_LENGTH                                   0x3
#define _UFRMH_FRM_MASK                                     0x7
#define _UFRMH_FRM8_POSN                                    0x0
#define _UFRMH_FRM8_POSITION                                0x0
#define _UFRMH_FRM8_SIZE                                    0x1
#define _UFRMH_FRM8_LENGTH                                  0x1
#define _UFRMH_FRM8_MASK                                    0x1
#define _UFRMH_FRM9_POSN                                    0x1
#define _UFRMH_FRM9_POSITION                                0x1
#define _UFRMH_FRM9_SIZE                                    0x1
#define _UFRMH_FRM9_LENGTH                                  0x1
#define _UFRMH_FRM9_MASK                                    0x2
#define _UFRMH_FRM10_POSN                                   0x2
#define _UFRMH_FRM10_POSITION                               0x2
#define _UFRMH_FRM10_SIZE                                   0x1
#define _UFRMH_FRM10_LENGTH                                 0x1
#define _UFRMH_FRM10_MASK                                   0x4

// Register: UIR
extern volatile unsigned char           UIR                 @ 0xF68;
#ifndef _LIB_BUILD
asm("UIR equ 0F68h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIF                 :1;
        unsigned UERRIF                 :1;
        unsigned ACTVIF                 :1;
        unsigned TRNIF                  :1;
        unsigned IDLEIF                 :1;
        unsigned STALLIF                :1;
        unsigned SOFIF                  :1;
    };
} UIRbits_t;
extern volatile UIRbits_t UIRbits @ 0xF68;
// bitfield macros
#define _UIR_URSTIF_POSN                                    0x0
#define _UIR_URSTIF_POSITION                                0x0
#define _UIR_URSTIF_SIZE                                    0x1
#define _UIR_URSTIF_LENGTH                                  0x1
#define _UIR_URSTIF_MASK                                    0x1
#define _UIR_UERRIF_POSN                                    0x1
#define _UIR_UERRIF_POSITION                                0x1
#define _UIR_UERRIF_SIZE                                    0x1
#define _UIR_UERRIF_LENGTH                                  0x1
#define _UIR_UERRIF_MASK                                    0x2
#define _UIR_ACTVIF_POSN                                    0x2
#define _UIR_ACTVIF_POSITION                                0x2
#define _UIR_ACTVIF_SIZE                                    0x1
#define _UIR_ACTVIF_LENGTH                                  0x1
#define _UIR_ACTVIF_MASK                                    0x4
#define _UIR_TRNIF_POSN                                     0x3
#define _UIR_TRNIF_POSITION                                 0x3
#define _UIR_TRNIF_SIZE                                     0x1
#define _UIR_TRNIF_LENGTH                                   0x1
#define _UIR_TRNIF_MASK                                     0x8
#define _UIR_IDLEIF_POSN                                    0x4
#define _UIR_IDLEIF_POSITION                                0x4
#define _UIR_IDLEIF_SIZE                                    0x1
#define _UIR_IDLEIF_LENGTH                                  0x1
#define _UIR_IDLEIF_MASK                                    0x10
#define _UIR_STALLIF_POSN                                   0x5
#define _UIR_STALLIF_POSITION                               0x5
#define _UIR_STALLIF_SIZE                                   0x1
#define _UIR_STALLIF_LENGTH                                 0x1
#define _UIR_STALLIF_MASK                                   0x20
#define _UIR_SOFIF_POSN                                     0x6
#define _UIR_SOFIF_POSITION                                 0x6
#define _UIR_SOFIF_SIZE                                     0x1
#define _UIR_SOFIF_LENGTH                                   0x1
#define _UIR_SOFIF_MASK                                     0x40

// Register: UIE
extern volatile unsigned char           UIE                 @ 0xF69;
#ifndef _LIB_BUILD
asm("UIE equ 0F69h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned URSTIE                 :1;
        unsigned UERRIE                 :1;
        unsigned ACTVIE                 :1;
        unsigned TRNIE                  :1;
        unsigned IDLEIE                 :1;
        unsigned STALLIE                :1;
        unsigned SOFIE                  :1;
    };
} UIEbits_t;
extern volatile UIEbits_t UIEbits @ 0xF69;
// bitfield macros
#define _UIE_URSTIE_POSN                                    0x0
#define _UIE_URSTIE_POSITION                                0x0
#define _UIE_URSTIE_SIZE                                    0x1
#define _UIE_URSTIE_LENGTH                                  0x1
#define _UIE_URSTIE_MASK                                    0x1
#define _UIE_UERRIE_POSN                                    0x1
#define _UIE_UERRIE_POSITION                                0x1
#define _UIE_UERRIE_SIZE                                    0x1
#define _UIE_UERRIE_LENGTH                                  0x1
#define _UIE_UERRIE_MASK                                    0x2
#define _UIE_ACTVIE_POSN                                    0x2
#define _UIE_ACTVIE_POSITION                                0x2
#define _UIE_ACTVIE_SIZE                                    0x1
#define _UIE_ACTVIE_LENGTH                                  0x1
#define _UIE_ACTVIE_MASK                                    0x4
#define _UIE_TRNIE_POSN                                     0x3
#define _UIE_TRNIE_POSITION                                 0x3
#define _UIE_TRNIE_SIZE                                     0x1
#define _UIE_TRNIE_LENGTH                                   0x1
#define _UIE_TRNIE_MASK                                     0x8
#define _UIE_IDLEIE_POSN                                    0x4
#define _UIE_IDLEIE_POSITION                                0x4
#define _UIE_IDLEIE_SIZE                                    0x1
#define _UIE_IDLEIE_LENGTH                                  0x1
#define _UIE_IDLEIE_MASK                                    0x10
#define _UIE_STALLIE_POSN                                   0x5
#define _UIE_STALLIE_POSITION                               0x5
#define _UIE_STALLIE_SIZE                                   0x1
#define _UIE_STALLIE_LENGTH                                 0x1
#define _UIE_STALLIE_MASK                                   0x20
#define _UIE_SOFIE_POSN                                     0x6
#define _UIE_SOFIE_POSITION                                 0x6
#define _UIE_SOFIE_SIZE                                     0x1
#define _UIE_SOFIE_LENGTH                                   0x1
#define _UIE_SOFIE_MASK                                     0x40

// Register: UEIR
extern volatile unsigned char           UEIR                @ 0xF6A;
#ifndef _LIB_BUILD
asm("UEIR equ 0F6Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEF                  :1;
        unsigned CRC5EF                 :1;
        unsigned CRC16EF                :1;
        unsigned DFN8EF                 :1;
        unsigned BTOEF                  :1;
        unsigned                        :2;
        unsigned BTSEF                  :1;
    };
} UEIRbits_t;
extern volatile UEIRbits_t UEIRbits @ 0xF6A;
// bitfield macros
#define _UEIR_PIDEF_POSN                                    0x0
#define _UEIR_PIDEF_POSITION                                0x0
#define _UEIR_PIDEF_SIZE                                    0x1
#define _UEIR_PIDEF_LENGTH                                  0x1
#define _UEIR_PIDEF_MASK                                    0x1
#define _UEIR_CRC5EF_POSN                                   0x1
#define _UEIR_CRC5EF_POSITION                               0x1
#define _UEIR_CRC5EF_SIZE                                   0x1
#define _UEIR_CRC5EF_LENGTH                                 0x1
#define _UEIR_CRC5EF_MASK                                   0x2
#define _UEIR_CRC16EF_POSN                                  0x2
#define _UEIR_CRC16EF_POSITION                              0x2
#define _UEIR_CRC16EF_SIZE                                  0x1
#define _UEIR_CRC16EF_LENGTH                                0x1
#define _UEIR_CRC16EF_MASK                                  0x4
#define _UEIR_DFN8EF_POSN                                   0x3
#define _UEIR_DFN8EF_POSITION                               0x3
#define _UEIR_DFN8EF_SIZE                                   0x1
#define _UEIR_DFN8EF_LENGTH                                 0x1
#define _UEIR_DFN8EF_MASK                                   0x8
#define _UEIR_BTOEF_POSN                                    0x4
#define _UEIR_BTOEF_POSITION                                0x4
#define _UEIR_BTOEF_SIZE                                    0x1
#define _UEIR_BTOEF_LENGTH                                  0x1
#define _UEIR_BTOEF_MASK                                    0x10
#define _UEIR_BTSEF_POSN                                    0x7
#define _UEIR_BTSEF_POSITION                                0x7
#define _UEIR_BTSEF_SIZE                                    0x1
#define _UEIR_BTSEF_LENGTH                                  0x1
#define _UEIR_BTSEF_MASK                                    0x80

// Register: UEIE
extern volatile unsigned char           UEIE                @ 0xF6B;
#ifndef _LIB_BUILD
asm("UEIE equ 0F6Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PIDEE                  :1;
        unsigned CRC5EE                 :1;
        unsigned CRC16EE                :1;
        unsigned DFN8EE                 :1;
        unsigned BTOEE                  :1;
        unsigned                        :2;
        unsigned BTSEE                  :1;
    };
} UEIEbits_t;
extern volatile UEIEbits_t UEIEbits @ 0xF6B;
// bitfield macros
#define _UEIE_PIDEE_POSN                                    0x0
#define _UEIE_PIDEE_POSITION                                0x0
#define _UEIE_PIDEE_SIZE                                    0x1
#define _UEIE_PIDEE_LENGTH                                  0x1
#define _UEIE_PIDEE_MASK                                    0x1
#define _UEIE_CRC5EE_POSN                                   0x1
#define _UEIE_CRC5EE_POSITION                               0x1
#define _UEIE_CRC5EE_SIZE                                   0x1
#define _UEIE_CRC5EE_LENGTH                                 0x1
#define _UEIE_CRC5EE_MASK                                   0x2
#define _UEIE_CRC16EE_POSN                                  0x2
#define _UEIE_CRC16EE_POSITION                              0x2
#define _UEIE_CRC16EE_SIZE                                  0x1
#define _UEIE_CRC16EE_LENGTH                                0x1
#define _UEIE_CRC16EE_MASK                                  0x4
#define _UEIE_DFN8EE_POSN                                   0x3
#define _UEIE_DFN8EE_POSITION                               0x3
#define _UEIE_DFN8EE_SIZE                                   0x1
#define _UEIE_DFN8EE_LENGTH                                 0x1
#define _UEIE_DFN8EE_MASK                                   0x8
#define _UEIE_BTOEE_POSN                                    0x4
#define _UEIE_BTOEE_POSITION                                0x4
#define _UEIE_BTOEE_SIZE                                    0x1
#define _UEIE_BTOEE_LENGTH                                  0x1
#define _UEIE_BTOEE_MASK                                    0x10
#define _UEIE_BTSEE_POSN                                    0x7
#define _UEIE_BTSEE_POSITION                                0x7
#define _UEIE_BTSEE_SIZE                                    0x1
#define _UEIE_BTSEE_LENGTH                                  0x1
#define _UEIE_BTSEE_MASK                                    0x80

// Register: USTAT
extern volatile unsigned char           USTAT               @ 0xF6C;
#ifndef _LIB_BUILD
asm("USTAT equ 0F6Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned PPBI                   :1;
        unsigned DIR                    :1;
        unsigned ENDP                   :4;
    };
    struct {
        unsigned                        :3;
        unsigned ENDP0                  :1;
        unsigned ENDP1                  :1;
        unsigned ENDP2                  :1;
        unsigned ENDP3                  :1;
    };
} USTATbits_t;
extern volatile USTATbits_t USTATbits @ 0xF6C;
// bitfield macros
#define _USTAT_PPBI_POSN                                    0x1
#define _USTAT_PPBI_POSITION                                0x1
#define _USTAT_PPBI_SIZE                                    0x1
#define _USTAT_PPBI_LENGTH                                  0x1
#define _USTAT_PPBI_MASK                                    0x2
#define _USTAT_DIR_POSN                                     0x2
#define _USTAT_DIR_POSITION                                 0x2
#define _USTAT_DIR_SIZE                                     0x1
#define _USTAT_DIR_LENGTH                                   0x1
#define _USTAT_DIR_MASK                                     0x4
#define _USTAT_ENDP_POSN                                    0x3
#define _USTAT_ENDP_POSITION                                0x3
#define _USTAT_ENDP_SIZE                                    0x4
#define _USTAT_ENDP_LENGTH                                  0x4
#define _USTAT_ENDP_MASK                                    0x78
#define _USTAT_ENDP0_POSN                                   0x3
#define _USTAT_ENDP0_POSITION                               0x3
#define _USTAT_ENDP0_SIZE                                   0x1
#define _USTAT_ENDP0_LENGTH                                 0x1
#define _USTAT_ENDP0_MASK                                   0x8
#define _USTAT_ENDP1_POSN                                   0x4
#define _USTAT_ENDP1_POSITION                               0x4
#define _USTAT_ENDP1_SIZE                                   0x1
#define _USTAT_ENDP1_LENGTH                                 0x1
#define _USTAT_ENDP1_MASK                                   0x10
#define _USTAT_ENDP2_POSN                                   0x5
#define _USTAT_ENDP2_POSITION                               0x5
#define _USTAT_ENDP2_SIZE                                   0x1
#define _USTAT_ENDP2_LENGTH                                 0x1
#define _USTAT_ENDP2_MASK                                   0x20
#define _USTAT_ENDP3_POSN                                   0x6
#define _USTAT_ENDP3_POSITION                               0x6
#define _USTAT_ENDP3_SIZE                                   0x1
#define _USTAT_ENDP3_LENGTH                                 0x1
#define _USTAT_ENDP3_MASK                                   0x40

// Register: UCON
extern volatile unsigned char           UCON                @ 0xF6D;
#ifndef _LIB_BUILD
asm("UCON equ 0F6Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned SUSPND                 :1;
        unsigned RESUME                 :1;
        unsigned USBEN                  :1;
        unsigned PKTDIS                 :1;
        unsigned SE0                    :1;
        unsigned PPBRST                 :1;
    };
} UCONbits_t;
extern volatile UCONbits_t UCONbits @ 0xF6D;
// bitfield macros
#define _UCON_SUSPND_POSN                                   0x1
#define _UCON_SUSPND_POSITION                               0x1
#define _UCON_SUSPND_SIZE                                   0x1
#define _UCON_SUSPND_LENGTH                                 0x1
#define _UCON_SUSPND_MASK                                   0x2
#define _UCON_RESUME_POSN                                   0x2
#define _UCON_RESUME_POSITION                               0x2
#define _UCON_RESUME_SIZE                                   0x1
#define _UCON_RESUME_LENGTH                                 0x1
#define _UCON_RESUME_MASK                                   0x4
#define _UCON_USBEN_POSN                                    0x3
#define _UCON_USBEN_POSITION                                0x3
#define _UCON_USBEN_SIZE                                    0x1
#define _UCON_USBEN_LENGTH                                  0x1
#define _UCON_USBEN_MASK                                    0x8
#define _UCON_PKTDIS_POSN                                   0x4
#define _UCON_PKTDIS_POSITION                               0x4
#define _UCON_PKTDIS_SIZE                                   0x1
#define _UCON_PKTDIS_LENGTH                                 0x1
#define _UCON_PKTDIS_MASK                                   0x10
#define _UCON_SE0_POSN                                      0x5
#define _UCON_SE0_POSITION                                  0x5
#define _UCON_SE0_SIZE                                      0x1
#define _UCON_SE0_LENGTH                                    0x1
#define _UCON_SE0_MASK                                      0x20
#define _UCON_PPBRST_POSN                                   0x6
#define _UCON_PPBRST_POSITION                               0x6
#define _UCON_PPBRST_SIZE                                   0x1
#define _UCON_PPBRST_LENGTH                                 0x1
#define _UCON_PPBRST_MASK                                   0x40

// Register: UADDR
extern volatile unsigned char           UADDR               @ 0xF6E;
#ifndef _LIB_BUILD
asm("UADDR equ 0F6Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADDR                   :7;
    };
    struct {
        unsigned ADDR0                  :1;
        unsigned ADDR1                  :1;
        unsigned ADDR2                  :1;
        unsigned ADDR3                  :1;
        unsigned ADDR4                  :1;
        unsigned ADDR5                  :1;
        unsigned ADDR6                  :1;
    };
} UADDRbits_t;
extern volatile UADDRbits_t UADDRbits @ 0xF6E;
// bitfield macros
#define _UADDR_ADDR_POSN                                    0x0
#define _UADDR_ADDR_POSITION                                0x0
#define _UADDR_ADDR_SIZE                                    0x7
#define _UADDR_ADDR_LENGTH                                  0x7
#define _UADDR_ADDR_MASK                                    0x7F
#define _UADDR_ADDR0_POSN                                   0x0
#define _UADDR_ADDR0_POSITION                               0x0
#define _UADDR_ADDR0_SIZE                                   0x1
#define _UADDR_ADDR0_LENGTH                                 0x1
#define _UADDR_ADDR0_MASK                                   0x1
#define _UADDR_ADDR1_POSN                                   0x1
#define _UADDR_ADDR1_POSITION                               0x1
#define _UADDR_ADDR1_SIZE                                   0x1
#define _UADDR_ADDR1_LENGTH                                 0x1
#define _UADDR_ADDR1_MASK                                   0x2
#define _UADDR_ADDR2_POSN                                   0x2
#define _UADDR_ADDR2_POSITION                               0x2
#define _UADDR_ADDR2_SIZE                                   0x1
#define _UADDR_ADDR2_LENGTH                                 0x1
#define _UADDR_ADDR2_MASK                                   0x4
#define _UADDR_ADDR3_POSN                                   0x3
#define _UADDR_ADDR3_POSITION                               0x3
#define _UADDR_ADDR3_SIZE                                   0x1
#define _UADDR_ADDR3_LENGTH                                 0x1
#define _UADDR_ADDR3_MASK                                   0x8
#define _UADDR_ADDR4_POSN                                   0x4
#define _UADDR_ADDR4_POSITION                               0x4
#define _UADDR_ADDR4_SIZE                                   0x1
#define _UADDR_ADDR4_LENGTH                                 0x1
#define _UADDR_ADDR4_MASK                                   0x10
#define _UADDR_ADDR5_POSN                                   0x5
#define _UADDR_ADDR5_POSITION                               0x5
#define _UADDR_ADDR5_SIZE                                   0x1
#define _UADDR_ADDR5_LENGTH                                 0x1
#define _UADDR_ADDR5_MASK                                   0x20
#define _UADDR_ADDR6_POSN                                   0x6
#define _UADDR_ADDR6_POSITION                               0x6
#define _UADDR_ADDR6_SIZE                                   0x1
#define _UADDR_ADDR6_LENGTH                                 0x1
#define _UADDR_ADDR6_MASK                                   0x40

// Register: UCFG
extern volatile unsigned char           UCFG                @ 0xF6F;
#ifndef _LIB_BUILD
asm("UCFG equ 0F6Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PPB                    :2;
        unsigned FSEN                   :1;
        unsigned UTRDIS                 :1;
        unsigned UPUEN                  :1;
        unsigned                        :1;
        unsigned UOEMON                 :1;
        unsigned UTEYE                  :1;
    };
    struct {
        unsigned PPB0                   :1;
        unsigned PPB1                   :1;
    };
    struct {
        unsigned UPP0                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned UPP1                   :1;
    };
} UCFGbits_t;
extern volatile UCFGbits_t UCFGbits @ 0xF6F;
// bitfield macros
#define _UCFG_PPB_POSN                                      0x0
#define _UCFG_PPB_POSITION                                  0x0
#define _UCFG_PPB_SIZE                                      0x2
#define _UCFG_PPB_LENGTH                                    0x2
#define _UCFG_PPB_MASK                                      0x3
#define _UCFG_FSEN_POSN                                     0x2
#define _UCFG_FSEN_POSITION                                 0x2
#define _UCFG_FSEN_SIZE                                     0x1
#define _UCFG_FSEN_LENGTH                                   0x1
#define _UCFG_FSEN_MASK                                     0x4
#define _UCFG_UTRDIS_POSN                                   0x3
#define _UCFG_UTRDIS_POSITION                               0x3
#define _UCFG_UTRDIS_SIZE                                   0x1
#define _UCFG_UTRDIS_LENGTH                                 0x1
#define _UCFG_UTRDIS_MASK                                   0x8
#define _UCFG_UPUEN_POSN                                    0x4
#define _UCFG_UPUEN_POSITION                                0x4
#define _UCFG_UPUEN_SIZE                                    0x1
#define _UCFG_UPUEN_LENGTH                                  0x1
#define _UCFG_UPUEN_MASK                                    0x10
#define _UCFG_UOEMON_POSN                                   0x6
#define _UCFG_UOEMON_POSITION                               0x6
#define _UCFG_UOEMON_SIZE                                   0x1
#define _UCFG_UOEMON_LENGTH                                 0x1
#define _UCFG_UOEMON_MASK                                   0x40
#define _UCFG_UTEYE_POSN                                    0x7
#define _UCFG_UTEYE_POSITION                                0x7
#define _UCFG_UTEYE_SIZE                                    0x1
#define _UCFG_UTEYE_LENGTH                                  0x1
#define _UCFG_UTEYE_MASK                                    0x80
#define _UCFG_PPB0_POSN                                     0x0
#define _UCFG_PPB0_POSITION                                 0x0
#define _UCFG_PPB0_SIZE                                     0x1
#define _UCFG_PPB0_LENGTH                                   0x1
#define _UCFG_PPB0_MASK                                     0x1
#define _UCFG_PPB1_POSN                                     0x1
#define _UCFG_PPB1_POSITION                                 0x1
#define _UCFG_PPB1_SIZE                                     0x1
#define _UCFG_PPB1_LENGTH                                   0x1
#define _UCFG_PPB1_MASK                                     0x2
#define _UCFG_UPP0_POSN                                     0x0
#define _UCFG_UPP0_POSITION                                 0x0
#define _UCFG_UPP0_SIZE                                     0x1
#define _UCFG_UPP0_LENGTH                                   0x1
#define _UCFG_UPP0_MASK                                     0x1
#define _UCFG_UPP1_POSN                                     0x1
#define _UCFG_UPP1_POSITION                                 0x1
#define _UCFG_UPP1_SIZE                                     0x1
#define _UCFG_UPP1_LENGTH                                   0x1
#define _UCFG_UPP1_MASK                                     0x2

// Register: UEP0
extern volatile unsigned char           UEP0                @ 0xF70;
#ifndef _LIB_BUILD
asm("UEP0 equ 0F70h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP0CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP0HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP0INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP0OUTEN               :1;
    };
    struct {
        unsigned EP0STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS0              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK0                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN0                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN0               :1;
    };
    struct {
        unsigned EPSTALL0               :1;
    };
} UEP0bits_t;
extern volatile UEP0bits_t UEP0bits @ 0xF70;
// bitfield macros
#define _UEP0_EPSTALL_POSN                                  0x0
#define _UEP0_EPSTALL_POSITION                              0x0
#define _UEP0_EPSTALL_SIZE                                  0x1
#define _UEP0_EPSTALL_LENGTH                                0x1
#define _UEP0_EPSTALL_MASK                                  0x1
#define _UEP0_EPINEN_POSN                                   0x1
#define _UEP0_EPINEN_POSITION                               0x1
#define _UEP0_EPINEN_SIZE                                   0x1
#define _UEP0_EPINEN_LENGTH                                 0x1
#define _UEP0_EPINEN_MASK                                   0x2
#define _UEP0_EPOUTEN_POSN                                  0x2
#define _UEP0_EPOUTEN_POSITION                              0x2
#define _UEP0_EPOUTEN_SIZE                                  0x1
#define _UEP0_EPOUTEN_LENGTH                                0x1
#define _UEP0_EPOUTEN_MASK                                  0x4
#define _UEP0_EPCONDIS_POSN                                 0x3
#define _UEP0_EPCONDIS_POSITION                             0x3
#define _UEP0_EPCONDIS_SIZE                                 0x1
#define _UEP0_EPCONDIS_LENGTH                               0x1
#define _UEP0_EPCONDIS_MASK                                 0x8
#define _UEP0_EPHSHK_POSN                                   0x4
#define _UEP0_EPHSHK_POSITION                               0x4
#define _UEP0_EPHSHK_SIZE                                   0x1
#define _UEP0_EPHSHK_LENGTH                                 0x1
#define _UEP0_EPHSHK_MASK                                   0x10
#define _UEP0_EP0CONDIS_POSN                                0x3
#define _UEP0_EP0CONDIS_POSITION                            0x3
#define _UEP0_EP0CONDIS_SIZE                                0x1
#define _UEP0_EP0CONDIS_LENGTH                              0x1
#define _UEP0_EP0CONDIS_MASK                                0x8
#define _UEP0_EP0HSHK_POSN                                  0x4
#define _UEP0_EP0HSHK_POSITION                              0x4
#define _UEP0_EP0HSHK_SIZE                                  0x1
#define _UEP0_EP0HSHK_LENGTH                                0x1
#define _UEP0_EP0HSHK_MASK                                  0x10
#define _UEP0_EP0INEN_POSN                                  0x1
#define _UEP0_EP0INEN_POSITION                              0x1
#define _UEP0_EP0INEN_SIZE                                  0x1
#define _UEP0_EP0INEN_LENGTH                                0x1
#define _UEP0_EP0INEN_MASK                                  0x2
#define _UEP0_EP0OUTEN_POSN                                 0x2
#define _UEP0_EP0OUTEN_POSITION                             0x2
#define _UEP0_EP0OUTEN_SIZE                                 0x1
#define _UEP0_EP0OUTEN_LENGTH                               0x1
#define _UEP0_EP0OUTEN_MASK                                 0x4
#define _UEP0_EP0STALL_POSN                                 0x0
#define _UEP0_EP0STALL_POSITION                             0x0
#define _UEP0_EP0STALL_SIZE                                 0x1
#define _UEP0_EP0STALL_LENGTH                               0x1
#define _UEP0_EP0STALL_MASK                                 0x1
#define _UEP0_EPCONDIS0_POSN                                0x3
#define _UEP0_EPCONDIS0_POSITION                            0x3
#define _UEP0_EPCONDIS0_SIZE                                0x1
#define _UEP0_EPCONDIS0_LENGTH                              0x1
#define _UEP0_EPCONDIS0_MASK                                0x8
#define _UEP0_EPHSHK0_POSN                                  0x4
#define _UEP0_EPHSHK0_POSITION                              0x4
#define _UEP0_EPHSHK0_SIZE                                  0x1
#define _UEP0_EPHSHK0_LENGTH                                0x1
#define _UEP0_EPHSHK0_MASK                                  0x10
#define _UEP0_EPINEN0_POSN                                  0x1
#define _UEP0_EPINEN0_POSITION                              0x1
#define _UEP0_EPINEN0_SIZE                                  0x1
#define _UEP0_EPINEN0_LENGTH                                0x1
#define _UEP0_EPINEN0_MASK                                  0x2
#define _UEP0_EPOUTEN0_POSN                                 0x2
#define _UEP0_EPOUTEN0_POSITION                             0x2
#define _UEP0_EPOUTEN0_SIZE                                 0x1
#define _UEP0_EPOUTEN0_LENGTH                               0x1
#define _UEP0_EPOUTEN0_MASK                                 0x4
#define _UEP0_EPSTALL0_POSN                                 0x0
#define _UEP0_EPSTALL0_POSITION                             0x0
#define _UEP0_EPSTALL0_SIZE                                 0x1
#define _UEP0_EPSTALL0_LENGTH                               0x1
#define _UEP0_EPSTALL0_MASK                                 0x1

// Register: UEP1
extern volatile unsigned char           UEP1                @ 0xF71;
#ifndef _LIB_BUILD
asm("UEP1 equ 0F71h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP1CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP1HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP1INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP1OUTEN               :1;
    };
    struct {
        unsigned EP1STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS1              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK1                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN1               :1;
    };
    struct {
        unsigned EPSTALL1               :1;
    };
} UEP1bits_t;
extern volatile UEP1bits_t UEP1bits @ 0xF71;
// bitfield macros
#define _UEP1_EPSTALL_POSN                                  0x0
#define _UEP1_EPSTALL_POSITION                              0x0
#define _UEP1_EPSTALL_SIZE                                  0x1
#define _UEP1_EPSTALL_LENGTH                                0x1
#define _UEP1_EPSTALL_MASK                                  0x1
#define _UEP1_EPINEN_POSN                                   0x1
#define _UEP1_EPINEN_POSITION                               0x1
#define _UEP1_EPINEN_SIZE                                   0x1
#define _UEP1_EPINEN_LENGTH                                 0x1
#define _UEP1_EPINEN_MASK                                   0x2
#define _UEP1_EPOUTEN_POSN                                  0x2
#define _UEP1_EPOUTEN_POSITION                              0x2
#define _UEP1_EPOUTEN_SIZE                                  0x1
#define _UEP1_EPOUTEN_LENGTH                                0x1
#define _UEP1_EPOUTEN_MASK                                  0x4
#define _UEP1_EPCONDIS_POSN                                 0x3
#define _UEP1_EPCONDIS_POSITION                             0x3
#define _UEP1_EPCONDIS_SIZE                                 0x1
#define _UEP1_EPCONDIS_LENGTH                               0x1
#define _UEP1_EPCONDIS_MASK                                 0x8
#define _UEP1_EPHSHK_POSN                                   0x4
#define _UEP1_EPHSHK_POSITION                               0x4
#define _UEP1_EPHSHK_SIZE                                   0x1
#define _UEP1_EPHSHK_LENGTH                                 0x1
#define _UEP1_EPHSHK_MASK                                   0x10
#define _UEP1_EP1CONDIS_POSN                                0x3
#define _UEP1_EP1CONDIS_POSITION                            0x3
#define _UEP1_EP1CONDIS_SIZE                                0x1
#define _UEP1_EP1CONDIS_LENGTH                              0x1
#define _UEP1_EP1CONDIS_MASK                                0x8
#define _UEP1_EP1HSHK_POSN                                  0x4
#define _UEP1_EP1HSHK_POSITION                              0x4
#define _UEP1_EP1HSHK_SIZE                                  0x1
#define _UEP1_EP1HSHK_LENGTH                                0x1
#define _UEP1_EP1HSHK_MASK                                  0x10
#define _UEP1_EP1INEN_POSN                                  0x1
#define _UEP1_EP1INEN_POSITION                              0x1
#define _UEP1_EP1INEN_SIZE                                  0x1
#define _UEP1_EP1INEN_LENGTH                                0x1
#define _UEP1_EP1INEN_MASK                                  0x2
#define _UEP1_EP1OUTEN_POSN                                 0x2
#define _UEP1_EP1OUTEN_POSITION                             0x2
#define _UEP1_EP1OUTEN_SIZE                                 0x1
#define _UEP1_EP1OUTEN_LENGTH                               0x1
#define _UEP1_EP1OUTEN_MASK                                 0x4
#define _UEP1_EP1STALL_POSN                                 0x0
#define _UEP1_EP1STALL_POSITION                             0x0
#define _UEP1_EP1STALL_SIZE                                 0x1
#define _UEP1_EP1STALL_LENGTH                               0x1
#define _UEP1_EP1STALL_MASK                                 0x1
#define _UEP1_EPCONDIS1_POSN                                0x3
#define _UEP1_EPCONDIS1_POSITION                            0x3
#define _UEP1_EPCONDIS1_SIZE                                0x1
#define _UEP1_EPCONDIS1_LENGTH                              0x1
#define _UEP1_EPCONDIS1_MASK                                0x8
#define _UEP1_EPHSHK1_POSN                                  0x4
#define _UEP1_EPHSHK1_POSITION                              0x4
#define _UEP1_EPHSHK1_SIZE                                  0x1
#define _UEP1_EPHSHK1_LENGTH                                0x1
#define _UEP1_EPHSHK1_MASK                                  0x10
#define _UEP1_EPINEN1_POSN                                  0x1
#define _UEP1_EPINEN1_POSITION                              0x1
#define _UEP1_EPINEN1_SIZE                                  0x1
#define _UEP1_EPINEN1_LENGTH                                0x1
#define _UEP1_EPINEN1_MASK                                  0x2
#define _UEP1_EPOUTEN1_POSN                                 0x2
#define _UEP1_EPOUTEN1_POSITION                             0x2
#define _UEP1_EPOUTEN1_SIZE                                 0x1
#define _UEP1_EPOUTEN1_LENGTH                               0x1
#define _UEP1_EPOUTEN1_MASK                                 0x4
#define _UEP1_EPSTALL1_POSN                                 0x0
#define _UEP1_EPSTALL1_POSITION                             0x0
#define _UEP1_EPSTALL1_SIZE                                 0x1
#define _UEP1_EPSTALL1_LENGTH                               0x1
#define _UEP1_EPSTALL1_MASK                                 0x1

// Register: UEP2
extern volatile unsigned char           UEP2                @ 0xF72;
#ifndef _LIB_BUILD
asm("UEP2 equ 0F72h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP2CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP2HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP2INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP2OUTEN               :1;
    };
    struct {
        unsigned EP2STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS2              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK2                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN2                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN2               :1;
    };
    struct {
        unsigned EPSTALL2               :1;
    };
} UEP2bits_t;
extern volatile UEP2bits_t UEP2bits @ 0xF72;
// bitfield macros
#define _UEP2_EPSTALL_POSN                                  0x0
#define _UEP2_EPSTALL_POSITION                              0x0
#define _UEP2_EPSTALL_SIZE                                  0x1
#define _UEP2_EPSTALL_LENGTH                                0x1
#define _UEP2_EPSTALL_MASK                                  0x1
#define _UEP2_EPINEN_POSN                                   0x1
#define _UEP2_EPINEN_POSITION                               0x1
#define _UEP2_EPINEN_SIZE                                   0x1
#define _UEP2_EPINEN_LENGTH                                 0x1
#define _UEP2_EPINEN_MASK                                   0x2
#define _UEP2_EPOUTEN_POSN                                  0x2
#define _UEP2_EPOUTEN_POSITION                              0x2
#define _UEP2_EPOUTEN_SIZE                                  0x1
#define _UEP2_EPOUTEN_LENGTH                                0x1
#define _UEP2_EPOUTEN_MASK                                  0x4
#define _UEP2_EPCONDIS_POSN                                 0x3
#define _UEP2_EPCONDIS_POSITION                             0x3
#define _UEP2_EPCONDIS_SIZE                                 0x1
#define _UEP2_EPCONDIS_LENGTH                               0x1
#define _UEP2_EPCONDIS_MASK                                 0x8
#define _UEP2_EPHSHK_POSN                                   0x4
#define _UEP2_EPHSHK_POSITION                               0x4
#define _UEP2_EPHSHK_SIZE                                   0x1
#define _UEP2_EPHSHK_LENGTH                                 0x1
#define _UEP2_EPHSHK_MASK                                   0x10
#define _UEP2_EP2CONDIS_POSN                                0x3
#define _UEP2_EP2CONDIS_POSITION                            0x3
#define _UEP2_EP2CONDIS_SIZE                                0x1
#define _UEP2_EP2CONDIS_LENGTH                              0x1
#define _UEP2_EP2CONDIS_MASK                                0x8
#define _UEP2_EP2HSHK_POSN                                  0x4
#define _UEP2_EP2HSHK_POSITION                              0x4
#define _UEP2_EP2HSHK_SIZE                                  0x1
#define _UEP2_EP2HSHK_LENGTH                                0x1
#define _UEP2_EP2HSHK_MASK                                  0x10
#define _UEP2_EP2INEN_POSN                                  0x1
#define _UEP2_EP2INEN_POSITION                              0x1
#define _UEP2_EP2INEN_SIZE                                  0x1
#define _UEP2_EP2INEN_LENGTH                                0x1
#define _UEP2_EP2INEN_MASK                                  0x2
#define _UEP2_EP2OUTEN_POSN                                 0x2
#define _UEP2_EP2OUTEN_POSITION                             0x2
#define _UEP2_EP2OUTEN_SIZE                                 0x1
#define _UEP2_EP2OUTEN_LENGTH                               0x1
#define _UEP2_EP2OUTEN_MASK                                 0x4
#define _UEP2_EP2STALL_POSN                                 0x0
#define _UEP2_EP2STALL_POSITION                             0x0
#define _UEP2_EP2STALL_SIZE                                 0x1
#define _UEP2_EP2STALL_LENGTH                               0x1
#define _UEP2_EP2STALL_MASK                                 0x1
#define _UEP2_EPCONDIS2_POSN                                0x3
#define _UEP2_EPCONDIS2_POSITION                            0x3
#define _UEP2_EPCONDIS2_SIZE                                0x1
#define _UEP2_EPCONDIS2_LENGTH                              0x1
#define _UEP2_EPCONDIS2_MASK                                0x8
#define _UEP2_EPHSHK2_POSN                                  0x4
#define _UEP2_EPHSHK2_POSITION                              0x4
#define _UEP2_EPHSHK2_SIZE                                  0x1
#define _UEP2_EPHSHK2_LENGTH                                0x1
#define _UEP2_EPHSHK2_MASK                                  0x10
#define _UEP2_EPINEN2_POSN                                  0x1
#define _UEP2_EPINEN2_POSITION                              0x1
#define _UEP2_EPINEN2_SIZE                                  0x1
#define _UEP2_EPINEN2_LENGTH                                0x1
#define _UEP2_EPINEN2_MASK                                  0x2
#define _UEP2_EPOUTEN2_POSN                                 0x2
#define _UEP2_EPOUTEN2_POSITION                             0x2
#define _UEP2_EPOUTEN2_SIZE                                 0x1
#define _UEP2_EPOUTEN2_LENGTH                               0x1
#define _UEP2_EPOUTEN2_MASK                                 0x4
#define _UEP2_EPSTALL2_POSN                                 0x0
#define _UEP2_EPSTALL2_POSITION                             0x0
#define _UEP2_EPSTALL2_SIZE                                 0x1
#define _UEP2_EPSTALL2_LENGTH                               0x1
#define _UEP2_EPSTALL2_MASK                                 0x1

// Register: UEP3
extern volatile unsigned char           UEP3                @ 0xF73;
#ifndef _LIB_BUILD
asm("UEP3 equ 0F73h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP3CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP3HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP3INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP3OUTEN               :1;
    };
    struct {
        unsigned EP3STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS3              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK3                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN3                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN3               :1;
    };
    struct {
        unsigned EPSTALL3               :1;
    };
} UEP3bits_t;
extern volatile UEP3bits_t UEP3bits @ 0xF73;
// bitfield macros
#define _UEP3_EPSTALL_POSN                                  0x0
#define _UEP3_EPSTALL_POSITION                              0x0
#define _UEP3_EPSTALL_SIZE                                  0x1
#define _UEP3_EPSTALL_LENGTH                                0x1
#define _UEP3_EPSTALL_MASK                                  0x1
#define _UEP3_EPINEN_POSN                                   0x1
#define _UEP3_EPINEN_POSITION                               0x1
#define _UEP3_EPINEN_SIZE                                   0x1
#define _UEP3_EPINEN_LENGTH                                 0x1
#define _UEP3_EPINEN_MASK                                   0x2
#define _UEP3_EPOUTEN_POSN                                  0x2
#define _UEP3_EPOUTEN_POSITION                              0x2
#define _UEP3_EPOUTEN_SIZE                                  0x1
#define _UEP3_EPOUTEN_LENGTH                                0x1
#define _UEP3_EPOUTEN_MASK                                  0x4
#define _UEP3_EPCONDIS_POSN                                 0x3
#define _UEP3_EPCONDIS_POSITION                             0x3
#define _UEP3_EPCONDIS_SIZE                                 0x1
#define _UEP3_EPCONDIS_LENGTH                               0x1
#define _UEP3_EPCONDIS_MASK                                 0x8
#define _UEP3_EPHSHK_POSN                                   0x4
#define _UEP3_EPHSHK_POSITION                               0x4
#define _UEP3_EPHSHK_SIZE                                   0x1
#define _UEP3_EPHSHK_LENGTH                                 0x1
#define _UEP3_EPHSHK_MASK                                   0x10
#define _UEP3_EP3CONDIS_POSN                                0x3
#define _UEP3_EP3CONDIS_POSITION                            0x3
#define _UEP3_EP3CONDIS_SIZE                                0x1
#define _UEP3_EP3CONDIS_LENGTH                              0x1
#define _UEP3_EP3CONDIS_MASK                                0x8
#define _UEP3_EP3HSHK_POSN                                  0x4
#define _UEP3_EP3HSHK_POSITION                              0x4
#define _UEP3_EP3HSHK_SIZE                                  0x1
#define _UEP3_EP3HSHK_LENGTH                                0x1
#define _UEP3_EP3HSHK_MASK                                  0x10
#define _UEP3_EP3INEN_POSN                                  0x1
#define _UEP3_EP3INEN_POSITION                              0x1
#define _UEP3_EP3INEN_SIZE                                  0x1
#define _UEP3_EP3INEN_LENGTH                                0x1
#define _UEP3_EP3INEN_MASK                                  0x2
#define _UEP3_EP3OUTEN_POSN                                 0x2
#define _UEP3_EP3OUTEN_POSITION                             0x2
#define _UEP3_EP3OUTEN_SIZE                                 0x1
#define _UEP3_EP3OUTEN_LENGTH                               0x1
#define _UEP3_EP3OUTEN_MASK                                 0x4
#define _UEP3_EP3STALL_POSN                                 0x0
#define _UEP3_EP3STALL_POSITION                             0x0
#define _UEP3_EP3STALL_SIZE                                 0x1
#define _UEP3_EP3STALL_LENGTH                               0x1
#define _UEP3_EP3STALL_MASK                                 0x1
#define _UEP3_EPCONDIS3_POSN                                0x3
#define _UEP3_EPCONDIS3_POSITION                            0x3
#define _UEP3_EPCONDIS3_SIZE                                0x1
#define _UEP3_EPCONDIS3_LENGTH                              0x1
#define _UEP3_EPCONDIS3_MASK                                0x8
#define _UEP3_EPHSHK3_POSN                                  0x4
#define _UEP3_EPHSHK3_POSITION                              0x4
#define _UEP3_EPHSHK3_SIZE                                  0x1
#define _UEP3_EPHSHK3_LENGTH                                0x1
#define _UEP3_EPHSHK3_MASK                                  0x10
#define _UEP3_EPINEN3_POSN                                  0x1
#define _UEP3_EPINEN3_POSITION                              0x1
#define _UEP3_EPINEN3_SIZE                                  0x1
#define _UEP3_EPINEN3_LENGTH                                0x1
#define _UEP3_EPINEN3_MASK                                  0x2
#define _UEP3_EPOUTEN3_POSN                                 0x2
#define _UEP3_EPOUTEN3_POSITION                             0x2
#define _UEP3_EPOUTEN3_SIZE                                 0x1
#define _UEP3_EPOUTEN3_LENGTH                               0x1
#define _UEP3_EPOUTEN3_MASK                                 0x4
#define _UEP3_EPSTALL3_POSN                                 0x0
#define _UEP3_EPSTALL3_POSITION                             0x0
#define _UEP3_EPSTALL3_SIZE                                 0x1
#define _UEP3_EPSTALL3_LENGTH                               0x1
#define _UEP3_EPSTALL3_MASK                                 0x1

// Register: UEP4
extern volatile unsigned char           UEP4                @ 0xF74;
#ifndef _LIB_BUILD
asm("UEP4 equ 0F74h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP4CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP4HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP4INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP4OUTEN               :1;
    };
    struct {
        unsigned EP4STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS4              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK4                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN4                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN4               :1;
    };
    struct {
        unsigned EPSTALL4               :1;
    };
} UEP4bits_t;
extern volatile UEP4bits_t UEP4bits @ 0xF74;
// bitfield macros
#define _UEP4_EPSTALL_POSN                                  0x0
#define _UEP4_EPSTALL_POSITION                              0x0
#define _UEP4_EPSTALL_SIZE                                  0x1
#define _UEP4_EPSTALL_LENGTH                                0x1
#define _UEP4_EPSTALL_MASK                                  0x1
#define _UEP4_EPINEN_POSN                                   0x1
#define _UEP4_EPINEN_POSITION                               0x1
#define _UEP4_EPINEN_SIZE                                   0x1
#define _UEP4_EPINEN_LENGTH                                 0x1
#define _UEP4_EPINEN_MASK                                   0x2
#define _UEP4_EPOUTEN_POSN                                  0x2
#define _UEP4_EPOUTEN_POSITION                              0x2
#define _UEP4_EPOUTEN_SIZE                                  0x1
#define _UEP4_EPOUTEN_LENGTH                                0x1
#define _UEP4_EPOUTEN_MASK                                  0x4
#define _UEP4_EPCONDIS_POSN                                 0x3
#define _UEP4_EPCONDIS_POSITION                             0x3
#define _UEP4_EPCONDIS_SIZE                                 0x1
#define _UEP4_EPCONDIS_LENGTH                               0x1
#define _UEP4_EPCONDIS_MASK                                 0x8
#define _UEP4_EPHSHK_POSN                                   0x4
#define _UEP4_EPHSHK_POSITION                               0x4
#define _UEP4_EPHSHK_SIZE                                   0x1
#define _UEP4_EPHSHK_LENGTH                                 0x1
#define _UEP4_EPHSHK_MASK                                   0x10
#define _UEP4_EP4CONDIS_POSN                                0x3
#define _UEP4_EP4CONDIS_POSITION                            0x3
#define _UEP4_EP4CONDIS_SIZE                                0x1
#define _UEP4_EP4CONDIS_LENGTH                              0x1
#define _UEP4_EP4CONDIS_MASK                                0x8
#define _UEP4_EP4HSHK_POSN                                  0x4
#define _UEP4_EP4HSHK_POSITION                              0x4
#define _UEP4_EP4HSHK_SIZE                                  0x1
#define _UEP4_EP4HSHK_LENGTH                                0x1
#define _UEP4_EP4HSHK_MASK                                  0x10
#define _UEP4_EP4INEN_POSN                                  0x1
#define _UEP4_EP4INEN_POSITION                              0x1
#define _UEP4_EP4INEN_SIZE                                  0x1
#define _UEP4_EP4INEN_LENGTH                                0x1
#define _UEP4_EP4INEN_MASK                                  0x2
#define _UEP4_EP4OUTEN_POSN                                 0x2
#define _UEP4_EP4OUTEN_POSITION                             0x2
#define _UEP4_EP4OUTEN_SIZE                                 0x1
#define _UEP4_EP4OUTEN_LENGTH                               0x1
#define _UEP4_EP4OUTEN_MASK                                 0x4
#define _UEP4_EP4STALL_POSN                                 0x0
#define _UEP4_EP4STALL_POSITION                             0x0
#define _UEP4_EP4STALL_SIZE                                 0x1
#define _UEP4_EP4STALL_LENGTH                               0x1
#define _UEP4_EP4STALL_MASK                                 0x1
#define _UEP4_EPCONDIS4_POSN                                0x3
#define _UEP4_EPCONDIS4_POSITION                            0x3
#define _UEP4_EPCONDIS4_SIZE                                0x1
#define _UEP4_EPCONDIS4_LENGTH                              0x1
#define _UEP4_EPCONDIS4_MASK                                0x8
#define _UEP4_EPHSHK4_POSN                                  0x4
#define _UEP4_EPHSHK4_POSITION                              0x4
#define _UEP4_EPHSHK4_SIZE                                  0x1
#define _UEP4_EPHSHK4_LENGTH                                0x1
#define _UEP4_EPHSHK4_MASK                                  0x10
#define _UEP4_EPINEN4_POSN                                  0x1
#define _UEP4_EPINEN4_POSITION                              0x1
#define _UEP4_EPINEN4_SIZE                                  0x1
#define _UEP4_EPINEN4_LENGTH                                0x1
#define _UEP4_EPINEN4_MASK                                  0x2
#define _UEP4_EPOUTEN4_POSN                                 0x2
#define _UEP4_EPOUTEN4_POSITION                             0x2
#define _UEP4_EPOUTEN4_SIZE                                 0x1
#define _UEP4_EPOUTEN4_LENGTH                               0x1
#define _UEP4_EPOUTEN4_MASK                                 0x4
#define _UEP4_EPSTALL4_POSN                                 0x0
#define _UEP4_EPSTALL4_POSITION                             0x0
#define _UEP4_EPSTALL4_SIZE                                 0x1
#define _UEP4_EPSTALL4_LENGTH                               0x1
#define _UEP4_EPSTALL4_MASK                                 0x1

// Register: UEP5
extern volatile unsigned char           UEP5                @ 0xF75;
#ifndef _LIB_BUILD
asm("UEP5 equ 0F75h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP5CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP5HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP5INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP5OUTEN               :1;
    };
    struct {
        unsigned EP5STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS5              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK5                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN5                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN5               :1;
    };
    struct {
        unsigned EPSTALL5               :1;
    };
} UEP5bits_t;
extern volatile UEP5bits_t UEP5bits @ 0xF75;
// bitfield macros
#define _UEP5_EPSTALL_POSN                                  0x0
#define _UEP5_EPSTALL_POSITION                              0x0
#define _UEP5_EPSTALL_SIZE                                  0x1
#define _UEP5_EPSTALL_LENGTH                                0x1
#define _UEP5_EPSTALL_MASK                                  0x1
#define _UEP5_EPINEN_POSN                                   0x1
#define _UEP5_EPINEN_POSITION                               0x1
#define _UEP5_EPINEN_SIZE                                   0x1
#define _UEP5_EPINEN_LENGTH                                 0x1
#define _UEP5_EPINEN_MASK                                   0x2
#define _UEP5_EPOUTEN_POSN                                  0x2
#define _UEP5_EPOUTEN_POSITION                              0x2
#define _UEP5_EPOUTEN_SIZE                                  0x1
#define _UEP5_EPOUTEN_LENGTH                                0x1
#define _UEP5_EPOUTEN_MASK                                  0x4
#define _UEP5_EPCONDIS_POSN                                 0x3
#define _UEP5_EPCONDIS_POSITION                             0x3
#define _UEP5_EPCONDIS_SIZE                                 0x1
#define _UEP5_EPCONDIS_LENGTH                               0x1
#define _UEP5_EPCONDIS_MASK                                 0x8
#define _UEP5_EPHSHK_POSN                                   0x4
#define _UEP5_EPHSHK_POSITION                               0x4
#define _UEP5_EPHSHK_SIZE                                   0x1
#define _UEP5_EPHSHK_LENGTH                                 0x1
#define _UEP5_EPHSHK_MASK                                   0x10
#define _UEP5_EP5CONDIS_POSN                                0x3
#define _UEP5_EP5CONDIS_POSITION                            0x3
#define _UEP5_EP5CONDIS_SIZE                                0x1
#define _UEP5_EP5CONDIS_LENGTH                              0x1
#define _UEP5_EP5CONDIS_MASK                                0x8
#define _UEP5_EP5HSHK_POSN                                  0x4
#define _UEP5_EP5HSHK_POSITION                              0x4
#define _UEP5_EP5HSHK_SIZE                                  0x1
#define _UEP5_EP5HSHK_LENGTH                                0x1
#define _UEP5_EP5HSHK_MASK                                  0x10
#define _UEP5_EP5INEN_POSN                                  0x1
#define _UEP5_EP5INEN_POSITION                              0x1
#define _UEP5_EP5INEN_SIZE                                  0x1
#define _UEP5_EP5INEN_LENGTH                                0x1
#define _UEP5_EP5INEN_MASK                                  0x2
#define _UEP5_EP5OUTEN_POSN                                 0x2
#define _UEP5_EP5OUTEN_POSITION                             0x2
#define _UEP5_EP5OUTEN_SIZE                                 0x1
#define _UEP5_EP5OUTEN_LENGTH                               0x1
#define _UEP5_EP5OUTEN_MASK                                 0x4
#define _UEP5_EP5STALL_POSN                                 0x0
#define _UEP5_EP5STALL_POSITION                             0x0
#define _UEP5_EP5STALL_SIZE                                 0x1
#define _UEP5_EP5STALL_LENGTH                               0x1
#define _UEP5_EP5STALL_MASK                                 0x1
#define _UEP5_EPCONDIS5_POSN                                0x3
#define _UEP5_EPCONDIS5_POSITION                            0x3
#define _UEP5_EPCONDIS5_SIZE                                0x1
#define _UEP5_EPCONDIS5_LENGTH                              0x1
#define _UEP5_EPCONDIS5_MASK                                0x8
#define _UEP5_EPHSHK5_POSN                                  0x4
#define _UEP5_EPHSHK5_POSITION                              0x4
#define _UEP5_EPHSHK5_SIZE                                  0x1
#define _UEP5_EPHSHK5_LENGTH                                0x1
#define _UEP5_EPHSHK5_MASK                                  0x10
#define _UEP5_EPINEN5_POSN                                  0x1
#define _UEP5_EPINEN5_POSITION                              0x1
#define _UEP5_EPINEN5_SIZE                                  0x1
#define _UEP5_EPINEN5_LENGTH                                0x1
#define _UEP5_EPINEN5_MASK                                  0x2
#define _UEP5_EPOUTEN5_POSN                                 0x2
#define _UEP5_EPOUTEN5_POSITION                             0x2
#define _UEP5_EPOUTEN5_SIZE                                 0x1
#define _UEP5_EPOUTEN5_LENGTH                               0x1
#define _UEP5_EPOUTEN5_MASK                                 0x4
#define _UEP5_EPSTALL5_POSN                                 0x0
#define _UEP5_EPSTALL5_POSITION                             0x0
#define _UEP5_EPSTALL5_SIZE                                 0x1
#define _UEP5_EPSTALL5_LENGTH                               0x1
#define _UEP5_EPSTALL5_MASK                                 0x1

// Register: UEP6
extern volatile unsigned char           UEP6                @ 0xF76;
#ifndef _LIB_BUILD
asm("UEP6 equ 0F76h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP6CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP6HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP6INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP6OUTEN               :1;
    };
    struct {
        unsigned EP6STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS6              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK6                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN6                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN6               :1;
    };
    struct {
        unsigned EPSTALL6               :1;
    };
} UEP6bits_t;
extern volatile UEP6bits_t UEP6bits @ 0xF76;
// bitfield macros
#define _UEP6_EPSTALL_POSN                                  0x0
#define _UEP6_EPSTALL_POSITION                              0x0
#define _UEP6_EPSTALL_SIZE                                  0x1
#define _UEP6_EPSTALL_LENGTH                                0x1
#define _UEP6_EPSTALL_MASK                                  0x1
#define _UEP6_EPINEN_POSN                                   0x1
#define _UEP6_EPINEN_POSITION                               0x1
#define _UEP6_EPINEN_SIZE                                   0x1
#define _UEP6_EPINEN_LENGTH                                 0x1
#define _UEP6_EPINEN_MASK                                   0x2
#define _UEP6_EPOUTEN_POSN                                  0x2
#define _UEP6_EPOUTEN_POSITION                              0x2
#define _UEP6_EPOUTEN_SIZE                                  0x1
#define _UEP6_EPOUTEN_LENGTH                                0x1
#define _UEP6_EPOUTEN_MASK                                  0x4
#define _UEP6_EPCONDIS_POSN                                 0x3
#define _UEP6_EPCONDIS_POSITION                             0x3
#define _UEP6_EPCONDIS_SIZE                                 0x1
#define _UEP6_EPCONDIS_LENGTH                               0x1
#define _UEP6_EPCONDIS_MASK                                 0x8
#define _UEP6_EPHSHK_POSN                                   0x4
#define _UEP6_EPHSHK_POSITION                               0x4
#define _UEP6_EPHSHK_SIZE                                   0x1
#define _UEP6_EPHSHK_LENGTH                                 0x1
#define _UEP6_EPHSHK_MASK                                   0x10
#define _UEP6_EP6CONDIS_POSN                                0x3
#define _UEP6_EP6CONDIS_POSITION                            0x3
#define _UEP6_EP6CONDIS_SIZE                                0x1
#define _UEP6_EP6CONDIS_LENGTH                              0x1
#define _UEP6_EP6CONDIS_MASK                                0x8
#define _UEP6_EP6HSHK_POSN                                  0x4
#define _UEP6_EP6HSHK_POSITION                              0x4
#define _UEP6_EP6HSHK_SIZE                                  0x1
#define _UEP6_EP6HSHK_LENGTH                                0x1
#define _UEP6_EP6HSHK_MASK                                  0x10
#define _UEP6_EP6INEN_POSN                                  0x1
#define _UEP6_EP6INEN_POSITION                              0x1
#define _UEP6_EP6INEN_SIZE                                  0x1
#define _UEP6_EP6INEN_LENGTH                                0x1
#define _UEP6_EP6INEN_MASK                                  0x2
#define _UEP6_EP6OUTEN_POSN                                 0x2
#define _UEP6_EP6OUTEN_POSITION                             0x2
#define _UEP6_EP6OUTEN_SIZE                                 0x1
#define _UEP6_EP6OUTEN_LENGTH                               0x1
#define _UEP6_EP6OUTEN_MASK                                 0x4
#define _UEP6_EP6STALL_POSN                                 0x0
#define _UEP6_EP6STALL_POSITION                             0x0
#define _UEP6_EP6STALL_SIZE                                 0x1
#define _UEP6_EP6STALL_LENGTH                               0x1
#define _UEP6_EP6STALL_MASK                                 0x1
#define _UEP6_EPCONDIS6_POSN                                0x3
#define _UEP6_EPCONDIS6_POSITION                            0x3
#define _UEP6_EPCONDIS6_SIZE                                0x1
#define _UEP6_EPCONDIS6_LENGTH                              0x1
#define _UEP6_EPCONDIS6_MASK                                0x8
#define _UEP6_EPHSHK6_POSN                                  0x4
#define _UEP6_EPHSHK6_POSITION                              0x4
#define _UEP6_EPHSHK6_SIZE                                  0x1
#define _UEP6_EPHSHK6_LENGTH                                0x1
#define _UEP6_EPHSHK6_MASK                                  0x10
#define _UEP6_EPINEN6_POSN                                  0x1
#define _UEP6_EPINEN6_POSITION                              0x1
#define _UEP6_EPINEN6_SIZE                                  0x1
#define _UEP6_EPINEN6_LENGTH                                0x1
#define _UEP6_EPINEN6_MASK                                  0x2
#define _UEP6_EPOUTEN6_POSN                                 0x2
#define _UEP6_EPOUTEN6_POSITION                             0x2
#define _UEP6_EPOUTEN6_SIZE                                 0x1
#define _UEP6_EPOUTEN6_LENGTH                               0x1
#define _UEP6_EPOUTEN6_MASK                                 0x4
#define _UEP6_EPSTALL6_POSN                                 0x0
#define _UEP6_EPSTALL6_POSITION                             0x0
#define _UEP6_EPSTALL6_SIZE                                 0x1
#define _UEP6_EPSTALL6_LENGTH                               0x1
#define _UEP6_EPSTALL6_MASK                                 0x1

// Register: UEP7
extern volatile unsigned char           UEP7                @ 0xF77;
#ifndef _LIB_BUILD
asm("UEP7 equ 0F77h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EP7CONDIS              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EP7HSHK                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EP7INEN                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EP7OUTEN               :1;
    };
    struct {
        unsigned EP7STALL               :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS7              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK7                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN7                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN7               :1;
    };
    struct {
        unsigned EPSTALL7               :1;
    };
} UEP7bits_t;
extern volatile UEP7bits_t UEP7bits @ 0xF77;
// bitfield macros
#define _UEP7_EPSTALL_POSN                                  0x0
#define _UEP7_EPSTALL_POSITION                              0x0
#define _UEP7_EPSTALL_SIZE                                  0x1
#define _UEP7_EPSTALL_LENGTH                                0x1
#define _UEP7_EPSTALL_MASK                                  0x1
#define _UEP7_EPINEN_POSN                                   0x1
#define _UEP7_EPINEN_POSITION                               0x1
#define _UEP7_EPINEN_SIZE                                   0x1
#define _UEP7_EPINEN_LENGTH                                 0x1
#define _UEP7_EPINEN_MASK                                   0x2
#define _UEP7_EPOUTEN_POSN                                  0x2
#define _UEP7_EPOUTEN_POSITION                              0x2
#define _UEP7_EPOUTEN_SIZE                                  0x1
#define _UEP7_EPOUTEN_LENGTH                                0x1
#define _UEP7_EPOUTEN_MASK                                  0x4
#define _UEP7_EPCONDIS_POSN                                 0x3
#define _UEP7_EPCONDIS_POSITION                             0x3
#define _UEP7_EPCONDIS_SIZE                                 0x1
#define _UEP7_EPCONDIS_LENGTH                               0x1
#define _UEP7_EPCONDIS_MASK                                 0x8
#define _UEP7_EPHSHK_POSN                                   0x4
#define _UEP7_EPHSHK_POSITION                               0x4
#define _UEP7_EPHSHK_SIZE                                   0x1
#define _UEP7_EPHSHK_LENGTH                                 0x1
#define _UEP7_EPHSHK_MASK                                   0x10
#define _UEP7_EP7CONDIS_POSN                                0x3
#define _UEP7_EP7CONDIS_POSITION                            0x3
#define _UEP7_EP7CONDIS_SIZE                                0x1
#define _UEP7_EP7CONDIS_LENGTH                              0x1
#define _UEP7_EP7CONDIS_MASK                                0x8
#define _UEP7_EP7HSHK_POSN                                  0x4
#define _UEP7_EP7HSHK_POSITION                              0x4
#define _UEP7_EP7HSHK_SIZE                                  0x1
#define _UEP7_EP7HSHK_LENGTH                                0x1
#define _UEP7_EP7HSHK_MASK                                  0x10
#define _UEP7_EP7INEN_POSN                                  0x1
#define _UEP7_EP7INEN_POSITION                              0x1
#define _UEP7_EP7INEN_SIZE                                  0x1
#define _UEP7_EP7INEN_LENGTH                                0x1
#define _UEP7_EP7INEN_MASK                                  0x2
#define _UEP7_EP7OUTEN_POSN                                 0x2
#define _UEP7_EP7OUTEN_POSITION                             0x2
#define _UEP7_EP7OUTEN_SIZE                                 0x1
#define _UEP7_EP7OUTEN_LENGTH                               0x1
#define _UEP7_EP7OUTEN_MASK                                 0x4
#define _UEP7_EP7STALL_POSN                                 0x0
#define _UEP7_EP7STALL_POSITION                             0x0
#define _UEP7_EP7STALL_SIZE                                 0x1
#define _UEP7_EP7STALL_LENGTH                               0x1
#define _UEP7_EP7STALL_MASK                                 0x1
#define _UEP7_EPCONDIS7_POSN                                0x3
#define _UEP7_EPCONDIS7_POSITION                            0x3
#define _UEP7_EPCONDIS7_SIZE                                0x1
#define _UEP7_EPCONDIS7_LENGTH                              0x1
#define _UEP7_EPCONDIS7_MASK                                0x8
#define _UEP7_EPHSHK7_POSN                                  0x4
#define _UEP7_EPHSHK7_POSITION                              0x4
#define _UEP7_EPHSHK7_SIZE                                  0x1
#define _UEP7_EPHSHK7_LENGTH                                0x1
#define _UEP7_EPHSHK7_MASK                                  0x10
#define _UEP7_EPINEN7_POSN                                  0x1
#define _UEP7_EPINEN7_POSITION                              0x1
#define _UEP7_EPINEN7_SIZE                                  0x1
#define _UEP7_EPINEN7_LENGTH                                0x1
#define _UEP7_EPINEN7_MASK                                  0x2
#define _UEP7_EPOUTEN7_POSN                                 0x2
#define _UEP7_EPOUTEN7_POSITION                             0x2
#define _UEP7_EPOUTEN7_SIZE                                 0x1
#define _UEP7_EPOUTEN7_LENGTH                               0x1
#define _UEP7_EPOUTEN7_MASK                                 0x4
#define _UEP7_EPSTALL7_POSN                                 0x0
#define _UEP7_EPSTALL7_POSITION                             0x0
#define _UEP7_EPSTALL7_SIZE                                 0x1
#define _UEP7_EPSTALL7_LENGTH                               0x1
#define _UEP7_EPSTALL7_MASK                                 0x1

// Register: UEP8
extern volatile unsigned char           UEP8                @ 0xF78;
#ifndef _LIB_BUILD
asm("UEP8 equ 0F78h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS8              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK8                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN8                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN8               :1;
    };
    struct {
        unsigned EPSTALL8               :1;
    };
} UEP8bits_t;
extern volatile UEP8bits_t UEP8bits @ 0xF78;
// bitfield macros
#define _UEP8_EPSTALL_POSN                                  0x0
#define _UEP8_EPSTALL_POSITION                              0x0
#define _UEP8_EPSTALL_SIZE                                  0x1
#define _UEP8_EPSTALL_LENGTH                                0x1
#define _UEP8_EPSTALL_MASK                                  0x1
#define _UEP8_EPINEN_POSN                                   0x1
#define _UEP8_EPINEN_POSITION                               0x1
#define _UEP8_EPINEN_SIZE                                   0x1
#define _UEP8_EPINEN_LENGTH                                 0x1
#define _UEP8_EPINEN_MASK                                   0x2
#define _UEP8_EPOUTEN_POSN                                  0x2
#define _UEP8_EPOUTEN_POSITION                              0x2
#define _UEP8_EPOUTEN_SIZE                                  0x1
#define _UEP8_EPOUTEN_LENGTH                                0x1
#define _UEP8_EPOUTEN_MASK                                  0x4
#define _UEP8_EPCONDIS_POSN                                 0x3
#define _UEP8_EPCONDIS_POSITION                             0x3
#define _UEP8_EPCONDIS_SIZE                                 0x1
#define _UEP8_EPCONDIS_LENGTH                               0x1
#define _UEP8_EPCONDIS_MASK                                 0x8
#define _UEP8_EPHSHK_POSN                                   0x4
#define _UEP8_EPHSHK_POSITION                               0x4
#define _UEP8_EPHSHK_SIZE                                   0x1
#define _UEP8_EPHSHK_LENGTH                                 0x1
#define _UEP8_EPHSHK_MASK                                   0x10
#define _UEP8_EPCONDIS8_POSN                                0x3
#define _UEP8_EPCONDIS8_POSITION                            0x3
#define _UEP8_EPCONDIS8_SIZE                                0x1
#define _UEP8_EPCONDIS8_LENGTH                              0x1
#define _UEP8_EPCONDIS8_MASK                                0x8
#define _UEP8_EPHSHK8_POSN                                  0x4
#define _UEP8_EPHSHK8_POSITION                              0x4
#define _UEP8_EPHSHK8_SIZE                                  0x1
#define _UEP8_EPHSHK8_LENGTH                                0x1
#define _UEP8_EPHSHK8_MASK                                  0x10
#define _UEP8_EPINEN8_POSN                                  0x1
#define _UEP8_EPINEN8_POSITION                              0x1
#define _UEP8_EPINEN8_SIZE                                  0x1
#define _UEP8_EPINEN8_LENGTH                                0x1
#define _UEP8_EPINEN8_MASK                                  0x2
#define _UEP8_EPOUTEN8_POSN                                 0x2
#define _UEP8_EPOUTEN8_POSITION                             0x2
#define _UEP8_EPOUTEN8_SIZE                                 0x1
#define _UEP8_EPOUTEN8_LENGTH                               0x1
#define _UEP8_EPOUTEN8_MASK                                 0x4
#define _UEP8_EPSTALL8_POSN                                 0x0
#define _UEP8_EPSTALL8_POSITION                             0x0
#define _UEP8_EPSTALL8_SIZE                                 0x1
#define _UEP8_EPSTALL8_LENGTH                               0x1
#define _UEP8_EPSTALL8_MASK                                 0x1

// Register: UEP9
extern volatile unsigned char           UEP9                @ 0xF79;
#ifndef _LIB_BUILD
asm("UEP9 equ 0F79h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS9              :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK9                :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN9                :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN9               :1;
    };
    struct {
        unsigned EPSTALL9               :1;
    };
} UEP9bits_t;
extern volatile UEP9bits_t UEP9bits @ 0xF79;
// bitfield macros
#define _UEP9_EPSTALL_POSN                                  0x0
#define _UEP9_EPSTALL_POSITION                              0x0
#define _UEP9_EPSTALL_SIZE                                  0x1
#define _UEP9_EPSTALL_LENGTH                                0x1
#define _UEP9_EPSTALL_MASK                                  0x1
#define _UEP9_EPINEN_POSN                                   0x1
#define _UEP9_EPINEN_POSITION                               0x1
#define _UEP9_EPINEN_SIZE                                   0x1
#define _UEP9_EPINEN_LENGTH                                 0x1
#define _UEP9_EPINEN_MASK                                   0x2
#define _UEP9_EPOUTEN_POSN                                  0x2
#define _UEP9_EPOUTEN_POSITION                              0x2
#define _UEP9_EPOUTEN_SIZE                                  0x1
#define _UEP9_EPOUTEN_LENGTH                                0x1
#define _UEP9_EPOUTEN_MASK                                  0x4
#define _UEP9_EPCONDIS_POSN                                 0x3
#define _UEP9_EPCONDIS_POSITION                             0x3
#define _UEP9_EPCONDIS_SIZE                                 0x1
#define _UEP9_EPCONDIS_LENGTH                               0x1
#define _UEP9_EPCONDIS_MASK                                 0x8
#define _UEP9_EPHSHK_POSN                                   0x4
#define _UEP9_EPHSHK_POSITION                               0x4
#define _UEP9_EPHSHK_SIZE                                   0x1
#define _UEP9_EPHSHK_LENGTH                                 0x1
#define _UEP9_EPHSHK_MASK                                   0x10
#define _UEP9_EPCONDIS9_POSN                                0x3
#define _UEP9_EPCONDIS9_POSITION                            0x3
#define _UEP9_EPCONDIS9_SIZE                                0x1
#define _UEP9_EPCONDIS9_LENGTH                              0x1
#define _UEP9_EPCONDIS9_MASK                                0x8
#define _UEP9_EPHSHK9_POSN                                  0x4
#define _UEP9_EPHSHK9_POSITION                              0x4
#define _UEP9_EPHSHK9_SIZE                                  0x1
#define _UEP9_EPHSHK9_LENGTH                                0x1
#define _UEP9_EPHSHK9_MASK                                  0x10
#define _UEP9_EPINEN9_POSN                                  0x1
#define _UEP9_EPINEN9_POSITION                              0x1
#define _UEP9_EPINEN9_SIZE                                  0x1
#define _UEP9_EPINEN9_LENGTH                                0x1
#define _UEP9_EPINEN9_MASK                                  0x2
#define _UEP9_EPOUTEN9_POSN                                 0x2
#define _UEP9_EPOUTEN9_POSITION                             0x2
#define _UEP9_EPOUTEN9_SIZE                                 0x1
#define _UEP9_EPOUTEN9_LENGTH                               0x1
#define _UEP9_EPOUTEN9_MASK                                 0x4
#define _UEP9_EPSTALL9_POSN                                 0x0
#define _UEP9_EPSTALL9_POSITION                             0x0
#define _UEP9_EPSTALL9_SIZE                                 0x1
#define _UEP9_EPSTALL9_LENGTH                               0x1
#define _UEP9_EPSTALL9_MASK                                 0x1

// Register: UEP10
extern volatile unsigned char           UEP10               @ 0xF7A;
#ifndef _LIB_BUILD
asm("UEP10 equ 0F7Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS10             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK10               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN10               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN10              :1;
    };
    struct {
        unsigned EPSTALL10              :1;
    };
} UEP10bits_t;
extern volatile UEP10bits_t UEP10bits @ 0xF7A;
// bitfield macros
#define _UEP10_EPSTALL_POSN                                 0x0
#define _UEP10_EPSTALL_POSITION                             0x0
#define _UEP10_EPSTALL_SIZE                                 0x1
#define _UEP10_EPSTALL_LENGTH                               0x1
#define _UEP10_EPSTALL_MASK                                 0x1
#define _UEP10_EPINEN_POSN                                  0x1
#define _UEP10_EPINEN_POSITION                              0x1
#define _UEP10_EPINEN_SIZE                                  0x1
#define _UEP10_EPINEN_LENGTH                                0x1
#define _UEP10_EPINEN_MASK                                  0x2
#define _UEP10_EPOUTEN_POSN                                 0x2
#define _UEP10_EPOUTEN_POSITION                             0x2
#define _UEP10_EPOUTEN_SIZE                                 0x1
#define _UEP10_EPOUTEN_LENGTH                               0x1
#define _UEP10_EPOUTEN_MASK                                 0x4
#define _UEP10_EPCONDIS_POSN                                0x3
#define _UEP10_EPCONDIS_POSITION                            0x3
#define _UEP10_EPCONDIS_SIZE                                0x1
#define _UEP10_EPCONDIS_LENGTH                              0x1
#define _UEP10_EPCONDIS_MASK                                0x8
#define _UEP10_EPHSHK_POSN                                  0x4
#define _UEP10_EPHSHK_POSITION                              0x4
#define _UEP10_EPHSHK_SIZE                                  0x1
#define _UEP10_EPHSHK_LENGTH                                0x1
#define _UEP10_EPHSHK_MASK                                  0x10
#define _UEP10_EPCONDIS10_POSN                              0x3
#define _UEP10_EPCONDIS10_POSITION                          0x3
#define _UEP10_EPCONDIS10_SIZE                              0x1
#define _UEP10_EPCONDIS10_LENGTH                            0x1
#define _UEP10_EPCONDIS10_MASK                              0x8
#define _UEP10_EPHSHK10_POSN                                0x4
#define _UEP10_EPHSHK10_POSITION                            0x4
#define _UEP10_EPHSHK10_SIZE                                0x1
#define _UEP10_EPHSHK10_LENGTH                              0x1
#define _UEP10_EPHSHK10_MASK                                0x10
#define _UEP10_EPINEN10_POSN                                0x1
#define _UEP10_EPINEN10_POSITION                            0x1
#define _UEP10_EPINEN10_SIZE                                0x1
#define _UEP10_EPINEN10_LENGTH                              0x1
#define _UEP10_EPINEN10_MASK                                0x2
#define _UEP10_EPOUTEN10_POSN                               0x2
#define _UEP10_EPOUTEN10_POSITION                           0x2
#define _UEP10_EPOUTEN10_SIZE                               0x1
#define _UEP10_EPOUTEN10_LENGTH                             0x1
#define _UEP10_EPOUTEN10_MASK                               0x4
#define _UEP10_EPSTALL10_POSN                               0x0
#define _UEP10_EPSTALL10_POSITION                           0x0
#define _UEP10_EPSTALL10_SIZE                               0x1
#define _UEP10_EPSTALL10_LENGTH                             0x1
#define _UEP10_EPSTALL10_MASK                               0x1

// Register: UEP11
extern volatile unsigned char           UEP11               @ 0xF7B;
#ifndef _LIB_BUILD
asm("UEP11 equ 0F7Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS11             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK11               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN11               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN11              :1;
    };
    struct {
        unsigned EPSTALL11              :1;
    };
} UEP11bits_t;
extern volatile UEP11bits_t UEP11bits @ 0xF7B;
// bitfield macros
#define _UEP11_EPSTALL_POSN                                 0x0
#define _UEP11_EPSTALL_POSITION                             0x0
#define _UEP11_EPSTALL_SIZE                                 0x1
#define _UEP11_EPSTALL_LENGTH                               0x1
#define _UEP11_EPSTALL_MASK                                 0x1
#define _UEP11_EPINEN_POSN                                  0x1
#define _UEP11_EPINEN_POSITION                              0x1
#define _UEP11_EPINEN_SIZE                                  0x1
#define _UEP11_EPINEN_LENGTH                                0x1
#define _UEP11_EPINEN_MASK                                  0x2
#define _UEP11_EPOUTEN_POSN                                 0x2
#define _UEP11_EPOUTEN_POSITION                             0x2
#define _UEP11_EPOUTEN_SIZE                                 0x1
#define _UEP11_EPOUTEN_LENGTH                               0x1
#define _UEP11_EPOUTEN_MASK                                 0x4
#define _UEP11_EPCONDIS_POSN                                0x3
#define _UEP11_EPCONDIS_POSITION                            0x3
#define _UEP11_EPCONDIS_SIZE                                0x1
#define _UEP11_EPCONDIS_LENGTH                              0x1
#define _UEP11_EPCONDIS_MASK                                0x8
#define _UEP11_EPHSHK_POSN                                  0x4
#define _UEP11_EPHSHK_POSITION                              0x4
#define _UEP11_EPHSHK_SIZE                                  0x1
#define _UEP11_EPHSHK_LENGTH                                0x1
#define _UEP11_EPHSHK_MASK                                  0x10
#define _UEP11_EPCONDIS11_POSN                              0x3
#define _UEP11_EPCONDIS11_POSITION                          0x3
#define _UEP11_EPCONDIS11_SIZE                              0x1
#define _UEP11_EPCONDIS11_LENGTH                            0x1
#define _UEP11_EPCONDIS11_MASK                              0x8
#define _UEP11_EPHSHK11_POSN                                0x4
#define _UEP11_EPHSHK11_POSITION                            0x4
#define _UEP11_EPHSHK11_SIZE                                0x1
#define _UEP11_EPHSHK11_LENGTH                              0x1
#define _UEP11_EPHSHK11_MASK                                0x10
#define _UEP11_EPINEN11_POSN                                0x1
#define _UEP11_EPINEN11_POSITION                            0x1
#define _UEP11_EPINEN11_SIZE                                0x1
#define _UEP11_EPINEN11_LENGTH                              0x1
#define _UEP11_EPINEN11_MASK                                0x2
#define _UEP11_EPOUTEN11_POSN                               0x2
#define _UEP11_EPOUTEN11_POSITION                           0x2
#define _UEP11_EPOUTEN11_SIZE                               0x1
#define _UEP11_EPOUTEN11_LENGTH                             0x1
#define _UEP11_EPOUTEN11_MASK                               0x4
#define _UEP11_EPSTALL11_POSN                               0x0
#define _UEP11_EPSTALL11_POSITION                           0x0
#define _UEP11_EPSTALL11_SIZE                               0x1
#define _UEP11_EPSTALL11_LENGTH                             0x1
#define _UEP11_EPSTALL11_MASK                               0x1

// Register: UEP12
extern volatile unsigned char           UEP12               @ 0xF7C;
#ifndef _LIB_BUILD
asm("UEP12 equ 0F7Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS12             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK12               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN12               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN12              :1;
    };
    struct {
        unsigned EPSTALL12              :1;
    };
} UEP12bits_t;
extern volatile UEP12bits_t UEP12bits @ 0xF7C;
// bitfield macros
#define _UEP12_EPSTALL_POSN                                 0x0
#define _UEP12_EPSTALL_POSITION                             0x0
#define _UEP12_EPSTALL_SIZE                                 0x1
#define _UEP12_EPSTALL_LENGTH                               0x1
#define _UEP12_EPSTALL_MASK                                 0x1
#define _UEP12_EPINEN_POSN                                  0x1
#define _UEP12_EPINEN_POSITION                              0x1
#define _UEP12_EPINEN_SIZE                                  0x1
#define _UEP12_EPINEN_LENGTH                                0x1
#define _UEP12_EPINEN_MASK                                  0x2
#define _UEP12_EPOUTEN_POSN                                 0x2
#define _UEP12_EPOUTEN_POSITION                             0x2
#define _UEP12_EPOUTEN_SIZE                                 0x1
#define _UEP12_EPOUTEN_LENGTH                               0x1
#define _UEP12_EPOUTEN_MASK                                 0x4
#define _UEP12_EPCONDIS_POSN                                0x3
#define _UEP12_EPCONDIS_POSITION                            0x3
#define _UEP12_EPCONDIS_SIZE                                0x1
#define _UEP12_EPCONDIS_LENGTH                              0x1
#define _UEP12_EPCONDIS_MASK                                0x8
#define _UEP12_EPHSHK_POSN                                  0x4
#define _UEP12_EPHSHK_POSITION                              0x4
#define _UEP12_EPHSHK_SIZE                                  0x1
#define _UEP12_EPHSHK_LENGTH                                0x1
#define _UEP12_EPHSHK_MASK                                  0x10
#define _UEP12_EPCONDIS12_POSN                              0x3
#define _UEP12_EPCONDIS12_POSITION                          0x3
#define _UEP12_EPCONDIS12_SIZE                              0x1
#define _UEP12_EPCONDIS12_LENGTH                            0x1
#define _UEP12_EPCONDIS12_MASK                              0x8
#define _UEP12_EPHSHK12_POSN                                0x4
#define _UEP12_EPHSHK12_POSITION                            0x4
#define _UEP12_EPHSHK12_SIZE                                0x1
#define _UEP12_EPHSHK12_LENGTH                              0x1
#define _UEP12_EPHSHK12_MASK                                0x10
#define _UEP12_EPINEN12_POSN                                0x1
#define _UEP12_EPINEN12_POSITION                            0x1
#define _UEP12_EPINEN12_SIZE                                0x1
#define _UEP12_EPINEN12_LENGTH                              0x1
#define _UEP12_EPINEN12_MASK                                0x2
#define _UEP12_EPOUTEN12_POSN                               0x2
#define _UEP12_EPOUTEN12_POSITION                           0x2
#define _UEP12_EPOUTEN12_SIZE                               0x1
#define _UEP12_EPOUTEN12_LENGTH                             0x1
#define _UEP12_EPOUTEN12_MASK                               0x4
#define _UEP12_EPSTALL12_POSN                               0x0
#define _UEP12_EPSTALL12_POSITION                           0x0
#define _UEP12_EPSTALL12_SIZE                               0x1
#define _UEP12_EPSTALL12_LENGTH                             0x1
#define _UEP12_EPSTALL12_MASK                               0x1

// Register: UEP13
extern volatile unsigned char           UEP13               @ 0xF7D;
#ifndef _LIB_BUILD
asm("UEP13 equ 0F7Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS13             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK13               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN13               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN13              :1;
    };
    struct {
        unsigned EPSTALL13              :1;
    };
} UEP13bits_t;
extern volatile UEP13bits_t UEP13bits @ 0xF7D;
// bitfield macros
#define _UEP13_EPSTALL_POSN                                 0x0
#define _UEP13_EPSTALL_POSITION                             0x0
#define _UEP13_EPSTALL_SIZE                                 0x1
#define _UEP13_EPSTALL_LENGTH                               0x1
#define _UEP13_EPSTALL_MASK                                 0x1
#define _UEP13_EPINEN_POSN                                  0x1
#define _UEP13_EPINEN_POSITION                              0x1
#define _UEP13_EPINEN_SIZE                                  0x1
#define _UEP13_EPINEN_LENGTH                                0x1
#define _UEP13_EPINEN_MASK                                  0x2
#define _UEP13_EPOUTEN_POSN                                 0x2
#define _UEP13_EPOUTEN_POSITION                             0x2
#define _UEP13_EPOUTEN_SIZE                                 0x1
#define _UEP13_EPOUTEN_LENGTH                               0x1
#define _UEP13_EPOUTEN_MASK                                 0x4
#define _UEP13_EPCONDIS_POSN                                0x3
#define _UEP13_EPCONDIS_POSITION                            0x3
#define _UEP13_EPCONDIS_SIZE                                0x1
#define _UEP13_EPCONDIS_LENGTH                              0x1
#define _UEP13_EPCONDIS_MASK                                0x8
#define _UEP13_EPHSHK_POSN                                  0x4
#define _UEP13_EPHSHK_POSITION                              0x4
#define _UEP13_EPHSHK_SIZE                                  0x1
#define _UEP13_EPHSHK_LENGTH                                0x1
#define _UEP13_EPHSHK_MASK                                  0x10
#define _UEP13_EPCONDIS13_POSN                              0x3
#define _UEP13_EPCONDIS13_POSITION                          0x3
#define _UEP13_EPCONDIS13_SIZE                              0x1
#define _UEP13_EPCONDIS13_LENGTH                            0x1
#define _UEP13_EPCONDIS13_MASK                              0x8
#define _UEP13_EPHSHK13_POSN                                0x4
#define _UEP13_EPHSHK13_POSITION                            0x4
#define _UEP13_EPHSHK13_SIZE                                0x1
#define _UEP13_EPHSHK13_LENGTH                              0x1
#define _UEP13_EPHSHK13_MASK                                0x10
#define _UEP13_EPINEN13_POSN                                0x1
#define _UEP13_EPINEN13_POSITION                            0x1
#define _UEP13_EPINEN13_SIZE                                0x1
#define _UEP13_EPINEN13_LENGTH                              0x1
#define _UEP13_EPINEN13_MASK                                0x2
#define _UEP13_EPOUTEN13_POSN                               0x2
#define _UEP13_EPOUTEN13_POSITION                           0x2
#define _UEP13_EPOUTEN13_SIZE                               0x1
#define _UEP13_EPOUTEN13_LENGTH                             0x1
#define _UEP13_EPOUTEN13_MASK                               0x4
#define _UEP13_EPSTALL13_POSN                               0x0
#define _UEP13_EPSTALL13_POSITION                           0x0
#define _UEP13_EPSTALL13_SIZE                               0x1
#define _UEP13_EPSTALL13_LENGTH                             0x1
#define _UEP13_EPSTALL13_MASK                               0x1

// Register: UEP14
extern volatile unsigned char           UEP14               @ 0xF7E;
#ifndef _LIB_BUILD
asm("UEP14 equ 0F7Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS14             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK14               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN14               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN14              :1;
    };
    struct {
        unsigned EPSTALL14              :1;
    };
} UEP14bits_t;
extern volatile UEP14bits_t UEP14bits @ 0xF7E;
// bitfield macros
#define _UEP14_EPSTALL_POSN                                 0x0
#define _UEP14_EPSTALL_POSITION                             0x0
#define _UEP14_EPSTALL_SIZE                                 0x1
#define _UEP14_EPSTALL_LENGTH                               0x1
#define _UEP14_EPSTALL_MASK                                 0x1
#define _UEP14_EPINEN_POSN                                  0x1
#define _UEP14_EPINEN_POSITION                              0x1
#define _UEP14_EPINEN_SIZE                                  0x1
#define _UEP14_EPINEN_LENGTH                                0x1
#define _UEP14_EPINEN_MASK                                  0x2
#define _UEP14_EPOUTEN_POSN                                 0x2
#define _UEP14_EPOUTEN_POSITION                             0x2
#define _UEP14_EPOUTEN_SIZE                                 0x1
#define _UEP14_EPOUTEN_LENGTH                               0x1
#define _UEP14_EPOUTEN_MASK                                 0x4
#define _UEP14_EPCONDIS_POSN                                0x3
#define _UEP14_EPCONDIS_POSITION                            0x3
#define _UEP14_EPCONDIS_SIZE                                0x1
#define _UEP14_EPCONDIS_LENGTH                              0x1
#define _UEP14_EPCONDIS_MASK                                0x8
#define _UEP14_EPHSHK_POSN                                  0x4
#define _UEP14_EPHSHK_POSITION                              0x4
#define _UEP14_EPHSHK_SIZE                                  0x1
#define _UEP14_EPHSHK_LENGTH                                0x1
#define _UEP14_EPHSHK_MASK                                  0x10
#define _UEP14_EPCONDIS14_POSN                              0x3
#define _UEP14_EPCONDIS14_POSITION                          0x3
#define _UEP14_EPCONDIS14_SIZE                              0x1
#define _UEP14_EPCONDIS14_LENGTH                            0x1
#define _UEP14_EPCONDIS14_MASK                              0x8
#define _UEP14_EPHSHK14_POSN                                0x4
#define _UEP14_EPHSHK14_POSITION                            0x4
#define _UEP14_EPHSHK14_SIZE                                0x1
#define _UEP14_EPHSHK14_LENGTH                              0x1
#define _UEP14_EPHSHK14_MASK                                0x10
#define _UEP14_EPINEN14_POSN                                0x1
#define _UEP14_EPINEN14_POSITION                            0x1
#define _UEP14_EPINEN14_SIZE                                0x1
#define _UEP14_EPINEN14_LENGTH                              0x1
#define _UEP14_EPINEN14_MASK                                0x2
#define _UEP14_EPOUTEN14_POSN                               0x2
#define _UEP14_EPOUTEN14_POSITION                           0x2
#define _UEP14_EPOUTEN14_SIZE                               0x1
#define _UEP14_EPOUTEN14_LENGTH                             0x1
#define _UEP14_EPOUTEN14_MASK                               0x4
#define _UEP14_EPSTALL14_POSN                               0x0
#define _UEP14_EPSTALL14_POSITION                           0x0
#define _UEP14_EPSTALL14_SIZE                               0x1
#define _UEP14_EPSTALL14_LENGTH                             0x1
#define _UEP14_EPSTALL14_MASK                               0x1

// Register: UEP15
extern volatile unsigned char           UEP15               @ 0xF7F;
#ifndef _LIB_BUILD
asm("UEP15 equ 0F7Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EPSTALL                :1;
        unsigned EPINEN                 :1;
        unsigned EPOUTEN                :1;
        unsigned EPCONDIS               :1;
        unsigned EPHSHK                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned EPCONDIS15             :1;
    };
    struct {
        unsigned                        :4;
        unsigned EPHSHK15               :1;
    };
    struct {
        unsigned                        :1;
        unsigned EPINEN15               :1;
    };
    struct {
        unsigned                        :2;
        unsigned EPOUTEN15              :1;
    };
    struct {
        unsigned EPSTALL15              :1;
    };
} UEP15bits_t;
extern volatile UEP15bits_t UEP15bits @ 0xF7F;
// bitfield macros
#define _UEP15_EPSTALL_POSN                                 0x0
#define _UEP15_EPSTALL_POSITION                             0x0
#define _UEP15_EPSTALL_SIZE                                 0x1
#define _UEP15_EPSTALL_LENGTH                               0x1
#define _UEP15_EPSTALL_MASK                                 0x1
#define _UEP15_EPINEN_POSN                                  0x1
#define _UEP15_EPINEN_POSITION                              0x1
#define _UEP15_EPINEN_SIZE                                  0x1
#define _UEP15_EPINEN_LENGTH                                0x1
#define _UEP15_EPINEN_MASK                                  0x2
#define _UEP15_EPOUTEN_POSN                                 0x2
#define _UEP15_EPOUTEN_POSITION                             0x2
#define _UEP15_EPOUTEN_SIZE                                 0x1
#define _UEP15_EPOUTEN_LENGTH                               0x1
#define _UEP15_EPOUTEN_MASK                                 0x4
#define _UEP15_EPCONDIS_POSN                                0x3
#define _UEP15_EPCONDIS_POSITION                            0x3
#define _UEP15_EPCONDIS_SIZE                                0x1
#define _UEP15_EPCONDIS_LENGTH                              0x1
#define _UEP15_EPCONDIS_MASK                                0x8
#define _UEP15_EPHSHK_POSN                                  0x4
#define _UEP15_EPHSHK_POSITION                              0x4
#define _UEP15_EPHSHK_SIZE                                  0x1
#define _UEP15_EPHSHK_LENGTH                                0x1
#define _UEP15_EPHSHK_MASK                                  0x10
#define _UEP15_EPCONDIS15_POSN                              0x3
#define _UEP15_EPCONDIS15_POSITION                          0x3
#define _UEP15_EPCONDIS15_SIZE                              0x1
#define _UEP15_EPCONDIS15_LENGTH                            0x1
#define _UEP15_EPCONDIS15_MASK                              0x8
#define _UEP15_EPHSHK15_POSN                                0x4
#define _UEP15_EPHSHK15_POSITION                            0x4
#define _UEP15_EPHSHK15_SIZE                                0x1
#define _UEP15_EPHSHK15_LENGTH                              0x1
#define _UEP15_EPHSHK15_MASK                                0x10
#define _UEP15_EPINEN15_POSN                                0x1
#define _UEP15_EPINEN15_POSITION                            0x1
#define _UEP15_EPINEN15_SIZE                                0x1
#define _UEP15_EPINEN15_LENGTH                              0x1
#define _UEP15_EPINEN15_MASK                                0x2
#define _UEP15_EPOUTEN15_POSN                               0x2
#define _UEP15_EPOUTEN15_POSITION                           0x2
#define _UEP15_EPOUTEN15_SIZE                               0x1
#define _UEP15_EPOUTEN15_LENGTH                             0x1
#define _UEP15_EPOUTEN15_MASK                               0x4
#define _UEP15_EPSTALL15_POSN                               0x0
#define _UEP15_EPSTALL15_POSITION                           0x0
#define _UEP15_EPSTALL15_SIZE                               0x1
#define _UEP15_EPSTALL15_LENGTH                             0x1
#define _UEP15_EPSTALL15_MASK                               0x1

// Register: PORTA
extern volatile unsigned char           PORTA               @ 0xF80;
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned T0CKI                  :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFM                  :1;
        unsigned VREFP                  :1;
        unsigned                        :1;
        unsigned LVDIN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned HLVDIN                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned RA7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned RJPU                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits @ 0xF80;
// bitfield macros
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20
#define _PORTA_RA6_POSN                                     0x6
#define _PORTA_RA6_POSITION                                 0x6
#define _PORTA_RA6_SIZE                                     0x1
#define _PORTA_RA6_LENGTH                                   0x1
#define _PORTA_RA6_MASK                                     0x40
#define _PORTA_AN0_POSN                                     0x0
#define _PORTA_AN0_POSITION                                 0x0
#define _PORTA_AN0_SIZE                                     0x1
#define _PORTA_AN0_LENGTH                                   0x1
#define _PORTA_AN0_MASK                                     0x1
#define _PORTA_AN1_POSN                                     0x1
#define _PORTA_AN1_POSITION                                 0x1
#define _PORTA_AN1_SIZE                                     0x1
#define _PORTA_AN1_LENGTH                                   0x1
#define _PORTA_AN1_MASK                                     0x2
#define _PORTA_AN2_POSN                                     0x2
#define _PORTA_AN2_POSITION                                 0x2
#define _PORTA_AN2_SIZE                                     0x1
#define _PORTA_AN2_LENGTH                                   0x1
#define _PORTA_AN2_MASK                                     0x4
#define _PORTA_AN3_POSN                                     0x3
#define _PORTA_AN3_POSITION                                 0x3
#define _PORTA_AN3_SIZE                                     0x1
#define _PORTA_AN3_LENGTH                                   0x1
#define _PORTA_AN3_MASK                                     0x8
#define _PORTA_T0CKI_POSN                                   0x4
#define _PORTA_T0CKI_POSITION                               0x4
#define _PORTA_T0CKI_SIZE                                   0x1
#define _PORTA_T0CKI_LENGTH                                 0x1
#define _PORTA_T0CKI_MASK                                   0x10
#define _PORTA_AN4_POSN                                     0x5
#define _PORTA_AN4_POSITION                                 0x5
#define _PORTA_AN4_SIZE                                     0x1
#define _PORTA_AN4_LENGTH                                   0x1
#define _PORTA_AN4_MASK                                     0x20
#define _PORTA_OSC2_POSN                                    0x6
#define _PORTA_OSC2_POSITION                                0x6
#define _PORTA_OSC2_SIZE                                    0x1
#define _PORTA_OSC2_LENGTH                                  0x1
#define _PORTA_OSC2_MASK                                    0x40
#define _PORTA_VREFM_POSN                                   0x2
#define _PORTA_VREFM_POSITION                               0x2
#define _PORTA_VREFM_SIZE                                   0x1
#define _PORTA_VREFM_LENGTH                                 0x1
#define _PORTA_VREFM_MASK                                   0x4
#define _PORTA_VREFP_POSN                                   0x3
#define _PORTA_VREFP_POSITION                               0x3
#define _PORTA_VREFP_SIZE                                   0x1
#define _PORTA_VREFP_LENGTH                                 0x1
#define _PORTA_VREFP_MASK                                   0x8
#define _PORTA_LVDIN_POSN                                   0x5
#define _PORTA_LVDIN_POSITION                               0x5
#define _PORTA_LVDIN_SIZE                                   0x1
#define _PORTA_LVDIN_LENGTH                                 0x1
#define _PORTA_LVDIN_MASK                                   0x20
#define _PORTA_HLVDIN_POSN                                  0x5
#define _PORTA_HLVDIN_POSITION                              0x5
#define _PORTA_HLVDIN_SIZE                                  0x1
#define _PORTA_HLVDIN_LENGTH                                0x1
#define _PORTA_HLVDIN_MASK                                  0x20
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80
#define _PORTA_RJPU_POSN                                    0x7
#define _PORTA_RJPU_POSITION                                0x7
#define _PORTA_RJPU_SIZE                                    0x1
#define _PORTA_RJPU_LENGTH                                  0x1
#define _PORTA_RJPU_MASK                                    0x80
#define _PORTA_ULPWUIN_POSN                                 0x0
#define _PORTA_ULPWUIN_POSITION                             0x0
#define _PORTA_ULPWUIN_SIZE                                 0x1
#define _PORTA_ULPWUIN_LENGTH                               0x1
#define _PORTA_ULPWUIN_MASK                                 0x1

// Register: PORTB
extern volatile unsigned char           PORTB               @ 0xF81;
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned                        :2;
        unsigned PGM                    :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits @ 0xF81;
// bitfield macros
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80
#define _PORTB_INT0_POSN                                    0x0
#define _PORTB_INT0_POSITION                                0x0
#define _PORTB_INT0_SIZE                                    0x1
#define _PORTB_INT0_LENGTH                                  0x1
#define _PORTB_INT0_MASK                                    0x1
#define _PORTB_INT1_POSN                                    0x1
#define _PORTB_INT1_POSITION                                0x1
#define _PORTB_INT1_SIZE                                    0x1
#define _PORTB_INT1_LENGTH                                  0x1
#define _PORTB_INT1_MASK                                    0x2
#define _PORTB_INT2_POSN                                    0x2
#define _PORTB_INT2_POSITION                                0x2
#define _PORTB_INT2_SIZE                                    0x1
#define _PORTB_INT2_LENGTH                                  0x1
#define _PORTB_INT2_MASK                                    0x4
#define _PORTB_PGM_POSN                                     0x5
#define _PORTB_PGM_POSITION                                 0x5
#define _PORTB_PGM_SIZE                                     0x1
#define _PORTB_PGM_LENGTH                                   0x1
#define _PORTB_PGM_MASK                                     0x20
#define _PORTB_PGC_POSN                                     0x6
#define _PORTB_PGC_POSITION                                 0x6
#define _PORTB_PGC_SIZE                                     0x1
#define _PORTB_PGC_LENGTH                                   0x1
#define _PORTB_PGC_MASK                                     0x40
#define _PORTB_PGD_POSN                                     0x7
#define _PORTB_PGD_POSITION                                 0x7
#define _PORTB_PGD_SIZE                                     0x1
#define _PORTB_PGD_LENGTH                                   0x1
#define _PORTB_PGD_MASK                                     0x80
#define _PORTB_CCP2_PA2_POSN                                0x3
#define _PORTB_CCP2_PA2_POSITION                            0x3
#define _PORTB_CCP2_PA2_SIZE                                0x1
#define _PORTB_CCP2_PA2_LENGTH                              0x1
#define _PORTB_CCP2_PA2_MASK                                0x8

// Register: PORTC
extern volatile unsigned char           PORTC               @ 0xF82;
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned CCP1                   :1;
        unsigned                        :3;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned                        :1;
        unsigned P1A                    :1;
        unsigned                        :3;
        unsigned CK                     :1;
        unsigned DT                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned CCP2                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PA1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned RC3                    :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits @ 0xF82;
// bitfield macros
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80
#define _PORTC_T1OSO_POSN                                   0x0
#define _PORTC_T1OSO_POSITION                               0x0
#define _PORTC_T1OSO_SIZE                                   0x1
#define _PORTC_T1OSO_LENGTH                                 0x1
#define _PORTC_T1OSO_MASK                                   0x1
#define _PORTC_T1OSI_POSN                                   0x1
#define _PORTC_T1OSI_POSITION                               0x1
#define _PORTC_T1OSI_SIZE                                   0x1
#define _PORTC_T1OSI_LENGTH                                 0x1
#define _PORTC_T1OSI_MASK                                   0x2
#define _PORTC_CCP1_POSN                                    0x2
#define _PORTC_CCP1_POSITION                                0x2
#define _PORTC_CCP1_SIZE                                    0x1
#define _PORTC_CCP1_LENGTH                                  0x1
#define _PORTC_CCP1_MASK                                    0x4
#define _PORTC_TX_POSN                                      0x6
#define _PORTC_TX_POSITION                                  0x6
#define _PORTC_TX_SIZE                                      0x1
#define _PORTC_TX_LENGTH                                    0x1
#define _PORTC_TX_MASK                                      0x40
#define _PORTC_RX_POSN                                      0x7
#define _PORTC_RX_POSITION                                  0x7
#define _PORTC_RX_SIZE                                      0x1
#define _PORTC_RX_LENGTH                                    0x1
#define _PORTC_RX_MASK                                      0x80
#define _PORTC_T13CKI_POSN                                  0x0
#define _PORTC_T13CKI_POSITION                              0x0
#define _PORTC_T13CKI_SIZE                                  0x1
#define _PORTC_T13CKI_LENGTH                                0x1
#define _PORTC_T13CKI_MASK                                  0x1
#define _PORTC_P1A_POSN                                     0x2
#define _PORTC_P1A_POSITION                                 0x2
#define _PORTC_P1A_SIZE                                     0x1
#define _PORTC_P1A_LENGTH                                   0x1
#define _PORTC_P1A_MASK                                     0x4
#define _PORTC_CK_POSN                                      0x6
#define _PORTC_CK_POSITION                                  0x6
#define _PORTC_CK_SIZE                                      0x1
#define _PORTC_CK_LENGTH                                    0x1
#define _PORTC_CK_MASK                                      0x40
#define _PORTC_DT_POSN                                      0x7
#define _PORTC_DT_POSITION                                  0x7
#define _PORTC_DT_SIZE                                      0x1
#define _PORTC_DT_LENGTH                                    0x1
#define _PORTC_DT_MASK                                      0x80
#define _PORTC_CCP2_POSN                                    0x1
#define _PORTC_CCP2_POSITION                                0x1
#define _PORTC_CCP2_SIZE                                    0x1
#define _PORTC_CCP2_LENGTH                                  0x1
#define _PORTC_CCP2_MASK                                    0x2
#define _PORTC_PA1_POSN                                     0x2
#define _PORTC_PA1_POSITION                                 0x2
#define _PORTC_PA1_SIZE                                     0x1
#define _PORTC_PA1_LENGTH                                   0x1
#define _PORTC_PA1_MASK                                     0x4
#define _PORTC_PA2_POSN                                     0x1
#define _PORTC_PA2_POSITION                                 0x1
#define _PORTC_PA2_SIZE                                     0x1
#define _PORTC_PA2_LENGTH                                   0x1
#define _PORTC_PA2_MASK                                     0x2
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8

// Register: PORTD
extern volatile unsigned char           PORTD               @ 0xF83;
#ifndef _LIB_BUILD
asm("PORTD equ 0F83h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
    struct {
        unsigned SPP0                   :1;
        unsigned SPP1                   :1;
        unsigned SPP2                   :1;
        unsigned SPP3                   :1;
        unsigned SPP4                   :1;
        unsigned SPP5                   :1;
        unsigned SPP6                   :1;
        unsigned SPP7                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned SS2                    :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits @ 0xF83;
// bitfield macros
#define _PORTD_RD0_POSN                                     0x0
#define _PORTD_RD0_POSITION                                 0x0
#define _PORTD_RD0_SIZE                                     0x1
#define _PORTD_RD0_LENGTH                                   0x1
#define _PORTD_RD0_MASK                                     0x1
#define _PORTD_RD1_POSN                                     0x1
#define _PORTD_RD1_POSITION                                 0x1
#define _PORTD_RD1_SIZE                                     0x1
#define _PORTD_RD1_LENGTH                                   0x1
#define _PORTD_RD1_MASK                                     0x2
#define _PORTD_RD2_POSN                                     0x2
#define _PORTD_RD2_POSITION                                 0x2
#define _PORTD_RD2_SIZE                                     0x1
#define _PORTD_RD2_LENGTH                                   0x1
#define _PORTD_RD2_MASK                                     0x4
#define _PORTD_RD3_POSN                                     0x3
#define _PORTD_RD3_POSITION                                 0x3
#define _PORTD_RD3_SIZE                                     0x1
#define _PORTD_RD3_LENGTH                                   0x1
#define _PORTD_RD3_MASK                                     0x8
#define _PORTD_RD4_POSN                                     0x4
#define _PORTD_RD4_POSITION                                 0x4
#define _PORTD_RD4_SIZE                                     0x1
#define _PORTD_RD4_LENGTH                                   0x1
#define _PORTD_RD4_MASK                                     0x10
#define _PORTD_RD5_POSN                                     0x5
#define _PORTD_RD5_POSITION                                 0x5
#define _PORTD_RD5_SIZE                                     0x1
#define _PORTD_RD5_LENGTH                                   0x1
#define _PORTD_RD5_MASK                                     0x20
#define _PORTD_RD6_POSN                                     0x6
#define _PORTD_RD6_POSITION                                 0x6
#define _PORTD_RD6_SIZE                                     0x1
#define _PORTD_RD6_LENGTH                                   0x1
#define _PORTD_RD6_MASK                                     0x40
#define _PORTD_RD7_POSN                                     0x7
#define _PORTD_RD7_POSITION                                 0x7
#define _PORTD_RD7_SIZE                                     0x1
#define _PORTD_RD7_LENGTH                                   0x1
#define _PORTD_RD7_MASK                                     0x80
#define _PORTD_SPP0_POSN                                    0x0
#define _PORTD_SPP0_POSITION                                0x0
#define _PORTD_SPP0_SIZE                                    0x1
#define _PORTD_SPP0_LENGTH                                  0x1
#define _PORTD_SPP0_MASK                                    0x1
#define _PORTD_SPP1_POSN                                    0x1
#define _PORTD_SPP1_POSITION                                0x1
#define _PORTD_SPP1_SIZE                                    0x1
#define _PORTD_SPP1_LENGTH                                  0x1
#define _PORTD_SPP1_MASK                                    0x2
#define _PORTD_SPP2_POSN                                    0x2
#define _PORTD_SPP2_POSITION                                0x2
#define _PORTD_SPP2_SIZE                                    0x1
#define _PORTD_SPP2_LENGTH                                  0x1
#define _PORTD_SPP2_MASK                                    0x4
#define _PORTD_SPP3_POSN                                    0x3
#define _PORTD_SPP3_POSITION                                0x3
#define _PORTD_SPP3_SIZE                                    0x1
#define _PORTD_SPP3_LENGTH                                  0x1
#define _PORTD_SPP3_MASK                                    0x8
#define _PORTD_SPP4_POSN                                    0x4
#define _PORTD_SPP4_POSITION                                0x4
#define _PORTD_SPP4_SIZE                                    0x1
#define _PORTD_SPP4_LENGTH                                  0x1
#define _PORTD_SPP4_MASK                                    0x10
#define _PORTD_SPP5_POSN                                    0x5
#define _PORTD_SPP5_POSITION                                0x5
#define _PORTD_SPP5_SIZE                                    0x1
#define _PORTD_SPP5_LENGTH                                  0x1
#define _PORTD_SPP5_MASK                                    0x20
#define _PORTD_SPP6_POSN                                    0x6
#define _PORTD_SPP6_POSITION                                0x6
#define _PORTD_SPP6_SIZE                                    0x1
#define _PORTD_SPP6_LENGTH                                  0x1
#define _PORTD_SPP6_MASK                                    0x40
#define _PORTD_SPP7_POSN                                    0x7
#define _PORTD_SPP7_POSITION                                0x7
#define _PORTD_SPP7_SIZE                                    0x1
#define _PORTD_SPP7_LENGTH                                  0x1
#define _PORTD_SPP7_MASK                                    0x80
#define _PORTD_SS2_POSN                                     0x7
#define _PORTD_SS2_POSITION                                 0x7
#define _PORTD_SS2_SIZE                                     0x1
#define _PORTD_SS2_LENGTH                                   0x1
#define _PORTD_SS2_MASK                                     0x80

// Register: PORTE
extern volatile unsigned char           PORTE               @ 0xF84;
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
        unsigned RE3                    :1;
        unsigned                        :3;
        unsigned RDPU                   :1;
    };
    struct {
        unsigned CK1SPP                 :1;
        unsigned CK2SPP                 :1;
        unsigned OESPP                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CCP10                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CCP6E                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned CCP7E                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP8E                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP9E                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CS                     :1;
    };
    struct {
        unsigned                        :7;
        unsigned PA2E                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned PB1E                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PB2                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned PB3E                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned PC1E                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned PC2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned PC3E                   :1;
    };
    struct {
        unsigned PD2                    :1;
    };
    struct {
        unsigned RDE                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned RE4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RE5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned RE6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned RE7                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WRE                    :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits @ 0xF84;
// bitfield macros
#define _PORTE_RE0_POSN                                     0x0
#define _PORTE_RE0_POSITION                                 0x0
#define _PORTE_RE0_SIZE                                     0x1
#define _PORTE_RE0_LENGTH                                   0x1
#define _PORTE_RE0_MASK                                     0x1
#define _PORTE_RE1_POSN                                     0x1
#define _PORTE_RE1_POSITION                                 0x1
#define _PORTE_RE1_SIZE                                     0x1
#define _PORTE_RE1_LENGTH                                   0x1
#define _PORTE_RE1_MASK                                     0x2
#define _PORTE_RE2_POSN                                     0x2
#define _PORTE_RE2_POSITION                                 0x2
#define _PORTE_RE2_SIZE                                     0x1
#define _PORTE_RE2_LENGTH                                   0x1
#define _PORTE_RE2_MASK                                     0x4
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8
#define _PORTE_RDPU_POSN                                    0x7
#define _PORTE_RDPU_POSITION                                0x7
#define _PORTE_RDPU_SIZE                                    0x1
#define _PORTE_RDPU_LENGTH                                  0x1
#define _PORTE_RDPU_MASK                                    0x80
#define _PORTE_CK1SPP_POSN                                  0x0
#define _PORTE_CK1SPP_POSITION                              0x0
#define _PORTE_CK1SPP_SIZE                                  0x1
#define _PORTE_CK1SPP_LENGTH                                0x1
#define _PORTE_CK1SPP_MASK                                  0x1
#define _PORTE_CK2SPP_POSN                                  0x1
#define _PORTE_CK2SPP_POSITION                              0x1
#define _PORTE_CK2SPP_SIZE                                  0x1
#define _PORTE_CK2SPP_LENGTH                                0x1
#define _PORTE_CK2SPP_MASK                                  0x2
#define _PORTE_OESPP_POSN                                   0x2
#define _PORTE_OESPP_POSITION                               0x2
#define _PORTE_OESPP_SIZE                                   0x1
#define _PORTE_OESPP_LENGTH                                 0x1
#define _PORTE_OESPP_MASK                                   0x4
#define _PORTE_CCP10_POSN                                   0x2
#define _PORTE_CCP10_POSITION                               0x2
#define _PORTE_CCP10_SIZE                                   0x1
#define _PORTE_CCP10_LENGTH                                 0x1
#define _PORTE_CCP10_MASK                                   0x4
#define _PORTE_CCP2E_POSN                                   0x7
#define _PORTE_CCP2E_POSITION                               0x7
#define _PORTE_CCP2E_SIZE                                   0x1
#define _PORTE_CCP2E_LENGTH                                 0x1
#define _PORTE_CCP2E_MASK                                   0x80
#define _PORTE_CCP6E_POSN                                   0x6
#define _PORTE_CCP6E_POSITION                               0x6
#define _PORTE_CCP6E_SIZE                                   0x1
#define _PORTE_CCP6E_LENGTH                                 0x1
#define _PORTE_CCP6E_MASK                                   0x40
#define _PORTE_CCP7E_POSN                                   0x5
#define _PORTE_CCP7E_POSITION                               0x5
#define _PORTE_CCP7E_SIZE                                   0x1
#define _PORTE_CCP7E_LENGTH                                 0x1
#define _PORTE_CCP7E_MASK                                   0x20
#define _PORTE_CCP8E_POSN                                   0x4
#define _PORTE_CCP8E_POSITION                               0x4
#define _PORTE_CCP8E_SIZE                                   0x1
#define _PORTE_CCP8E_LENGTH                                 0x1
#define _PORTE_CCP8E_MASK                                   0x10
#define _PORTE_CCP9E_POSN                                   0x3
#define _PORTE_CCP9E_POSITION                               0x3
#define _PORTE_CCP9E_SIZE                                   0x1
#define _PORTE_CCP9E_LENGTH                                 0x1
#define _PORTE_CCP9E_MASK                                   0x8
#define _PORTE_CS_POSN                                      0x2
#define _PORTE_CS_POSITION                                  0x2
#define _PORTE_CS_SIZE                                      0x1
#define _PORTE_CS_LENGTH                                    0x1
#define _PORTE_CS_MASK                                      0x4
#define _PORTE_PA2E_POSN                                    0x7
#define _PORTE_PA2E_POSITION                                0x7
#define _PORTE_PA2E_SIZE                                    0x1
#define _PORTE_PA2E_LENGTH                                  0x1
#define _PORTE_PA2E_MASK                                    0x80
#define _PORTE_PB1E_POSN                                    0x6
#define _PORTE_PB1E_POSITION                                0x6
#define _PORTE_PB1E_SIZE                                    0x1
#define _PORTE_PB1E_LENGTH                                  0x1
#define _PORTE_PB1E_MASK                                    0x40
#define _PORTE_PB2_POSN                                     0x2
#define _PORTE_PB2_POSITION                                 0x2
#define _PORTE_PB2_SIZE                                     0x1
#define _PORTE_PB2_LENGTH                                   0x1
#define _PORTE_PB2_MASK                                     0x4
#define _PORTE_PB3E_POSN                                    0x4
#define _PORTE_PB3E_POSITION                                0x4
#define _PORTE_PB3E_SIZE                                    0x1
#define _PORTE_PB3E_LENGTH                                  0x1
#define _PORTE_PB3E_MASK                                    0x10
#define _PORTE_PC1E_POSN                                    0x5
#define _PORTE_PC1E_POSITION                                0x5
#define _PORTE_PC1E_SIZE                                    0x1
#define _PORTE_PC1E_LENGTH                                  0x1
#define _PORTE_PC1E_MASK                                    0x20
#define _PORTE_PC2_POSN                                     0x1
#define _PORTE_PC2_POSITION                                 0x1
#define _PORTE_PC2_SIZE                                     0x1
#define _PORTE_PC2_LENGTH                                   0x1
#define _PORTE_PC2_MASK                                     0x2
#define _PORTE_PC3E_POSN                                    0x3
#define _PORTE_PC3E_POSITION                                0x3
#define _PORTE_PC3E_SIZE                                    0x1
#define _PORTE_PC3E_LENGTH                                  0x1
#define _PORTE_PC3E_MASK                                    0x8
#define _PORTE_PD2_POSN                                     0x0
#define _PORTE_PD2_POSITION                                 0x0
#define _PORTE_PD2_SIZE                                     0x1
#define _PORTE_PD2_LENGTH                                   0x1
#define _PORTE_PD2_MASK                                     0x1
#define _PORTE_RDE_POSN                                     0x0
#define _PORTE_RDE_POSITION                                 0x0
#define _PORTE_RDE_SIZE                                     0x1
#define _PORTE_RDE_LENGTH                                   0x1
#define _PORTE_RDE_MASK                                     0x1
#define _PORTE_RE4_POSN                                     0x4
#define _PORTE_RE4_POSITION                                 0x4
#define _PORTE_RE4_SIZE                                     0x1
#define _PORTE_RE4_LENGTH                                   0x1
#define _PORTE_RE4_MASK                                     0x10
#define _PORTE_RE5_POSN                                     0x5
#define _PORTE_RE5_POSITION                                 0x5
#define _PORTE_RE5_SIZE                                     0x1
#define _PORTE_RE5_LENGTH                                   0x1
#define _PORTE_RE5_MASK                                     0x20
#define _PORTE_RE6_POSN                                     0x6
#define _PORTE_RE6_POSITION                                 0x6
#define _PORTE_RE6_SIZE                                     0x1
#define _PORTE_RE6_LENGTH                                   0x1
#define _PORTE_RE6_MASK                                     0x40
#define _PORTE_RE7_POSN                                     0x7
#define _PORTE_RE7_POSITION                                 0x7
#define _PORTE_RE7_SIZE                                     0x1
#define _PORTE_RE7_LENGTH                                   0x1
#define _PORTE_RE7_MASK                                     0x80
#define _PORTE_WRE_POSN                                     0x1
#define _PORTE_WRE_POSITION                                 0x1
#define _PORTE_WRE_SIZE                                     0x1
#define _PORTE_WRE_LENGTH                                   0x1
#define _PORTE_WRE_MASK                                     0x2

// Register: LATA
extern volatile unsigned char           LATA                @ 0xF89;
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
    };
    struct {
        unsigned LA0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LA2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LA3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LA4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LA5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LA6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LA7                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LATA7                  :1;
    };
} LATAbits_t;
extern volatile LATAbits_t LATAbits @ 0xF89;
// bitfield macros
#define _LATA_LATA0_POSN                                    0x0
#define _LATA_LATA0_POSITION                                0x0
#define _LATA_LATA0_SIZE                                    0x1
#define _LATA_LATA0_LENGTH                                  0x1
#define _LATA_LATA0_MASK                                    0x1
#define _LATA_LATA1_POSN                                    0x1
#define _LATA_LATA1_POSITION                                0x1
#define _LATA_LATA1_SIZE                                    0x1
#define _LATA_LATA1_LENGTH                                  0x1
#define _LATA_LATA1_MASK                                    0x2
#define _LATA_LATA2_POSN                                    0x2
#define _LATA_LATA2_POSITION                                0x2
#define _LATA_LATA2_SIZE                                    0x1
#define _LATA_LATA2_LENGTH                                  0x1
#define _LATA_LATA2_MASK                                    0x4
#define _LATA_LATA3_POSN                                    0x3
#define _LATA_LATA3_POSITION                                0x3
#define _LATA_LATA3_SIZE                                    0x1
#define _LATA_LATA3_LENGTH                                  0x1
#define _LATA_LATA3_MASK                                    0x8
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20
#define _LATA_LATA6_POSN                                    0x6
#define _LATA_LATA6_POSITION                                0x6
#define _LATA_LATA6_SIZE                                    0x1
#define _LATA_LATA6_LENGTH                                  0x1
#define _LATA_LATA6_MASK                                    0x40
#define _LATA_LA0_POSN                                      0x0
#define _LATA_LA0_POSITION                                  0x0
#define _LATA_LA0_SIZE                                      0x1
#define _LATA_LA0_LENGTH                                    0x1
#define _LATA_LA0_MASK                                      0x1
#define _LATA_LA1_POSN                                      0x1
#define _LATA_LA1_POSITION                                  0x1
#define _LATA_LA1_SIZE                                      0x1
#define _LATA_LA1_LENGTH                                    0x1
#define _LATA_LA1_MASK                                      0x2
#define _LATA_LA2_POSN                                      0x2
#define _LATA_LA2_POSITION                                  0x2
#define _LATA_LA2_SIZE                                      0x1
#define _LATA_LA2_LENGTH                                    0x1
#define _LATA_LA2_MASK                                      0x4
#define _LATA_LA3_POSN                                      0x3
#define _LATA_LA3_POSITION                                  0x3
#define _LATA_LA3_SIZE                                      0x1
#define _LATA_LA3_LENGTH                                    0x1
#define _LATA_LA3_MASK                                      0x8
#define _LATA_LA4_POSN                                      0x4
#define _LATA_LA4_POSITION                                  0x4
#define _LATA_LA4_SIZE                                      0x1
#define _LATA_LA4_LENGTH                                    0x1
#define _LATA_LA4_MASK                                      0x10
#define _LATA_LA5_POSN                                      0x5
#define _LATA_LA5_POSITION                                  0x5
#define _LATA_LA5_SIZE                                      0x1
#define _LATA_LA5_LENGTH                                    0x1
#define _LATA_LA5_MASK                                      0x20
#define _LATA_LA6_POSN                                      0x6
#define _LATA_LA6_POSITION                                  0x6
#define _LATA_LA6_SIZE                                      0x1
#define _LATA_LA6_LENGTH                                    0x1
#define _LATA_LA6_MASK                                      0x40
#define _LATA_LA7_POSN                                      0x7
#define _LATA_LA7_POSITION                                  0x7
#define _LATA_LA7_SIZE                                      0x1
#define _LATA_LA7_LENGTH                                    0x1
#define _LATA_LA7_MASK                                      0x80
#define _LATA_LATA7_POSN                                    0x7
#define _LATA_LATA7_POSITION                                0x7
#define _LATA_LATA7_SIZE                                    0x1
#define _LATA_LATA7_LENGTH                                  0x1
#define _LATA_LATA7_MASK                                    0x80

// Register: LATB
extern volatile unsigned char           LATB                @ 0xF8A;
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATB0                  :1;
        unsigned LATB1                  :1;
        unsigned LATB2                  :1;
        unsigned LATB3                  :1;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LB0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LB1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LB2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LB3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LB4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LB5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LB6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LB7                    :1;
    };
} LATBbits_t;
extern volatile LATBbits_t LATBbits @ 0xF8A;
// bitfield macros
#define _LATB_LATB0_POSN                                    0x0
#define _LATB_LATB0_POSITION                                0x0
#define _LATB_LATB0_SIZE                                    0x1
#define _LATB_LATB0_LENGTH                                  0x1
#define _LATB_LATB0_MASK                                    0x1
#define _LATB_LATB1_POSN                                    0x1
#define _LATB_LATB1_POSITION                                0x1
#define _LATB_LATB1_SIZE                                    0x1
#define _LATB_LATB1_LENGTH                                  0x1
#define _LATB_LATB1_MASK                                    0x2
#define _LATB_LATB2_POSN                                    0x2
#define _LATB_LATB2_POSITION                                0x2
#define _LATB_LATB2_SIZE                                    0x1
#define _LATB_LATB2_LENGTH                                  0x1
#define _LATB_LATB2_MASK                                    0x4
#define _LATB_LATB3_POSN                                    0x3
#define _LATB_LATB3_POSITION                                0x3
#define _LATB_LATB3_SIZE                                    0x1
#define _LATB_LATB3_LENGTH                                  0x1
#define _LATB_LATB3_MASK                                    0x8
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80
#define _LATB_LB0_POSN                                      0x0
#define _LATB_LB0_POSITION                                  0x0
#define _LATB_LB0_SIZE                                      0x1
#define _LATB_LB0_LENGTH                                    0x1
#define _LATB_LB0_MASK                                      0x1
#define _LATB_LB1_POSN                                      0x1
#define _LATB_LB1_POSITION                                  0x1
#define _LATB_LB1_SIZE                                      0x1
#define _LATB_LB1_LENGTH                                    0x1
#define _LATB_LB1_MASK                                      0x2
#define _LATB_LB2_POSN                                      0x2
#define _LATB_LB2_POSITION                                  0x2
#define _LATB_LB2_SIZE                                      0x1
#define _LATB_LB2_LENGTH                                    0x1
#define _LATB_LB2_MASK                                      0x4
#define _LATB_LB3_POSN                                      0x3
#define _LATB_LB3_POSITION                                  0x3
#define _LATB_LB3_SIZE                                      0x1
#define _LATB_LB3_LENGTH                                    0x1
#define _LATB_LB3_MASK                                      0x8
#define _LATB_LB4_POSN                                      0x4
#define _LATB_LB4_POSITION                                  0x4
#define _LATB_LB4_SIZE                                      0x1
#define _LATB_LB4_LENGTH                                    0x1
#define _LATB_LB4_MASK                                      0x10
#define _LATB_LB5_POSN                                      0x5
#define _LATB_LB5_POSITION                                  0x5
#define _LATB_LB5_SIZE                                      0x1
#define _LATB_LB5_LENGTH                                    0x1
#define _LATB_LB5_MASK                                      0x20
#define _LATB_LB6_POSN                                      0x6
#define _LATB_LB6_POSITION                                  0x6
#define _LATB_LB6_SIZE                                      0x1
#define _LATB_LB6_LENGTH                                    0x1
#define _LATB_LB6_MASK                                      0x40
#define _LATB_LB7_POSN                                      0x7
#define _LATB_LB7_POSITION                                  0x7
#define _LATB_LB7_SIZE                                      0x1
#define _LATB_LB7_LENGTH                                    0x1
#define _LATB_LB7_MASK                                      0x80

// Register: LATC
extern volatile unsigned char           LATC                @ 0xF8B;
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned                        :3;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LC0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LC1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LC2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LC3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LC4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LC5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LC6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LC7                    :1;
    };
} LATCbits_t;
extern volatile LATCbits_t LATCbits @ 0xF8B;
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80
#define _LATC_LC0_POSN                                      0x0
#define _LATC_LC0_POSITION                                  0x0
#define _LATC_LC0_SIZE                                      0x1
#define _LATC_LC0_LENGTH                                    0x1
#define _LATC_LC0_MASK                                      0x1
#define _LATC_LC1_POSN                                      0x1
#define _LATC_LC1_POSITION                                  0x1
#define _LATC_LC1_SIZE                                      0x1
#define _LATC_LC1_LENGTH                                    0x1
#define _LATC_LC1_MASK                                      0x2
#define _LATC_LC2_POSN                                      0x2
#define _LATC_LC2_POSITION                                  0x2
#define _LATC_LC2_SIZE                                      0x1
#define _LATC_LC2_LENGTH                                    0x1
#define _LATC_LC2_MASK                                      0x4
#define _LATC_LC3_POSN                                      0x3
#define _LATC_LC3_POSITION                                  0x3
#define _LATC_LC3_SIZE                                      0x1
#define _LATC_LC3_LENGTH                                    0x1
#define _LATC_LC3_MASK                                      0x8
#define _LATC_LC4_POSN                                      0x4
#define _LATC_LC4_POSITION                                  0x4
#define _LATC_LC4_SIZE                                      0x1
#define _LATC_LC4_LENGTH                                    0x1
#define _LATC_LC4_MASK                                      0x10
#define _LATC_LC5_POSN                                      0x5
#define _LATC_LC5_POSITION                                  0x5
#define _LATC_LC5_SIZE                                      0x1
#define _LATC_LC5_LENGTH                                    0x1
#define _LATC_LC5_MASK                                      0x20
#define _LATC_LC6_POSN                                      0x6
#define _LATC_LC6_POSITION                                  0x6
#define _LATC_LC6_SIZE                                      0x1
#define _LATC_LC6_LENGTH                                    0x1
#define _LATC_LC6_MASK                                      0x40
#define _LATC_LC7_POSN                                      0x7
#define _LATC_LC7_POSITION                                  0x7
#define _LATC_LC7_SIZE                                      0x1
#define _LATC_LC7_LENGTH                                    0x1
#define _LATC_LC7_MASK                                      0x80

// Register: LATD
extern volatile unsigned char           LATD                @ 0xF8C;
#ifndef _LIB_BUILD
asm("LATD equ 0F8Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATD0                  :1;
        unsigned LATD1                  :1;
        unsigned LATD2                  :1;
        unsigned LATD3                  :1;
        unsigned LATD4                  :1;
        unsigned LATD5                  :1;
        unsigned LATD6                  :1;
        unsigned LATD7                  :1;
    };
    struct {
        unsigned LD0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LD1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LD2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LD3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LD4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LD5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LD6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LD7                    :1;
    };
} LATDbits_t;
extern volatile LATDbits_t LATDbits @ 0xF8C;
// bitfield macros
#define _LATD_LATD0_POSN                                    0x0
#define _LATD_LATD0_POSITION                                0x0
#define _LATD_LATD0_SIZE                                    0x1
#define _LATD_LATD0_LENGTH                                  0x1
#define _LATD_LATD0_MASK                                    0x1
#define _LATD_LATD1_POSN                                    0x1
#define _LATD_LATD1_POSITION                                0x1
#define _LATD_LATD1_SIZE                                    0x1
#define _LATD_LATD1_LENGTH                                  0x1
#define _LATD_LATD1_MASK                                    0x2
#define _LATD_LATD2_POSN                                    0x2
#define _LATD_LATD2_POSITION                                0x2
#define _LATD_LATD2_SIZE                                    0x1
#define _LATD_LATD2_LENGTH                                  0x1
#define _LATD_LATD2_MASK                                    0x4
#define _LATD_LATD3_POSN                                    0x3
#define _LATD_LATD3_POSITION                                0x3
#define _LATD_LATD3_SIZE                                    0x1
#define _LATD_LATD3_LENGTH                                  0x1
#define _LATD_LATD3_MASK                                    0x8
#define _LATD_LATD4_POSN                                    0x4
#define _LATD_LATD4_POSITION                                0x4
#define _LATD_LATD4_SIZE                                    0x1
#define _LATD_LATD4_LENGTH                                  0x1
#define _LATD_LATD4_MASK                                    0x10
#define _LATD_LATD5_POSN                                    0x5
#define _LATD_LATD5_POSITION                                0x5
#define _LATD_LATD5_SIZE                                    0x1
#define _LATD_LATD5_LENGTH                                  0x1
#define _LATD_LATD5_MASK                                    0x20
#define _LATD_LATD6_POSN                                    0x6
#define _LATD_LATD6_POSITION                                0x6
#define _LATD_LATD6_SIZE                                    0x1
#define _LATD_LATD6_LENGTH                                  0x1
#define _LATD_LATD6_MASK                                    0x40
#define _LATD_LATD7_POSN                                    0x7
#define _LATD_LATD7_POSITION                                0x7
#define _LATD_LATD7_SIZE                                    0x1
#define _LATD_LATD7_LENGTH                                  0x1
#define _LATD_LATD7_MASK                                    0x80
#define _LATD_LD0_POSN                                      0x0
#define _LATD_LD0_POSITION                                  0x0
#define _LATD_LD0_SIZE                                      0x1
#define _LATD_LD0_LENGTH                                    0x1
#define _LATD_LD0_MASK                                      0x1
#define _LATD_LD1_POSN                                      0x1
#define _LATD_LD1_POSITION                                  0x1
#define _LATD_LD1_SIZE                                      0x1
#define _LATD_LD1_LENGTH                                    0x1
#define _LATD_LD1_MASK                                      0x2
#define _LATD_LD2_POSN                                      0x2
#define _LATD_LD2_POSITION                                  0x2
#define _LATD_LD2_SIZE                                      0x1
#define _LATD_LD2_LENGTH                                    0x1
#define _LATD_LD2_MASK                                      0x4
#define _LATD_LD3_POSN                                      0x3
#define _LATD_LD3_POSITION                                  0x3
#define _LATD_LD3_SIZE                                      0x1
#define _LATD_LD3_LENGTH                                    0x1
#define _LATD_LD3_MASK                                      0x8
#define _LATD_LD4_POSN                                      0x4
#define _LATD_LD4_POSITION                                  0x4
#define _LATD_LD4_SIZE                                      0x1
#define _LATD_LD4_LENGTH                                    0x1
#define _LATD_LD4_MASK                                      0x10
#define _LATD_LD5_POSN                                      0x5
#define _LATD_LD5_POSITION                                  0x5
#define _LATD_LD5_SIZE                                      0x1
#define _LATD_LD5_LENGTH                                    0x1
#define _LATD_LD5_MASK                                      0x20
#define _LATD_LD6_POSN                                      0x6
#define _LATD_LD6_POSITION                                  0x6
#define _LATD_LD6_SIZE                                      0x1
#define _LATD_LD6_LENGTH                                    0x1
#define _LATD_LD6_MASK                                      0x40
#define _LATD_LD7_POSN                                      0x7
#define _LATD_LD7_POSITION                                  0x7
#define _LATD_LD7_SIZE                                      0x1
#define _LATD_LD7_LENGTH                                    0x1
#define _LATD_LD7_MASK                                      0x80

// Register: LATE
extern volatile unsigned char           LATE                @ 0xF8D;
#ifndef _LIB_BUILD
asm("LATE equ 0F8Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATE0                  :1;
        unsigned LATE1                  :1;
        unsigned LATE2                  :1;
    };
    struct {
        unsigned LE0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LE1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LE2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LE3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LE4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LE5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LE6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LE7                    :1;
    };
} LATEbits_t;
extern volatile LATEbits_t LATEbits @ 0xF8D;
// bitfield macros
#define _LATE_LATE0_POSN                                    0x0
#define _LATE_LATE0_POSITION                                0x0
#define _LATE_LATE0_SIZE                                    0x1
#define _LATE_LATE0_LENGTH                                  0x1
#define _LATE_LATE0_MASK                                    0x1
#define _LATE_LATE1_POSN                                    0x1
#define _LATE_LATE1_POSITION                                0x1
#define _LATE_LATE1_SIZE                                    0x1
#define _LATE_LATE1_LENGTH                                  0x1
#define _LATE_LATE1_MASK                                    0x2
#define _LATE_LATE2_POSN                                    0x2
#define _LATE_LATE2_POSITION                                0x2
#define _LATE_LATE2_SIZE                                    0x1
#define _LATE_LATE2_LENGTH                                  0x1
#define _LATE_LATE2_MASK                                    0x4
#define _LATE_LE0_POSN                                      0x0
#define _LATE_LE0_POSITION                                  0x0
#define _LATE_LE0_SIZE                                      0x1
#define _LATE_LE0_LENGTH                                    0x1
#define _LATE_LE0_MASK                                      0x1
#define _LATE_LE1_POSN                                      0x1
#define _LATE_LE1_POSITION                                  0x1
#define _LATE_LE1_SIZE                                      0x1
#define _LATE_LE1_LENGTH                                    0x1
#define _LATE_LE1_MASK                                      0x2
#define _LATE_LE2_POSN                                      0x2
#define _LATE_LE2_POSITION                                  0x2
#define _LATE_LE2_SIZE                                      0x1
#define _LATE_LE2_LENGTH                                    0x1
#define _LATE_LE2_MASK                                      0x4
#define _LATE_LE3_POSN                                      0x3
#define _LATE_LE3_POSITION                                  0x3
#define _LATE_LE3_SIZE                                      0x1
#define _LATE_LE3_LENGTH                                    0x1
#define _LATE_LE3_MASK                                      0x8
#define _LATE_LE4_POSN                                      0x4
#define _LATE_LE4_POSITION                                  0x4
#define _LATE_LE4_SIZE                                      0x1
#define _LATE_LE4_LENGTH                                    0x1
#define _LATE_LE4_MASK                                      0x10
#define _LATE_LE5_POSN                                      0x5
#define _LATE_LE5_POSITION                                  0x5
#define _LATE_LE5_SIZE                                      0x1
#define _LATE_LE5_LENGTH                                    0x1
#define _LATE_LE5_MASK                                      0x20
#define _LATE_LE6_POSN                                      0x6
#define _LATE_LE6_POSITION                                  0x6
#define _LATE_LE6_SIZE                                      0x1
#define _LATE_LE6_LENGTH                                    0x1
#define _LATE_LE6_MASK                                      0x40
#define _LATE_LE7_POSN                                      0x7
#define _LATE_LE7_POSITION                                  0x7
#define _LATE_LE7_SIZE                                      0x1
#define _LATE_LE7_LENGTH                                    0x1
#define _LATE_LE7_MASK                                      0x80

// Register: TRISA
extern volatile unsigned char           TRISA               @ 0xF92;
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                @ 0xF92;
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits @ 0xF92;
// bitfield macros
#define _TRISA_TRISA0_POSN                                  0x0
#define _TRISA_TRISA0_POSITION                              0x0
#define _TRISA_TRISA0_SIZE                                  0x1
#define _TRISA_TRISA0_LENGTH                                0x1
#define _TRISA_TRISA0_MASK                                  0x1
#define _TRISA_TRISA1_POSN                                  0x1
#define _TRISA_TRISA1_POSITION                              0x1
#define _TRISA_TRISA1_SIZE                                  0x1
#define _TRISA_TRISA1_LENGTH                                0x1
#define _TRISA_TRISA1_MASK                                  0x2
#define _TRISA_TRISA2_POSN                                  0x2
#define _TRISA_TRISA2_POSITION                              0x2
#define _TRISA_TRISA2_SIZE                                  0x1
#define _TRISA_TRISA2_LENGTH                                0x1
#define _TRISA_TRISA2_MASK                                  0x4
#define _TRISA_TRISA3_POSN                                  0x3
#define _TRISA_TRISA3_POSITION                              0x3
#define _TRISA_TRISA3_SIZE                                  0x1
#define _TRISA_TRISA3_LENGTH                                0x1
#define _TRISA_TRISA3_MASK                                  0x8
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20
#define _TRISA_TRISA6_POSN                                  0x6
#define _TRISA_TRISA6_POSITION                              0x6
#define _TRISA_TRISA6_SIZE                                  0x1
#define _TRISA_TRISA6_LENGTH                                0x1
#define _TRISA_TRISA6_MASK                                  0x40
#define _TRISA_RA0_POSN                                     0x0
#define _TRISA_RA0_POSITION                                 0x0
#define _TRISA_RA0_SIZE                                     0x1
#define _TRISA_RA0_LENGTH                                   0x1
#define _TRISA_RA0_MASK                                     0x1
#define _TRISA_RA1_POSN                                     0x1
#define _TRISA_RA1_POSITION                                 0x1
#define _TRISA_RA1_SIZE                                     0x1
#define _TRISA_RA1_LENGTH                                   0x1
#define _TRISA_RA1_MASK                                     0x2
#define _TRISA_RA2_POSN                                     0x2
#define _TRISA_RA2_POSITION                                 0x2
#define _TRISA_RA2_SIZE                                     0x1
#define _TRISA_RA2_LENGTH                                   0x1
#define _TRISA_RA2_MASK                                     0x4
#define _TRISA_RA3_POSN                                     0x3
#define _TRISA_RA3_POSITION                                 0x3
#define _TRISA_RA3_SIZE                                     0x1
#define _TRISA_RA3_LENGTH                                   0x1
#define _TRISA_RA3_MASK                                     0x8
#define _TRISA_RA4_POSN                                     0x4
#define _TRISA_RA4_POSITION                                 0x4
#define _TRISA_RA4_SIZE                                     0x1
#define _TRISA_RA4_LENGTH                                   0x1
#define _TRISA_RA4_MASK                                     0x10
#define _TRISA_RA5_POSN                                     0x5
#define _TRISA_RA5_POSITION                                 0x5
#define _TRISA_RA5_SIZE                                     0x1
#define _TRISA_RA5_LENGTH                                   0x1
#define _TRISA_RA5_MASK                                     0x20
#define _TRISA_RA6_POSN                                     0x6
#define _TRISA_RA6_POSITION                                 0x6
#define _TRISA_RA6_SIZE                                     0x1
#define _TRISA_RA6_LENGTH                                   0x1
#define _TRISA_RA6_MASK                                     0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
    };
} DDRAbits_t;
extern volatile DDRAbits_t DDRAbits @ 0xF92;
// bitfield macros
#define _DDRA_TRISA0_POSN                                   0x0
#define _DDRA_TRISA0_POSITION                               0x0
#define _DDRA_TRISA0_SIZE                                   0x1
#define _DDRA_TRISA0_LENGTH                                 0x1
#define _DDRA_TRISA0_MASK                                   0x1
#define _DDRA_TRISA1_POSN                                   0x1
#define _DDRA_TRISA1_POSITION                               0x1
#define _DDRA_TRISA1_SIZE                                   0x1
#define _DDRA_TRISA1_LENGTH                                 0x1
#define _DDRA_TRISA1_MASK                                   0x2
#define _DDRA_TRISA2_POSN                                   0x2
#define _DDRA_TRISA2_POSITION                               0x2
#define _DDRA_TRISA2_SIZE                                   0x1
#define _DDRA_TRISA2_LENGTH                                 0x1
#define _DDRA_TRISA2_MASK                                   0x4
#define _DDRA_TRISA3_POSN                                   0x3
#define _DDRA_TRISA3_POSITION                               0x3
#define _DDRA_TRISA3_SIZE                                   0x1
#define _DDRA_TRISA3_LENGTH                                 0x1
#define _DDRA_TRISA3_MASK                                   0x8
#define _DDRA_TRISA4_POSN                                   0x4
#define _DDRA_TRISA4_POSITION                               0x4
#define _DDRA_TRISA4_SIZE                                   0x1
#define _DDRA_TRISA4_LENGTH                                 0x1
#define _DDRA_TRISA4_MASK                                   0x10
#define _DDRA_TRISA5_POSN                                   0x5
#define _DDRA_TRISA5_POSITION                               0x5
#define _DDRA_TRISA5_SIZE                                   0x1
#define _DDRA_TRISA5_LENGTH                                 0x1
#define _DDRA_TRISA5_MASK                                   0x20
#define _DDRA_TRISA6_POSN                                   0x6
#define _DDRA_TRISA6_POSITION                               0x6
#define _DDRA_TRISA6_SIZE                                   0x1
#define _DDRA_TRISA6_LENGTH                                 0x1
#define _DDRA_TRISA6_MASK                                   0x40
#define _DDRA_RA0_POSN                                      0x0
#define _DDRA_RA0_POSITION                                  0x0
#define _DDRA_RA0_SIZE                                      0x1
#define _DDRA_RA0_LENGTH                                    0x1
#define _DDRA_RA0_MASK                                      0x1
#define _DDRA_RA1_POSN                                      0x1
#define _DDRA_RA1_POSITION                                  0x1
#define _DDRA_RA1_SIZE                                      0x1
#define _DDRA_RA1_LENGTH                                    0x1
#define _DDRA_RA1_MASK                                      0x2
#define _DDRA_RA2_POSN                                      0x2
#define _DDRA_RA2_POSITION                                  0x2
#define _DDRA_RA2_SIZE                                      0x1
#define _DDRA_RA2_LENGTH                                    0x1
#define _DDRA_RA2_MASK                                      0x4
#define _DDRA_RA3_POSN                                      0x3
#define _DDRA_RA3_POSITION                                  0x3
#define _DDRA_RA3_SIZE                                      0x1
#define _DDRA_RA3_LENGTH                                    0x1
#define _DDRA_RA3_MASK                                      0x8
#define _DDRA_RA4_POSN                                      0x4
#define _DDRA_RA4_POSITION                                  0x4
#define _DDRA_RA4_SIZE                                      0x1
#define _DDRA_RA4_LENGTH                                    0x1
#define _DDRA_RA4_MASK                                      0x10
#define _DDRA_RA5_POSN                                      0x5
#define _DDRA_RA5_POSITION                                  0x5
#define _DDRA_RA5_SIZE                                      0x1
#define _DDRA_RA5_LENGTH                                    0x1
#define _DDRA_RA5_MASK                                      0x20
#define _DDRA_RA6_POSN                                      0x6
#define _DDRA_RA6_POSITION                                  0x6
#define _DDRA_RA6_SIZE                                      0x1
#define _DDRA_RA6_LENGTH                                    0x1
#define _DDRA_RA6_MASK                                      0x40

// Register: TRISB
extern volatile unsigned char           TRISB               @ 0xF93;
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                @ 0xF93;
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits @ 0xF93;
// bitfield macros
#define _TRISB_TRISB0_POSN                                  0x0
#define _TRISB_TRISB0_POSITION                              0x0
#define _TRISB_TRISB0_SIZE                                  0x1
#define _TRISB_TRISB0_LENGTH                                0x1
#define _TRISB_TRISB0_MASK                                  0x1
#define _TRISB_TRISB1_POSN                                  0x1
#define _TRISB_TRISB1_POSITION                              0x1
#define _TRISB_TRISB1_SIZE                                  0x1
#define _TRISB_TRISB1_LENGTH                                0x1
#define _TRISB_TRISB1_MASK                                  0x2
#define _TRISB_TRISB2_POSN                                  0x2
#define _TRISB_TRISB2_POSITION                              0x2
#define _TRISB_TRISB2_SIZE                                  0x1
#define _TRISB_TRISB2_LENGTH                                0x1
#define _TRISB_TRISB2_MASK                                  0x4
#define _TRISB_TRISB3_POSN                                  0x3
#define _TRISB_TRISB3_POSITION                              0x3
#define _TRISB_TRISB3_SIZE                                  0x1
#define _TRISB_TRISB3_LENGTH                                0x1
#define _TRISB_TRISB3_MASK                                  0x8
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80
#define _TRISB_RB0_POSN                                     0x0
#define _TRISB_RB0_POSITION                                 0x0
#define _TRISB_RB0_SIZE                                     0x1
#define _TRISB_RB0_LENGTH                                   0x1
#define _TRISB_RB0_MASK                                     0x1
#define _TRISB_RB1_POSN                                     0x1
#define _TRISB_RB1_POSITION                                 0x1
#define _TRISB_RB1_SIZE                                     0x1
#define _TRISB_RB1_LENGTH                                   0x1
#define _TRISB_RB1_MASK                                     0x2
#define _TRISB_RB2_POSN                                     0x2
#define _TRISB_RB2_POSITION                                 0x2
#define _TRISB_RB2_SIZE                                     0x1
#define _TRISB_RB2_LENGTH                                   0x1
#define _TRISB_RB2_MASK                                     0x4
#define _TRISB_RB3_POSN                                     0x3
#define _TRISB_RB3_POSITION                                 0x3
#define _TRISB_RB3_SIZE                                     0x1
#define _TRISB_RB3_LENGTH                                   0x1
#define _TRISB_RB3_MASK                                     0x8
#define _TRISB_RB4_POSN                                     0x4
#define _TRISB_RB4_POSITION                                 0x4
#define _TRISB_RB4_SIZE                                     0x1
#define _TRISB_RB4_LENGTH                                   0x1
#define _TRISB_RB4_MASK                                     0x10
#define _TRISB_RB5_POSN                                     0x5
#define _TRISB_RB5_POSITION                                 0x5
#define _TRISB_RB5_SIZE                                     0x1
#define _TRISB_RB5_LENGTH                                   0x1
#define _TRISB_RB5_MASK                                     0x20
#define _TRISB_RB6_POSN                                     0x6
#define _TRISB_RB6_POSITION                                 0x6
#define _TRISB_RB6_SIZE                                     0x1
#define _TRISB_RB6_LENGTH                                   0x1
#define _TRISB_RB6_MASK                                     0x40
#define _TRISB_RB7_POSN                                     0x7
#define _TRISB_RB7_POSITION                                 0x7
#define _TRISB_RB7_SIZE                                     0x1
#define _TRISB_RB7_LENGTH                                   0x1
#define _TRISB_RB7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits_t;
extern volatile DDRBbits_t DDRBbits @ 0xF93;
// bitfield macros
#define _DDRB_TRISB0_POSN                                   0x0
#define _DDRB_TRISB0_POSITION                               0x0
#define _DDRB_TRISB0_SIZE                                   0x1
#define _DDRB_TRISB0_LENGTH                                 0x1
#define _DDRB_TRISB0_MASK                                   0x1
#define _DDRB_TRISB1_POSN                                   0x1
#define _DDRB_TRISB1_POSITION                               0x1
#define _DDRB_TRISB1_SIZE                                   0x1
#define _DDRB_TRISB1_LENGTH                                 0x1
#define _DDRB_TRISB1_MASK                                   0x2
#define _DDRB_TRISB2_POSN                                   0x2
#define _DDRB_TRISB2_POSITION                               0x2
#define _DDRB_TRISB2_SIZE                                   0x1
#define _DDRB_TRISB2_LENGTH                                 0x1
#define _DDRB_TRISB2_MASK                                   0x4
#define _DDRB_TRISB3_POSN                                   0x3
#define _DDRB_TRISB3_POSITION                               0x3
#define _DDRB_TRISB3_SIZE                                   0x1
#define _DDRB_TRISB3_LENGTH                                 0x1
#define _DDRB_TRISB3_MASK                                   0x8
#define _DDRB_TRISB4_POSN                                   0x4
#define _DDRB_TRISB4_POSITION                               0x4
#define _DDRB_TRISB4_SIZE                                   0x1
#define _DDRB_TRISB4_LENGTH                                 0x1
#define _DDRB_TRISB4_MASK                                   0x10
#define _DDRB_TRISB5_POSN                                   0x5
#define _DDRB_TRISB5_POSITION                               0x5
#define _DDRB_TRISB5_SIZE                                   0x1
#define _DDRB_TRISB5_LENGTH                                 0x1
#define _DDRB_TRISB5_MASK                                   0x20
#define _DDRB_TRISB6_POSN                                   0x6
#define _DDRB_TRISB6_POSITION                               0x6
#define _DDRB_TRISB6_SIZE                                   0x1
#define _DDRB_TRISB6_LENGTH                                 0x1
#define _DDRB_TRISB6_MASK                                   0x40
#define _DDRB_TRISB7_POSN                                   0x7
#define _DDRB_TRISB7_POSITION                               0x7
#define _DDRB_TRISB7_SIZE                                   0x1
#define _DDRB_TRISB7_LENGTH                                 0x1
#define _DDRB_TRISB7_MASK                                   0x80
#define _DDRB_RB0_POSN                                      0x0
#define _DDRB_RB0_POSITION                                  0x0
#define _DDRB_RB0_SIZE                                      0x1
#define _DDRB_RB0_LENGTH                                    0x1
#define _DDRB_RB0_MASK                                      0x1
#define _DDRB_RB1_POSN                                      0x1
#define _DDRB_RB1_POSITION                                  0x1
#define _DDRB_RB1_SIZE                                      0x1
#define _DDRB_RB1_LENGTH                                    0x1
#define _DDRB_RB1_MASK                                      0x2
#define _DDRB_RB2_POSN                                      0x2
#define _DDRB_RB2_POSITION                                  0x2
#define _DDRB_RB2_SIZE                                      0x1
#define _DDRB_RB2_LENGTH                                    0x1
#define _DDRB_RB2_MASK                                      0x4
#define _DDRB_RB3_POSN                                      0x3
#define _DDRB_RB3_POSITION                                  0x3
#define _DDRB_RB3_SIZE                                      0x1
#define _DDRB_RB3_LENGTH                                    0x1
#define _DDRB_RB3_MASK                                      0x8
#define _DDRB_RB4_POSN                                      0x4
#define _DDRB_RB4_POSITION                                  0x4
#define _DDRB_RB4_SIZE                                      0x1
#define _DDRB_RB4_LENGTH                                    0x1
#define _DDRB_RB4_MASK                                      0x10
#define _DDRB_RB5_POSN                                      0x5
#define _DDRB_RB5_POSITION                                  0x5
#define _DDRB_RB5_SIZE                                      0x1
#define _DDRB_RB5_LENGTH                                    0x1
#define _DDRB_RB5_MASK                                      0x20
#define _DDRB_RB6_POSN                                      0x6
#define _DDRB_RB6_POSITION                                  0x6
#define _DDRB_RB6_SIZE                                      0x1
#define _DDRB_RB6_LENGTH                                    0x1
#define _DDRB_RB6_MASK                                      0x40
#define _DDRB_RB7_POSN                                      0x7
#define _DDRB_RB7_POSITION                                  0x7
#define _DDRB_RB7_SIZE                                      0x1
#define _DDRB_RB7_LENGTH                                    0x1
#define _DDRB_RB7_MASK                                      0x80

// Register: TRISC
extern volatile unsigned char           TRISC               @ 0xF94;
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                @ 0xF94;
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned                        :3;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :3;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned TRISC3                 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits @ 0xF94;
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80
#define _TRISC_RC0_POSN                                     0x0
#define _TRISC_RC0_POSITION                                 0x0
#define _TRISC_RC0_SIZE                                     0x1
#define _TRISC_RC0_LENGTH                                   0x1
#define _TRISC_RC0_MASK                                     0x1
#define _TRISC_RC1_POSN                                     0x1
#define _TRISC_RC1_POSITION                                 0x1
#define _TRISC_RC1_SIZE                                     0x1
#define _TRISC_RC1_LENGTH                                   0x1
#define _TRISC_RC1_MASK                                     0x2
#define _TRISC_RC2_POSN                                     0x2
#define _TRISC_RC2_POSITION                                 0x2
#define _TRISC_RC2_SIZE                                     0x1
#define _TRISC_RC2_LENGTH                                   0x1
#define _TRISC_RC2_MASK                                     0x4
#define _TRISC_RC6_POSN                                     0x6
#define _TRISC_RC6_POSITION                                 0x6
#define _TRISC_RC6_SIZE                                     0x1
#define _TRISC_RC6_LENGTH                                   0x1
#define _TRISC_RC6_MASK                                     0x40
#define _TRISC_RC7_POSN                                     0x7
#define _TRISC_RC7_POSITION                                 0x7
#define _TRISC_RC7_SIZE                                     0x1
#define _TRISC_RC7_LENGTH                                   0x1
#define _TRISC_RC7_MASK                                     0x80
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned                        :3;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned                        :3;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned TRISC3                 :1;
    };
} DDRCbits_t;
extern volatile DDRCbits_t DDRCbits @ 0xF94;
// bitfield macros
#define _DDRC_TRISC0_POSN                                   0x0
#define _DDRC_TRISC0_POSITION                               0x0
#define _DDRC_TRISC0_SIZE                                   0x1
#define _DDRC_TRISC0_LENGTH                                 0x1
#define _DDRC_TRISC0_MASK                                   0x1
#define _DDRC_TRISC1_POSN                                   0x1
#define _DDRC_TRISC1_POSITION                               0x1
#define _DDRC_TRISC1_SIZE                                   0x1
#define _DDRC_TRISC1_LENGTH                                 0x1
#define _DDRC_TRISC1_MASK                                   0x2
#define _DDRC_TRISC2_POSN                                   0x2
#define _DDRC_TRISC2_POSITION                               0x2
#define _DDRC_TRISC2_SIZE                                   0x1
#define _DDRC_TRISC2_LENGTH                                 0x1
#define _DDRC_TRISC2_MASK                                   0x4
#define _DDRC_TRISC6_POSN                                   0x6
#define _DDRC_TRISC6_POSITION                               0x6
#define _DDRC_TRISC6_SIZE                                   0x1
#define _DDRC_TRISC6_LENGTH                                 0x1
#define _DDRC_TRISC6_MASK                                   0x40
#define _DDRC_TRISC7_POSN                                   0x7
#define _DDRC_TRISC7_POSITION                               0x7
#define _DDRC_TRISC7_SIZE                                   0x1
#define _DDRC_TRISC7_LENGTH                                 0x1
#define _DDRC_TRISC7_MASK                                   0x80
#define _DDRC_RC0_POSN                                      0x0
#define _DDRC_RC0_POSITION                                  0x0
#define _DDRC_RC0_SIZE                                      0x1
#define _DDRC_RC0_LENGTH                                    0x1
#define _DDRC_RC0_MASK                                      0x1
#define _DDRC_RC1_POSN                                      0x1
#define _DDRC_RC1_POSITION                                  0x1
#define _DDRC_RC1_SIZE                                      0x1
#define _DDRC_RC1_LENGTH                                    0x1
#define _DDRC_RC1_MASK                                      0x2
#define _DDRC_RC2_POSN                                      0x2
#define _DDRC_RC2_POSITION                                  0x2
#define _DDRC_RC2_SIZE                                      0x1
#define _DDRC_RC2_LENGTH                                    0x1
#define _DDRC_RC2_MASK                                      0x4
#define _DDRC_RC6_POSN                                      0x6
#define _DDRC_RC6_POSITION                                  0x6
#define _DDRC_RC6_SIZE                                      0x1
#define _DDRC_RC6_LENGTH                                    0x1
#define _DDRC_RC6_MASK                                      0x40
#define _DDRC_RC7_POSN                                      0x7
#define _DDRC_RC7_POSITION                                  0x7
#define _DDRC_RC7_SIZE                                      0x1
#define _DDRC_RC7_LENGTH                                    0x1
#define _DDRC_RC7_MASK                                      0x80
#define _DDRC_TRISC3_POSN                                   0x3
#define _DDRC_TRISC3_POSITION                               0x3
#define _DDRC_TRISC3_SIZE                                   0x1
#define _DDRC_TRISC3_LENGTH                                 0x1
#define _DDRC_TRISC3_MASK                                   0x8

// Register: TRISD
extern volatile unsigned char           TRISD               @ 0xF95;
#ifndef _LIB_BUILD
asm("TRISD equ 0F95h");
#endif
// aliases
extern volatile unsigned char           DDRD                @ 0xF95;
#ifndef _LIB_BUILD
asm("DDRD equ 0F95h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
        unsigned TRISD3                 :1;
        unsigned TRISD4                 :1;
        unsigned TRISD5                 :1;
        unsigned TRISD6                 :1;
        unsigned TRISD7                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits @ 0xF95;
// bitfield macros
#define _TRISD_TRISD0_POSN                                  0x0
#define _TRISD_TRISD0_POSITION                              0x0
#define _TRISD_TRISD0_SIZE                                  0x1
#define _TRISD_TRISD0_LENGTH                                0x1
#define _TRISD_TRISD0_MASK                                  0x1
#define _TRISD_TRISD1_POSN                                  0x1
#define _TRISD_TRISD1_POSITION                              0x1
#define _TRISD_TRISD1_SIZE                                  0x1
#define _TRISD_TRISD1_LENGTH                                0x1
#define _TRISD_TRISD1_MASK                                  0x2
#define _TRISD_TRISD2_POSN                                  0x2
#define _TRISD_TRISD2_POSITION                              0x2
#define _TRISD_TRISD2_SIZE                                  0x1
#define _TRISD_TRISD2_LENGTH                                0x1
#define _TRISD_TRISD2_MASK                                  0x4
#define _TRISD_TRISD3_POSN                                  0x3
#define _TRISD_TRISD3_POSITION                              0x3
#define _TRISD_TRISD3_SIZE                                  0x1
#define _TRISD_TRISD3_LENGTH                                0x1
#define _TRISD_TRISD3_MASK                                  0x8
#define _TRISD_TRISD4_POSN                                  0x4
#define _TRISD_TRISD4_POSITION                              0x4
#define _TRISD_TRISD4_SIZE                                  0x1
#define _TRISD_TRISD4_LENGTH                                0x1
#define _TRISD_TRISD4_MASK                                  0x10
#define _TRISD_TRISD5_POSN                                  0x5
#define _TRISD_TRISD5_POSITION                              0x5
#define _TRISD_TRISD5_SIZE                                  0x1
#define _TRISD_TRISD5_LENGTH                                0x1
#define _TRISD_TRISD5_MASK                                  0x20
#define _TRISD_TRISD6_POSN                                  0x6
#define _TRISD_TRISD6_POSITION                              0x6
#define _TRISD_TRISD6_SIZE                                  0x1
#define _TRISD_TRISD6_LENGTH                                0x1
#define _TRISD_TRISD6_MASK                                  0x40
#define _TRISD_TRISD7_POSN                                  0x7
#define _TRISD_TRISD7_POSITION                              0x7
#define _TRISD_TRISD7_SIZE                                  0x1
#define _TRISD_TRISD7_LENGTH                                0x1
#define _TRISD_TRISD7_MASK                                  0x80
#define _TRISD_RD0_POSN                                     0x0
#define _TRISD_RD0_POSITION                                 0x0
#define _TRISD_RD0_SIZE                                     0x1
#define _TRISD_RD0_LENGTH                                   0x1
#define _TRISD_RD0_MASK                                     0x1
#define _TRISD_RD1_POSN                                     0x1
#define _TRISD_RD1_POSITION                                 0x1
#define _TRISD_RD1_SIZE                                     0x1
#define _TRISD_RD1_LENGTH                                   0x1
#define _TRISD_RD1_MASK                                     0x2
#define _TRISD_RD2_POSN                                     0x2
#define _TRISD_RD2_POSITION                                 0x2
#define _TRISD_RD2_SIZE                                     0x1
#define _TRISD_RD2_LENGTH                                   0x1
#define _TRISD_RD2_MASK                                     0x4
#define _TRISD_RD3_POSN                                     0x3
#define _TRISD_RD3_POSITION                                 0x3
#define _TRISD_RD3_SIZE                                     0x1
#define _TRISD_RD3_LENGTH                                   0x1
#define _TRISD_RD3_MASK                                     0x8
#define _TRISD_RD4_POSN                                     0x4
#define _TRISD_RD4_POSITION                                 0x4
#define _TRISD_RD4_SIZE                                     0x1
#define _TRISD_RD4_LENGTH                                   0x1
#define _TRISD_RD4_MASK                                     0x10
#define _TRISD_RD5_POSN                                     0x5
#define _TRISD_RD5_POSITION                                 0x5
#define _TRISD_RD5_SIZE                                     0x1
#define _TRISD_RD5_LENGTH                                   0x1
#define _TRISD_RD5_MASK                                     0x20
#define _TRISD_RD6_POSN                                     0x6
#define _TRISD_RD6_POSITION                                 0x6
#define _TRISD_RD6_SIZE                                     0x1
#define _TRISD_RD6_LENGTH                                   0x1
#define _TRISD_RD6_MASK                                     0x40
#define _TRISD_RD7_POSN                                     0x7
#define _TRISD_RD7_POSITION                                 0x7
#define _TRISD_RD7_SIZE                                     0x1
#define _TRISD_RD7_LENGTH                                   0x1
#define _TRISD_RD7_MASK                                     0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISD0                 :1;
        unsigned TRISD1                 :1;
        unsigned TRISD2                 :1;
        unsigned TRISD3                 :1;
        unsigned TRISD4                 :1;
        unsigned TRISD5                 :1;
        unsigned TRISD6                 :1;
        unsigned TRISD7                 :1;
    };
    struct {
        unsigned RD0                    :1;
        unsigned RD1                    :1;
        unsigned RD2                    :1;
        unsigned RD3                    :1;
        unsigned RD4                    :1;
        unsigned RD5                    :1;
        unsigned RD6                    :1;
        unsigned RD7                    :1;
    };
} DDRDbits_t;
extern volatile DDRDbits_t DDRDbits @ 0xF95;
// bitfield macros
#define _DDRD_TRISD0_POSN                                   0x0
#define _DDRD_TRISD0_POSITION                               0x0
#define _DDRD_TRISD0_SIZE                                   0x1
#define _DDRD_TRISD0_LENGTH                                 0x1
#define _DDRD_TRISD0_MASK                                   0x1
#define _DDRD_TRISD1_POSN                                   0x1
#define _DDRD_TRISD1_POSITION                               0x1
#define _DDRD_TRISD1_SIZE                                   0x1
#define _DDRD_TRISD1_LENGTH                                 0x1
#define _DDRD_TRISD1_MASK                                   0x2
#define _DDRD_TRISD2_POSN                                   0x2
#define _DDRD_TRISD2_POSITION                               0x2
#define _DDRD_TRISD2_SIZE                                   0x1
#define _DDRD_TRISD2_LENGTH                                 0x1
#define _DDRD_TRISD2_MASK                                   0x4
#define _DDRD_TRISD3_POSN                                   0x3
#define _DDRD_TRISD3_POSITION                               0x3
#define _DDRD_TRISD3_SIZE                                   0x1
#define _DDRD_TRISD3_LENGTH                                 0x1
#define _DDRD_TRISD3_MASK                                   0x8
#define _DDRD_TRISD4_POSN                                   0x4
#define _DDRD_TRISD4_POSITION                               0x4
#define _DDRD_TRISD4_SIZE                                   0x1
#define _DDRD_TRISD4_LENGTH                                 0x1
#define _DDRD_TRISD4_MASK                                   0x10
#define _DDRD_TRISD5_POSN                                   0x5
#define _DDRD_TRISD5_POSITION                               0x5
#define _DDRD_TRISD5_SIZE                                   0x1
#define _DDRD_TRISD5_LENGTH                                 0x1
#define _DDRD_TRISD5_MASK                                   0x20
#define _DDRD_TRISD6_POSN                                   0x6
#define _DDRD_TRISD6_POSITION                               0x6
#define _DDRD_TRISD6_SIZE                                   0x1
#define _DDRD_TRISD6_LENGTH                                 0x1
#define _DDRD_TRISD6_MASK                                   0x40
#define _DDRD_TRISD7_POSN                                   0x7
#define _DDRD_TRISD7_POSITION                               0x7
#define _DDRD_TRISD7_SIZE                                   0x1
#define _DDRD_TRISD7_LENGTH                                 0x1
#define _DDRD_TRISD7_MASK                                   0x80
#define _DDRD_RD0_POSN                                      0x0
#define _DDRD_RD0_POSITION                                  0x0
#define _DDRD_RD0_SIZE                                      0x1
#define _DDRD_RD0_LENGTH                                    0x1
#define _DDRD_RD0_MASK                                      0x1
#define _DDRD_RD1_POSN                                      0x1
#define _DDRD_RD1_POSITION                                  0x1
#define _DDRD_RD1_SIZE                                      0x1
#define _DDRD_RD1_LENGTH                                    0x1
#define _DDRD_RD1_MASK                                      0x2
#define _DDRD_RD2_POSN                                      0x2
#define _DDRD_RD2_POSITION                                  0x2
#define _DDRD_RD2_SIZE                                      0x1
#define _DDRD_RD2_LENGTH                                    0x1
#define _DDRD_RD2_MASK                                      0x4
#define _DDRD_RD3_POSN                                      0x3
#define _DDRD_RD3_POSITION                                  0x3
#define _DDRD_RD3_SIZE                                      0x1
#define _DDRD_RD3_LENGTH                                    0x1
#define _DDRD_RD3_MASK                                      0x8
#define _DDRD_RD4_POSN                                      0x4
#define _DDRD_RD4_POSITION                                  0x4
#define _DDRD_RD4_SIZE                                      0x1
#define _DDRD_RD4_LENGTH                                    0x1
#define _DDRD_RD4_MASK                                      0x10
#define _DDRD_RD5_POSN                                      0x5
#define _DDRD_RD5_POSITION                                  0x5
#define _DDRD_RD5_SIZE                                      0x1
#define _DDRD_RD5_LENGTH                                    0x1
#define _DDRD_RD5_MASK                                      0x20
#define _DDRD_RD6_POSN                                      0x6
#define _DDRD_RD6_POSITION                                  0x6
#define _DDRD_RD6_SIZE                                      0x1
#define _DDRD_RD6_LENGTH                                    0x1
#define _DDRD_RD6_MASK                                      0x40
#define _DDRD_RD7_POSN                                      0x7
#define _DDRD_RD7_POSITION                                  0x7
#define _DDRD_RD7_SIZE                                      0x1
#define _DDRD_RD7_LENGTH                                    0x1
#define _DDRD_RD7_MASK                                      0x80

// Register: TRISE
extern volatile unsigned char           TRISE               @ 0xF96;
#ifndef _LIB_BUILD
asm("TRISE equ 0F96h");
#endif
// aliases
extern volatile unsigned char           DDRE                @ 0xF96;
#ifndef _LIB_BUILD
asm("DDRE equ 0F96h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits @ 0xF96;
// bitfield macros
#define _TRISE_TRISE0_POSN                                  0x0
#define _TRISE_TRISE0_POSITION                              0x0
#define _TRISE_TRISE0_SIZE                                  0x1
#define _TRISE_TRISE0_LENGTH                                0x1
#define _TRISE_TRISE0_MASK                                  0x1
#define _TRISE_TRISE1_POSN                                  0x1
#define _TRISE_TRISE1_POSITION                              0x1
#define _TRISE_TRISE1_SIZE                                  0x1
#define _TRISE_TRISE1_LENGTH                                0x1
#define _TRISE_TRISE1_MASK                                  0x2
#define _TRISE_TRISE2_POSN                                  0x2
#define _TRISE_TRISE2_POSITION                              0x2
#define _TRISE_TRISE2_SIZE                                  0x1
#define _TRISE_TRISE2_LENGTH                                0x1
#define _TRISE_TRISE2_MASK                                  0x4
#define _TRISE_RE0_POSN                                     0x0
#define _TRISE_RE0_POSITION                                 0x0
#define _TRISE_RE0_SIZE                                     0x1
#define _TRISE_RE0_LENGTH                                   0x1
#define _TRISE_RE0_MASK                                     0x1
#define _TRISE_RE1_POSN                                     0x1
#define _TRISE_RE1_POSITION                                 0x1
#define _TRISE_RE1_SIZE                                     0x1
#define _TRISE_RE1_LENGTH                                   0x1
#define _TRISE_RE1_MASK                                     0x2
#define _TRISE_RE2_POSN                                     0x2
#define _TRISE_RE2_POSITION                                 0x2
#define _TRISE_RE2_SIZE                                     0x1
#define _TRISE_RE2_LENGTH                                   0x1
#define _TRISE_RE2_MASK                                     0x4
// alias bitfield definitions
typedef union {
    struct {
        unsigned TRISE0                 :1;
        unsigned TRISE1                 :1;
        unsigned TRISE2                 :1;
    };
    struct {
        unsigned RE0                    :1;
        unsigned RE1                    :1;
        unsigned RE2                    :1;
    };
} DDREbits_t;
extern volatile DDREbits_t DDREbits @ 0xF96;
// bitfield macros
#define _DDRE_TRISE0_POSN                                   0x0
#define _DDRE_TRISE0_POSITION                               0x0
#define _DDRE_TRISE0_SIZE                                   0x1
#define _DDRE_TRISE0_LENGTH                                 0x1
#define _DDRE_TRISE0_MASK                                   0x1
#define _DDRE_TRISE1_POSN                                   0x1
#define _DDRE_TRISE1_POSITION                               0x1
#define _DDRE_TRISE1_SIZE                                   0x1
#define _DDRE_TRISE1_LENGTH                                 0x1
#define _DDRE_TRISE1_MASK                                   0x2
#define _DDRE_TRISE2_POSN                                   0x2
#define _DDRE_TRISE2_POSITION                               0x2
#define _DDRE_TRISE2_SIZE                                   0x1
#define _DDRE_TRISE2_LENGTH                                 0x1
#define _DDRE_TRISE2_MASK                                   0x4
#define _DDRE_RE0_POSN                                      0x0
#define _DDRE_RE0_POSITION                                  0x0
#define _DDRE_RE0_SIZE                                      0x1
#define _DDRE_RE0_LENGTH                                    0x1
#define _DDRE_RE0_MASK                                      0x1
#define _DDRE_RE1_POSN                                      0x1
#define _DDRE_RE1_POSITION                                  0x1
#define _DDRE_RE1_SIZE                                      0x1
#define _DDRE_RE1_LENGTH                                    0x1
#define _DDRE_RE1_MASK                                      0x2
#define _DDRE_RE2_POSN                                      0x2
#define _DDRE_RE2_POSITION                                  0x2
#define _DDRE_RE2_SIZE                                      0x1
#define _DDRE_RE2_LENGTH                                    0x1
#define _DDRE_RE2_MASK                                      0x4

// Register: OSCTUNE
extern volatile unsigned char           OSCTUNE             @ 0xF9B;
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN                    :5;
        unsigned                        :2;
        unsigned INTSRC                 :1;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits @ 0xF9B;
// bitfield macros
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x5
#define _OSCTUNE_TUN_LENGTH                                 0x5
#define _OSCTUNE_TUN_MASK                                   0x1F
#define _OSCTUNE_INTSRC_POSN                                0x7
#define _OSCTUNE_INTSRC_POSITION                            0x7
#define _OSCTUNE_INTSRC_SIZE                                0x1
#define _OSCTUNE_INTSRC_LENGTH                              0x1
#define _OSCTUNE_INTSRC_MASK                                0x80
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10

// Register: PIE1
extern volatile unsigned char           PIE1                @ 0xF9D;
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned SPPIE                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIE                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IE                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IE                  :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits @ 0xF9D;
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
#define _PIE1_SSPIE_POSN                                    0x3
#define _PIE1_SSPIE_POSITION                                0x3
#define _PIE1_SSPIE_SIZE                                    0x1
#define _PIE1_SSPIE_LENGTH                                  0x1
#define _PIE1_SSPIE_MASK                                    0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_SPPIE_POSN                                    0x7
#define _PIE1_SPPIE_POSITION                                0x7
#define _PIE1_SPPIE_SIZE                                    0x1
#define _PIE1_SPPIE_LENGTH                                  0x1
#define _PIE1_SPPIE_MASK                                    0x80
#define _PIE1_PSPIE_POSN                                    0x7
#define _PIE1_PSPIE_POSITION                                0x7
#define _PIE1_PSPIE_SIZE                                    0x1
#define _PIE1_PSPIE_LENGTH                                  0x1
#define _PIE1_PSPIE_MASK                                    0x80
#define _PIE1_RC1IE_POSN                                    0x5
#define _PIE1_RC1IE_POSITION                                0x5
#define _PIE1_RC1IE_SIZE                                    0x1
#define _PIE1_RC1IE_LENGTH                                  0x1
#define _PIE1_RC1IE_MASK                                    0x20
#define _PIE1_TX1IE_POSN                                    0x4
#define _PIE1_TX1IE_POSITION                                0x4
#define _PIE1_TX1IE_SIZE                                    0x1
#define _PIE1_TX1IE_LENGTH                                  0x1
#define _PIE1_TX1IE_MASK                                    0x10

// Register: PIR1
extern volatile unsigned char           PIR1                @ 0xF9E;
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned SPPIF                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIF                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IF                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IF                  :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits @ 0xF9E;
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
#define _PIR1_SSPIF_POSN                                    0x3
#define _PIR1_SSPIF_POSITION                                0x3
#define _PIR1_SSPIF_SIZE                                    0x1
#define _PIR1_SSPIF_LENGTH                                  0x1
#define _PIR1_SSPIF_MASK                                    0x8
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_SPPIF_POSN                                    0x7
#define _PIR1_SPPIF_POSITION                                0x7
#define _PIR1_SPPIF_SIZE                                    0x1
#define _PIR1_SPPIF_LENGTH                                  0x1
#define _PIR1_SPPIF_MASK                                    0x80
#define _PIR1_PSPIF_POSN                                    0x7
#define _PIR1_PSPIF_POSITION                                0x7
#define _PIR1_PSPIF_SIZE                                    0x1
#define _PIR1_PSPIF_LENGTH                                  0x1
#define _PIR1_PSPIF_MASK                                    0x80
#define _PIR1_RC1IF_POSN                                    0x5
#define _PIR1_RC1IF_POSITION                                0x5
#define _PIR1_RC1IF_SIZE                                    0x1
#define _PIR1_RC1IF_LENGTH                                  0x1
#define _PIR1_RC1IF_MASK                                    0x20
#define _PIR1_TX1IF_POSN                                    0x4
#define _PIR1_TX1IF_POSITION                                0x4
#define _PIR1_TX1IF_SIZE                                    0x1
#define _PIR1_TX1IF_LENGTH                                  0x1
#define _PIR1_TX1IF_MASK                                    0x10

// Register: IPR1
extern volatile unsigned char           IPR1                @ 0xF9F;
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned CCP1IP                 :1;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
        unsigned ADIP                   :1;
        unsigned SPPIP                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned PSPIP                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IP                  :1;
    };
} IPR1bits_t;
extern volatile IPR1bits_t IPR1bits @ 0xF9F;
// bitfield macros
#define _IPR1_TMR1IP_POSN                                   0x0
#define _IPR1_TMR1IP_POSITION                               0x0
#define _IPR1_TMR1IP_SIZE                                   0x1
#define _IPR1_TMR1IP_LENGTH                                 0x1
#define _IPR1_TMR1IP_MASK                                   0x1
#define _IPR1_TMR2IP_POSN                                   0x1
#define _IPR1_TMR2IP_POSITION                               0x1
#define _IPR1_TMR2IP_SIZE                                   0x1
#define _IPR1_TMR2IP_LENGTH                                 0x1
#define _IPR1_TMR2IP_MASK                                   0x2
#define _IPR1_CCP1IP_POSN                                   0x2
#define _IPR1_CCP1IP_POSITION                               0x2
#define _IPR1_CCP1IP_SIZE                                   0x1
#define _IPR1_CCP1IP_LENGTH                                 0x1
#define _IPR1_CCP1IP_MASK                                   0x4
#define _IPR1_SSPIP_POSN                                    0x3
#define _IPR1_SSPIP_POSITION                                0x3
#define _IPR1_SSPIP_SIZE                                    0x1
#define _IPR1_SSPIP_LENGTH                                  0x1
#define _IPR1_SSPIP_MASK                                    0x8
#define _IPR1_TXIP_POSN                                     0x4
#define _IPR1_TXIP_POSITION                                 0x4
#define _IPR1_TXIP_SIZE                                     0x1
#define _IPR1_TXIP_LENGTH                                   0x1
#define _IPR1_TXIP_MASK                                     0x10
#define _IPR1_RCIP_POSN                                     0x5
#define _IPR1_RCIP_POSITION                                 0x5
#define _IPR1_RCIP_SIZE                                     0x1
#define _IPR1_RCIP_LENGTH                                   0x1
#define _IPR1_RCIP_MASK                                     0x20
#define _IPR1_ADIP_POSN                                     0x6
#define _IPR1_ADIP_POSITION                                 0x6
#define _IPR1_ADIP_SIZE                                     0x1
#define _IPR1_ADIP_LENGTH                                   0x1
#define _IPR1_ADIP_MASK                                     0x40
#define _IPR1_SPPIP_POSN                                    0x7
#define _IPR1_SPPIP_POSITION                                0x7
#define _IPR1_SPPIP_SIZE                                    0x1
#define _IPR1_SPPIP_LENGTH                                  0x1
#define _IPR1_SPPIP_MASK                                    0x80
#define _IPR1_PSPIP_POSN                                    0x7
#define _IPR1_PSPIP_POSITION                                0x7
#define _IPR1_PSPIP_SIZE                                    0x1
#define _IPR1_PSPIP_LENGTH                                  0x1
#define _IPR1_PSPIP_MASK                                    0x80
#define _IPR1_RC1IP_POSN                                    0x5
#define _IPR1_RC1IP_POSITION                                0x5
#define _IPR1_RC1IP_SIZE                                    0x1
#define _IPR1_RC1IP_LENGTH                                  0x1
#define _IPR1_RC1IP_MASK                                    0x20
#define _IPR1_TX1IP_POSN                                    0x4
#define _IPR1_TX1IP_POSITION                                0x4
#define _IPR1_TX1IP_SIZE                                    0x1
#define _IPR1_TX1IP_LENGTH                                  0x1
#define _IPR1_TX1IP_MASK                                    0x10

// Register: PIE2
extern volatile unsigned char           PIE2                @ 0xFA0;
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned TMR3IE                 :1;
        unsigned HLVDIE                 :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned USBIE                  :1;
        unsigned CMIE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIE                  :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits @ 0xFA0;
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_TMR3IE_POSN                                   0x1
#define _PIE2_TMR3IE_POSITION                               0x1
#define _PIE2_TMR3IE_SIZE                                   0x1
#define _PIE2_TMR3IE_LENGTH                                 0x1
#define _PIE2_TMR3IE_MASK                                   0x2
#define _PIE2_HLVDIE_POSN                                   0x2
#define _PIE2_HLVDIE_POSITION                               0x2
#define _PIE2_HLVDIE_SIZE                                   0x1
#define _PIE2_HLVDIE_LENGTH                                 0x1
#define _PIE2_HLVDIE_MASK                                   0x4
#define _PIE2_BCLIE_POSN                                    0x3
#define _PIE2_BCLIE_POSITION                                0x3
#define _PIE2_BCLIE_SIZE                                    0x1
#define _PIE2_BCLIE_LENGTH                                  0x1
#define _PIE2_BCLIE_MASK                                    0x8
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10
#define _PIE2_USBIE_POSN                                    0x5
#define _PIE2_USBIE_POSITION                                0x5
#define _PIE2_USBIE_SIZE                                    0x1
#define _PIE2_USBIE_LENGTH                                  0x1
#define _PIE2_USBIE_MASK                                    0x20
#define _PIE2_CMIE_POSN                                     0x6
#define _PIE2_CMIE_POSITION                                 0x6
#define _PIE2_CMIE_SIZE                                     0x1
#define _PIE2_CMIE_LENGTH                                   0x1
#define _PIE2_CMIE_MASK                                     0x40
#define _PIE2_OSCFIE_POSN                                   0x7
#define _PIE2_OSCFIE_POSITION                               0x7
#define _PIE2_OSCFIE_SIZE                                   0x1
#define _PIE2_OSCFIE_LENGTH                                 0x1
#define _PIE2_OSCFIE_MASK                                   0x80
#define _PIE2_LVDIE_POSN                                    0x2
#define _PIE2_LVDIE_POSITION                                0x2
#define _PIE2_LVDIE_SIZE                                    0x1
#define _PIE2_LVDIE_LENGTH                                  0x1
#define _PIE2_LVDIE_MASK                                    0x4

// Register: PIR2
extern volatile unsigned char           PIR2                @ 0xFA1;
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned TMR3IF                 :1;
        unsigned HLVDIF                 :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned USBIF                  :1;
        unsigned CMIF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIF                  :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits @ 0xFA1;
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_TMR3IF_POSN                                   0x1
#define _PIR2_TMR3IF_POSITION                               0x1
#define _PIR2_TMR3IF_SIZE                                   0x1
#define _PIR2_TMR3IF_LENGTH                                 0x1
#define _PIR2_TMR3IF_MASK                                   0x2
#define _PIR2_HLVDIF_POSN                                   0x2
#define _PIR2_HLVDIF_POSITION                               0x2
#define _PIR2_HLVDIF_SIZE                                   0x1
#define _PIR2_HLVDIF_LENGTH                                 0x1
#define _PIR2_HLVDIF_MASK                                   0x4
#define _PIR2_BCLIF_POSN                                    0x3
#define _PIR2_BCLIF_POSITION                                0x3
#define _PIR2_BCLIF_SIZE                                    0x1
#define _PIR2_BCLIF_LENGTH                                  0x1
#define _PIR2_BCLIF_MASK                                    0x8
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10
#define _PIR2_USBIF_POSN                                    0x5
#define _PIR2_USBIF_POSITION                                0x5
#define _PIR2_USBIF_SIZE                                    0x1
#define _PIR2_USBIF_LENGTH                                  0x1
#define _PIR2_USBIF_MASK                                    0x20
#define _PIR2_CMIF_POSN                                     0x6
#define _PIR2_CMIF_POSITION                                 0x6
#define _PIR2_CMIF_SIZE                                     0x1
#define _PIR2_CMIF_LENGTH                                   0x1
#define _PIR2_CMIF_MASK                                     0x40
#define _PIR2_OSCFIF_POSN                                   0x7
#define _PIR2_OSCFIF_POSITION                               0x7
#define _PIR2_OSCFIF_SIZE                                   0x1
#define _PIR2_OSCFIF_LENGTH                                 0x1
#define _PIR2_OSCFIF_MASK                                   0x80
#define _PIR2_LVDIF_POSN                                    0x2
#define _PIR2_LVDIF_POSITION                                0x2
#define _PIR2_LVDIF_SIZE                                    0x1
#define _PIR2_LVDIF_LENGTH                                  0x1
#define _PIR2_LVDIF_MASK                                    0x4

// Register: IPR2
extern volatile unsigned char           IPR2                @ 0xFA2;
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IP                 :1;
        unsigned TMR3IP                 :1;
        unsigned HLVDIP                 :1;
        unsigned BCLIP                  :1;
        unsigned EEIP                   :1;
        unsigned USBIP                  :1;
        unsigned CMIP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIP                  :1;
    };
} IPR2bits_t;
extern volatile IPR2bits_t IPR2bits @ 0xFA2;
// bitfield macros
#define _IPR2_CCP2IP_POSN                                   0x0
#define _IPR2_CCP2IP_POSITION                               0x0
#define _IPR2_CCP2IP_SIZE                                   0x1
#define _IPR2_CCP2IP_LENGTH                                 0x1
#define _IPR2_CCP2IP_MASK                                   0x1
#define _IPR2_TMR3IP_POSN                                   0x1
#define _IPR2_TMR3IP_POSITION                               0x1
#define _IPR2_TMR3IP_SIZE                                   0x1
#define _IPR2_TMR3IP_LENGTH                                 0x1
#define _IPR2_TMR3IP_MASK                                   0x2
#define _IPR2_HLVDIP_POSN                                   0x2
#define _IPR2_HLVDIP_POSITION                               0x2
#define _IPR2_HLVDIP_SIZE                                   0x1
#define _IPR2_HLVDIP_LENGTH                                 0x1
#define _IPR2_HLVDIP_MASK                                   0x4
#define _IPR2_BCLIP_POSN                                    0x3
#define _IPR2_BCLIP_POSITION                                0x3
#define _IPR2_BCLIP_SIZE                                    0x1
#define _IPR2_BCLIP_LENGTH                                  0x1
#define _IPR2_BCLIP_MASK                                    0x8
#define _IPR2_EEIP_POSN                                     0x4
#define _IPR2_EEIP_POSITION                                 0x4
#define _IPR2_EEIP_SIZE                                     0x1
#define _IPR2_EEIP_LENGTH                                   0x1
#define _IPR2_EEIP_MASK                                     0x10
#define _IPR2_USBIP_POSN                                    0x5
#define _IPR2_USBIP_POSITION                                0x5
#define _IPR2_USBIP_SIZE                                    0x1
#define _IPR2_USBIP_LENGTH                                  0x1
#define _IPR2_USBIP_MASK                                    0x20
#define _IPR2_CMIP_POSN                                     0x6
#define _IPR2_CMIP_POSITION                                 0x6
#define _IPR2_CMIP_SIZE                                     0x1
#define _IPR2_CMIP_LENGTH                                   0x1
#define _IPR2_CMIP_MASK                                     0x40
#define _IPR2_OSCFIP_POSN                                   0x7
#define _IPR2_OSCFIP_POSITION                               0x7
#define _IPR2_OSCFIP_SIZE                                   0x1
#define _IPR2_OSCFIP_LENGTH                                 0x1
#define _IPR2_OSCFIP_MASK                                   0x80
#define _IPR2_LVDIP_POSN                                    0x2
#define _IPR2_LVDIP_POSITION                                0x2
#define _IPR2_LVDIP_SIZE                                    0x1
#define _IPR2_LVDIP_LENGTH                                  0x1
#define _IPR2_LVDIP_MASK                                    0x4

// Register: EECON1
extern volatile unsigned char           EECON1              @ 0xFA6;
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned                        :1;
        unsigned CFGS                   :1;
        unsigned EEPGD                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned EEFS                   :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits @ 0xFA6;
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
#define _EECON1_EEPGD_POSN                                  0x7
#define _EECON1_EEPGD_POSITION                              0x7
#define _EECON1_EEPGD_SIZE                                  0x1
#define _EECON1_EEPGD_LENGTH                                0x1
#define _EECON1_EEPGD_MASK                                  0x80
#define _EECON1_EEFS_POSN                                   0x6
#define _EECON1_EEFS_POSITION                               0x6
#define _EECON1_EEFS_SIZE                                   0x1
#define _EECON1_EEFS_LENGTH                                 0x1
#define _EECON1_EEFS_MASK                                   0x40

// Register: EECON2
extern volatile unsigned char           EECON2              @ 0xFA7;
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif

// Register: EEDATA
extern volatile unsigned char           EEDATA              @ 0xFA8;
#ifndef _LIB_BUILD
asm("EEDATA equ 0FA8h");
#endif

// Register: EEADR
extern volatile unsigned char           EEADR               @ 0xFA9;
#ifndef _LIB_BUILD
asm("EEADR equ 0FA9h");
#endif

// Register: RCSTA
extern volatile unsigned char           RCSTA               @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA1              @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits @ 0xFAB;
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80
#define _RCSTA_ADEN_POSN                                    0x3
#define _RCSTA_ADEN_POSITION                                0x3
#define _RCSTA_ADEN_SIZE                                    0x1
#define _RCSTA_ADEN_LENGTH                                  0x1
#define _RCSTA_ADEN_MASK                                    0x8
#define _RCSTA_SRENA_POSN                                   0x5
#define _RCSTA_SRENA_POSITION                               0x5
#define _RCSTA_SRENA_SIZE                                   0x1
#define _RCSTA_SRENA_LENGTH                                 0x1
#define _RCSTA_SRENA_MASK                                   0x20
#define _RCSTA_RC8_9_POSN                                   0x6
#define _RCSTA_RC8_9_POSITION                               0x6
#define _RCSTA_RC8_9_SIZE                                   0x1
#define _RCSTA_RC8_9_LENGTH                                 0x1
#define _RCSTA_RC8_9_MASK                                   0x40
#define _RCSTA_RC9_POSN                                     0x6
#define _RCSTA_RC9_POSITION                                 0x6
#define _RCSTA_RC9_SIZE                                     0x1
#define _RCSTA_RC9_LENGTH                                   0x1
#define _RCSTA_RC9_MASK                                     0x40
#define _RCSTA_RCD8_POSN                                    0x0
#define _RCSTA_RCD8_POSITION                                0x0
#define _RCSTA_RCD8_SIZE                                    0x1
#define _RCSTA_RCD8_LENGTH                                  0x1
#define _RCSTA_RCD8_MASK                                    0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC8_9                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned RC9                    :1;
    };
    struct {
        unsigned RCD8                   :1;
    };
} RCSTA1bits_t;
extern volatile RCSTA1bits_t RCSTA1bits @ 0xFAB;
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
#define _RCSTA1_ADEN_POSN                                   0x3
#define _RCSTA1_ADEN_POSITION                               0x3
#define _RCSTA1_ADEN_SIZE                                   0x1
#define _RCSTA1_ADEN_LENGTH                                 0x1
#define _RCSTA1_ADEN_MASK                                   0x8
#define _RCSTA1_SRENA_POSN                                  0x5
#define _RCSTA1_SRENA_POSITION                              0x5
#define _RCSTA1_SRENA_SIZE                                  0x1
#define _RCSTA1_SRENA_LENGTH                                0x1
#define _RCSTA1_SRENA_MASK                                  0x20
#define _RCSTA1_RC8_9_POSN                                  0x6
#define _RCSTA1_RC8_9_POSITION                              0x6
#define _RCSTA1_RC8_9_SIZE                                  0x1
#define _RCSTA1_RC8_9_LENGTH                                0x1
#define _RCSTA1_RC8_9_MASK                                  0x40
#define _RCSTA1_RC9_POSN                                    0x6
#define _RCSTA1_RC9_POSITION                                0x6
#define _RCSTA1_RC9_SIZE                                    0x1
#define _RCSTA1_RC9_LENGTH                                  0x1
#define _RCSTA1_RC9_MASK                                    0x40
#define _RCSTA1_RCD8_POSN                                   0x0
#define _RCSTA1_RCD8_POSITION                               0x0
#define _RCSTA1_RCD8_SIZE                                   0x1
#define _RCSTA1_RCD8_LENGTH                                 0x1
#define _RCSTA1_RCD8_MASK                                   0x1

// Register: TXSTA
extern volatile unsigned char           TXSTA               @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits @ 0xFAC;
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80
#define _TXSTA_BRGH1_POSN                                   0x2
#define _TXSTA_BRGH1_POSITION                               0x2
#define _TXSTA_BRGH1_SIZE                                   0x1
#define _TXSTA_BRGH1_LENGTH                                 0x1
#define _TXSTA_BRGH1_MASK                                   0x4
#define _TXSTA_CSRC1_POSN                                   0x7
#define _TXSTA_CSRC1_POSITION                               0x7
#define _TXSTA_CSRC1_SIZE                                   0x1
#define _TXSTA_CSRC1_LENGTH                                 0x1
#define _TXSTA_CSRC1_MASK                                   0x80
#define _TXSTA_SENDB1_POSN                                  0x3
#define _TXSTA_SENDB1_POSITION                              0x3
#define _TXSTA_SENDB1_SIZE                                  0x1
#define _TXSTA_SENDB1_LENGTH                                0x1
#define _TXSTA_SENDB1_MASK                                  0x8
#define _TXSTA_SYNC1_POSN                                   0x4
#define _TXSTA_SYNC1_POSITION                               0x4
#define _TXSTA_SYNC1_SIZE                                   0x1
#define _TXSTA_SYNC1_LENGTH                                 0x1
#define _TXSTA_SYNC1_MASK                                   0x10
#define _TXSTA_TRMT1_POSN                                   0x1
#define _TXSTA_TRMT1_POSITION                               0x1
#define _TXSTA_TRMT1_SIZE                                   0x1
#define _TXSTA_TRMT1_LENGTH                                 0x1
#define _TXSTA_TRMT1_MASK                                   0x2
#define _TXSTA_TX91_POSN                                    0x6
#define _TXSTA_TX91_POSITION                                0x6
#define _TXSTA_TX91_SIZE                                    0x1
#define _TXSTA_TX91_LENGTH                                  0x1
#define _TXSTA_TX91_MASK                                    0x40
#define _TXSTA_TX9D1_POSN                                   0x0
#define _TXSTA_TX9D1_POSITION                               0x0
#define _TXSTA_TX9D1_SIZE                                   0x1
#define _TXSTA_TX9D1_LENGTH                                 0x1
#define _TXSTA_TX9D1_MASK                                   0x1
#define _TXSTA_TXEN1_POSN                                   0x5
#define _TXSTA_TXEN1_POSITION                               0x5
#define _TXSTA_TXEN1_SIZE                                   0x1
#define _TXSTA_TXEN1_LENGTH                                 0x1
#define _TXSTA_TXEN1_MASK                                   0x20
#define _TXSTA_TX8_9_POSN                                   0x6
#define _TXSTA_TX8_9_POSITION                               0x6
#define _TXSTA_TX8_9_SIZE                                   0x1
#define _TXSTA_TX8_9_LENGTH                                 0x1
#define _TXSTA_TX8_9_MASK                                   0x40
#define _TXSTA_TXD8_POSN                                    0x0
#define _TXSTA_TXD8_POSITION                                0x0
#define _TXSTA_TXD8_SIZE                                    0x1
#define _TXSTA_TXD8_LENGTH                                  0x1
#define _TXSTA_TXD8_MASK                                    0x1
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX8_9                  :1;
    };
    struct {
        unsigned TXD8                   :1;
    };
} TXSTA1bits_t;
extern volatile TXSTA1bits_t TXSTA1bits @ 0xFAC;
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
#define _TXSTA1_BRGH1_POSN                                  0x2
#define _TXSTA1_BRGH1_POSITION                              0x2
#define _TXSTA1_BRGH1_SIZE                                  0x1
#define _TXSTA1_BRGH1_LENGTH                                0x1
#define _TXSTA1_BRGH1_MASK                                  0x4
#define _TXSTA1_CSRC1_POSN                                  0x7
#define _TXSTA1_CSRC1_POSITION                              0x7
#define _TXSTA1_CSRC1_SIZE                                  0x1
#define _TXSTA1_CSRC1_LENGTH                                0x1
#define _TXSTA1_CSRC1_MASK                                  0x80
#define _TXSTA1_SENDB1_POSN                                 0x3
#define _TXSTA1_SENDB1_POSITION                             0x3
#define _TXSTA1_SENDB1_SIZE                                 0x1
#define _TXSTA1_SENDB1_LENGTH                               0x1
#define _TXSTA1_SENDB1_MASK                                 0x8
#define _TXSTA1_SYNC1_POSN                                  0x4
#define _TXSTA1_SYNC1_POSITION                              0x4
#define _TXSTA1_SYNC1_SIZE                                  0x1
#define _TXSTA1_SYNC1_LENGTH                                0x1
#define _TXSTA1_SYNC1_MASK                                  0x10
#define _TXSTA1_TRMT1_POSN                                  0x1
#define _TXSTA1_TRMT1_POSITION                              0x1
#define _TXSTA1_TRMT1_SIZE                                  0x1
#define _TXSTA1_TRMT1_LENGTH                                0x1
#define _TXSTA1_TRMT1_MASK                                  0x2
#define _TXSTA1_TX91_POSN                                   0x6
#define _TXSTA1_TX91_POSITION                               0x6
#define _TXSTA1_TX91_SIZE                                   0x1
#define _TXSTA1_TX91_LENGTH                                 0x1
#define _TXSTA1_TX91_MASK                                   0x40
#define _TXSTA1_TX9D1_POSN                                  0x0
#define _TXSTA1_TX9D1_POSITION                              0x0
#define _TXSTA1_TX9D1_SIZE                                  0x1
#define _TXSTA1_TX9D1_LENGTH                                0x1
#define _TXSTA1_TX9D1_MASK                                  0x1
#define _TXSTA1_TXEN1_POSN                                  0x5
#define _TXSTA1_TXEN1_POSITION                              0x5
#define _TXSTA1_TXEN1_SIZE                                  0x1
#define _TXSTA1_TXEN1_LENGTH                                0x1
#define _TXSTA1_TXEN1_MASK                                  0x20
#define _TXSTA1_TX8_9_POSN                                  0x6
#define _TXSTA1_TX8_9_POSITION                              0x6
#define _TXSTA1_TX8_9_SIZE                                  0x1
#define _TXSTA1_TX8_9_LENGTH                                0x1
#define _TXSTA1_TX8_9_MASK                                  0x40
#define _TXSTA1_TXD8_POSN                                   0x0
#define _TXSTA1_TXD8_POSITION                               0x0
#define _TXSTA1_TXD8_SIZE                                   0x1
#define _TXSTA1_TXD8_LENGTH                                 0x1
#define _TXSTA1_TXD8_MASK                                   0x1

// Register: TXREG
extern volatile unsigned char           TXREG               @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG1              @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif

// Register: RCREG
extern volatile unsigned char           RCREG               @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG1              @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif

// Register: SPBRG
extern volatile unsigned char           SPBRG               @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG1              @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif

// Register: SPBRGH
extern volatile unsigned char           SPBRGH              @ 0xFB0;
#ifndef _LIB_BUILD
asm("SPBRGH equ 0FB0h");
#endif

// Register: T3CON
extern volatile unsigned char           T3CON               @ 0xFB1;
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned T3CCP2                 :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3NSYNC                :1;
    };
    struct {
        unsigned                        :7;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits_t;
extern volatile T3CONbits_t T3CONbits @ 0xFB1;
// bitfield macros
#define _T3CON_NOT_T3SYNC_POSN                              0x2
#define _T3CON_NOT_T3SYNC_POSITION                          0x2
#define _T3CON_NOT_T3SYNC_SIZE                              0x1
#define _T3CON_NOT_T3SYNC_LENGTH                            0x1
#define _T3CON_NOT_T3SYNC_MASK                              0x4
#define _T3CON_TMR3ON_POSN                                  0x0
#define _T3CON_TMR3ON_POSITION                              0x0
#define _T3CON_TMR3ON_SIZE                                  0x1
#define _T3CON_TMR3ON_LENGTH                                0x1
#define _T3CON_TMR3ON_MASK                                  0x1
#define _T3CON_TMR3CS_POSN                                  0x1
#define _T3CON_TMR3CS_POSITION                              0x1
#define _T3CON_TMR3CS_SIZE                                  0x1
#define _T3CON_TMR3CS_LENGTH                                0x1
#define _T3CON_TMR3CS_MASK                                  0x2
#define _T3CON_nT3SYNC_POSN                                 0x2
#define _T3CON_nT3SYNC_POSITION                             0x2
#define _T3CON_nT3SYNC_SIZE                                 0x1
#define _T3CON_nT3SYNC_LENGTH                               0x1
#define _T3CON_nT3SYNC_MASK                                 0x4
#define _T3CON_T3CCP1_POSN                                  0x3
#define _T3CON_T3CCP1_POSITION                              0x3
#define _T3CON_T3CCP1_SIZE                                  0x1
#define _T3CON_T3CCP1_LENGTH                                0x1
#define _T3CON_T3CCP1_MASK                                  0x8
#define _T3CON_T3CKPS_POSN                                  0x4
#define _T3CON_T3CKPS_POSITION                              0x4
#define _T3CON_T3CKPS_SIZE                                  0x2
#define _T3CON_T3CKPS_LENGTH                                0x2
#define _T3CON_T3CKPS_MASK                                  0x30
#define _T3CON_T3CCP2_POSN                                  0x6
#define _T3CON_T3CCP2_POSITION                              0x6
#define _T3CON_T3CCP2_SIZE                                  0x1
#define _T3CON_T3CCP2_LENGTH                                0x1
#define _T3CON_T3CCP2_MASK                                  0x40
#define _T3CON_RD16_POSN                                    0x7
#define _T3CON_RD16_POSITION                                0x7
#define _T3CON_RD16_SIZE                                    0x1
#define _T3CON_RD16_LENGTH                                  0x1
#define _T3CON_RD16_MASK                                    0x80
#define _T3CON_T3SYNC_POSN                                  0x2
#define _T3CON_T3SYNC_POSITION                              0x2
#define _T3CON_T3SYNC_SIZE                                  0x1
#define _T3CON_T3SYNC_LENGTH                                0x1
#define _T3CON_T3SYNC_MASK                                  0x4
#define _T3CON_T3CKPS0_POSN                                 0x4
#define _T3CON_T3CKPS0_POSITION                             0x4
#define _T3CON_T3CKPS0_SIZE                                 0x1
#define _T3CON_T3CKPS0_LENGTH                               0x1
#define _T3CON_T3CKPS0_MASK                                 0x10
#define _T3CON_T3CKPS1_POSN                                 0x5
#define _T3CON_T3CKPS1_POSITION                             0x5
#define _T3CON_T3CKPS1_SIZE                                 0x1
#define _T3CON_T3CKPS1_LENGTH                               0x1
#define _T3CON_T3CKPS1_MASK                                 0x20
#define _T3CON_T3NSYNC_POSN                                 0x2
#define _T3CON_T3NSYNC_POSITION                             0x2
#define _T3CON_T3NSYNC_SIZE                                 0x1
#define _T3CON_T3NSYNC_LENGTH                               0x1
#define _T3CON_T3NSYNC_MASK                                 0x4
#define _T3CON_RD163_POSN                                   0x7
#define _T3CON_RD163_POSITION                               0x7
#define _T3CON_RD163_SIZE                                   0x1
#define _T3CON_RD163_LENGTH                                 0x1
#define _T3CON_RD163_MASK                                   0x80
#define _T3CON_SOSCEN3_POSN                                 0x3
#define _T3CON_SOSCEN3_POSITION                             0x3
#define _T3CON_SOSCEN3_SIZE                                 0x1
#define _T3CON_SOSCEN3_LENGTH                               0x1
#define _T3CON_SOSCEN3_MASK                                 0x8
#define _T3CON_T3RD16_POSN                                  0x7
#define _T3CON_T3RD16_POSITION                              0x7
#define _T3CON_T3RD16_SIZE                                  0x1
#define _T3CON_T3RD16_LENGTH                                0x1
#define _T3CON_T3RD16_MASK                                  0x80

// Register: TMR3
extern volatile unsigned short          TMR3                @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif

// Register: TMR3L
extern volatile unsigned char           TMR3L               @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif

// Register: TMR3H
extern volatile unsigned char           TMR3H               @ 0xFB3;
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif

// Register: CMCON
extern volatile unsigned char           CMCON               @ 0xFB4;
#ifndef _LIB_BUILD
asm("CMCON equ 0FB4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CM                     :3;
        unsigned CIS                    :1;
        unsigned C1INV                  :1;
        unsigned C2INV                  :1;
        unsigned C1OUT                  :1;
        unsigned C2OUT                  :1;
    };
    struct {
        unsigned CM0                    :1;
        unsigned CM1                    :1;
        unsigned CM2                    :1;
    };
    struct {
        unsigned CMEN0                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned CMEN1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CMEN2                  :1;
    };
} CMCONbits_t;
extern volatile CMCONbits_t CMCONbits @ 0xFB4;
// bitfield macros
#define _CMCON_CM_POSN                                      0x0
#define _CMCON_CM_POSITION                                  0x0
#define _CMCON_CM_SIZE                                      0x3
#define _CMCON_CM_LENGTH                                    0x3
#define _CMCON_CM_MASK                                      0x7
#define _CMCON_CIS_POSN                                     0x3
#define _CMCON_CIS_POSITION                                 0x3
#define _CMCON_CIS_SIZE                                     0x1
#define _CMCON_CIS_LENGTH                                   0x1
#define _CMCON_CIS_MASK                                     0x8
#define _CMCON_C1INV_POSN                                   0x4
#define _CMCON_C1INV_POSITION                               0x4
#define _CMCON_C1INV_SIZE                                   0x1
#define _CMCON_C1INV_LENGTH                                 0x1
#define _CMCON_C1INV_MASK                                   0x10
#define _CMCON_C2INV_POSN                                   0x5
#define _CMCON_C2INV_POSITION                               0x5
#define _CMCON_C2INV_SIZE                                   0x1
#define _CMCON_C2INV_LENGTH                                 0x1
#define _CMCON_C2INV_MASK                                   0x20
#define _CMCON_C1OUT_POSN                                   0x6
#define _CMCON_C1OUT_POSITION                               0x6
#define _CMCON_C1OUT_SIZE                                   0x1
#define _CMCON_C1OUT_LENGTH                                 0x1
#define _CMCON_C1OUT_MASK                                   0x40
#define _CMCON_C2OUT_POSN                                   0x7
#define _CMCON_C2OUT_POSITION                               0x7
#define _CMCON_C2OUT_SIZE                                   0x1
#define _CMCON_C2OUT_LENGTH                                 0x1
#define _CMCON_C2OUT_MASK                                   0x80
#define _CMCON_CM0_POSN                                     0x0
#define _CMCON_CM0_POSITION                                 0x0
#define _CMCON_CM0_SIZE                                     0x1
#define _CMCON_CM0_LENGTH                                   0x1
#define _CMCON_CM0_MASK                                     0x1
#define _CMCON_CM1_POSN                                     0x1
#define _CMCON_CM1_POSITION                                 0x1
#define _CMCON_CM1_SIZE                                     0x1
#define _CMCON_CM1_LENGTH                                   0x1
#define _CMCON_CM1_MASK                                     0x2
#define _CMCON_CM2_POSN                                     0x2
#define _CMCON_CM2_POSITION                                 0x2
#define _CMCON_CM2_SIZE                                     0x1
#define _CMCON_CM2_LENGTH                                   0x1
#define _CMCON_CM2_MASK                                     0x4
#define _CMCON_CMEN0_POSN                                   0x0
#define _CMCON_CMEN0_POSITION                               0x0
#define _CMCON_CMEN0_SIZE                                   0x1
#define _CMCON_CMEN0_LENGTH                                 0x1
#define _CMCON_CMEN0_MASK                                   0x1
#define _CMCON_CMEN1_POSN                                   0x1
#define _CMCON_CMEN1_POSITION                               0x1
#define _CMCON_CMEN1_SIZE                                   0x1
#define _CMCON_CMEN1_LENGTH                                 0x1
#define _CMCON_CMEN1_MASK                                   0x2
#define _CMCON_CMEN2_POSN                                   0x2
#define _CMCON_CMEN2_POSITION                               0x2
#define _CMCON_CMEN2_SIZE                                   0x1
#define _CMCON_CMEN2_LENGTH                                 0x1
#define _CMCON_CMEN2_MASK                                   0x4

// Register: CVRCON
extern volatile unsigned char           CVRCON              @ 0xFB5;
#ifndef _LIB_BUILD
asm("CVRCON equ 0FB5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CVR                    :4;
        unsigned CVRSS                  :1;
        unsigned CVRR                   :1;
        unsigned CVROE                  :1;
        unsigned CVREN                  :1;
    };
    struct {
        unsigned CVR0                   :1;
        unsigned CVR1                   :1;
        unsigned CVR2                   :1;
        unsigned CVR3                   :1;
        unsigned CVREF                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CVROEN                 :1;
    };
} CVRCONbits_t;
extern volatile CVRCONbits_t CVRCONbits @ 0xFB5;
// bitfield macros
#define _CVRCON_CVR_POSN                                    0x0
#define _CVRCON_CVR_POSITION                                0x0
#define _CVRCON_CVR_SIZE                                    0x4
#define _CVRCON_CVR_LENGTH                                  0x4
#define _CVRCON_CVR_MASK                                    0xF
#define _CVRCON_CVRSS_POSN                                  0x4
#define _CVRCON_CVRSS_POSITION                              0x4
#define _CVRCON_CVRSS_SIZE                                  0x1
#define _CVRCON_CVRSS_LENGTH                                0x1
#define _CVRCON_CVRSS_MASK                                  0x10
#define _CVRCON_CVRR_POSN                                   0x5
#define _CVRCON_CVRR_POSITION                               0x5
#define _CVRCON_CVRR_SIZE                                   0x1
#define _CVRCON_CVRR_LENGTH                                 0x1
#define _CVRCON_CVRR_MASK                                   0x20
#define _CVRCON_CVROE_POSN                                  0x6
#define _CVRCON_CVROE_POSITION                              0x6
#define _CVRCON_CVROE_SIZE                                  0x1
#define _CVRCON_CVROE_LENGTH                                0x1
#define _CVRCON_CVROE_MASK                                  0x40
#define _CVRCON_CVREN_POSN                                  0x7
#define _CVRCON_CVREN_POSITION                              0x7
#define _CVRCON_CVREN_SIZE                                  0x1
#define _CVRCON_CVREN_LENGTH                                0x1
#define _CVRCON_CVREN_MASK                                  0x80
#define _CVRCON_CVR0_POSN                                   0x0
#define _CVRCON_CVR0_POSITION                               0x0
#define _CVRCON_CVR0_SIZE                                   0x1
#define _CVRCON_CVR0_LENGTH                                 0x1
#define _CVRCON_CVR0_MASK                                   0x1
#define _CVRCON_CVR1_POSN                                   0x1
#define _CVRCON_CVR1_POSITION                               0x1
#define _CVRCON_CVR1_SIZE                                   0x1
#define _CVRCON_CVR1_LENGTH                                 0x1
#define _CVRCON_CVR1_MASK                                   0x2
#define _CVRCON_CVR2_POSN                                   0x2
#define _CVRCON_CVR2_POSITION                               0x2
#define _CVRCON_CVR2_SIZE                                   0x1
#define _CVRCON_CVR2_LENGTH                                 0x1
#define _CVRCON_CVR2_MASK                                   0x4
#define _CVRCON_CVR3_POSN                                   0x3
#define _CVRCON_CVR3_POSITION                               0x3
#define _CVRCON_CVR3_SIZE                                   0x1
#define _CVRCON_CVR3_LENGTH                                 0x1
#define _CVRCON_CVR3_MASK                                   0x8
#define _CVRCON_CVREF_POSN                                  0x4
#define _CVRCON_CVREF_POSITION                              0x4
#define _CVRCON_CVREF_SIZE                                  0x1
#define _CVRCON_CVREF_LENGTH                                0x1
#define _CVRCON_CVREF_MASK                                  0x10
#define _CVRCON_CVROEN_POSN                                 0x6
#define _CVRCON_CVROEN_POSITION                             0x6
#define _CVRCON_CVROEN_SIZE                                 0x1
#define _CVRCON_CVROEN_LENGTH                               0x1
#define _CVRCON_CVROEN_MASK                                 0x40

// Register: ECCP1AS
extern volatile unsigned char           ECCP1AS             @ 0xFB6;
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
#endif
// aliases
extern volatile unsigned char           CCP1AS              @ 0xFB6;
#ifndef _LIB_BUILD
asm("CCP1AS equ 0FB6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} ECCP1ASbits_t;
extern volatile ECCP1ASbits_t ECCP1ASbits @ 0xFB6;
// bitfield macros
#define _ECCP1AS_PSSBD_POSN                                 0x0
#define _ECCP1AS_PSSBD_POSITION                             0x0
#define _ECCP1AS_PSSBD_SIZE                                 0x2
#define _ECCP1AS_PSSBD_LENGTH                               0x2
#define _ECCP1AS_PSSBD_MASK                                 0x3
#define _ECCP1AS_PSSAC_POSN                                 0x2
#define _ECCP1AS_PSSAC_POSITION                             0x2
#define _ECCP1AS_PSSAC_SIZE                                 0x2
#define _ECCP1AS_PSSAC_LENGTH                               0x2
#define _ECCP1AS_PSSAC_MASK                                 0xC
#define _ECCP1AS_ECCPAS_POSN                                0x4
#define _ECCP1AS_ECCPAS_POSITION                            0x4
#define _ECCP1AS_ECCPAS_SIZE                                0x3
#define _ECCP1AS_ECCPAS_LENGTH                              0x3
#define _ECCP1AS_ECCPAS_MASK                                0x70
#define _ECCP1AS_ECCPASE_POSN                               0x7
#define _ECCP1AS_ECCPASE_POSITION                           0x7
#define _ECCP1AS_ECCPASE_SIZE                               0x1
#define _ECCP1AS_ECCPASE_LENGTH                             0x1
#define _ECCP1AS_ECCPASE_MASK                               0x80
#define _ECCP1AS_PSSBD0_POSN                                0x0
#define _ECCP1AS_PSSBD0_POSITION                            0x0
#define _ECCP1AS_PSSBD0_SIZE                                0x1
#define _ECCP1AS_PSSBD0_LENGTH                              0x1
#define _ECCP1AS_PSSBD0_MASK                                0x1
#define _ECCP1AS_PSSBD1_POSN                                0x1
#define _ECCP1AS_PSSBD1_POSITION                            0x1
#define _ECCP1AS_PSSBD1_SIZE                                0x1
#define _ECCP1AS_PSSBD1_LENGTH                              0x1
#define _ECCP1AS_PSSBD1_MASK                                0x2
#define _ECCP1AS_PSSAC0_POSN                                0x2
#define _ECCP1AS_PSSAC0_POSITION                            0x2
#define _ECCP1AS_PSSAC0_SIZE                                0x1
#define _ECCP1AS_PSSAC0_LENGTH                              0x1
#define _ECCP1AS_PSSAC0_MASK                                0x4
#define _ECCP1AS_PSSAC1_POSN                                0x3
#define _ECCP1AS_PSSAC1_POSITION                            0x3
#define _ECCP1AS_PSSAC1_SIZE                                0x1
#define _ECCP1AS_PSSAC1_LENGTH                              0x1
#define _ECCP1AS_PSSAC1_MASK                                0x8
#define _ECCP1AS_ECCPAS0_POSN                               0x4
#define _ECCP1AS_ECCPAS0_POSITION                           0x4
#define _ECCP1AS_ECCPAS0_SIZE                               0x1
#define _ECCP1AS_ECCPAS0_LENGTH                             0x1
#define _ECCP1AS_ECCPAS0_MASK                               0x10
#define _ECCP1AS_ECCPAS1_POSN                               0x5
#define _ECCP1AS_ECCPAS1_POSITION                           0x5
#define _ECCP1AS_ECCPAS1_SIZE                               0x1
#define _ECCP1AS_ECCPAS1_LENGTH                             0x1
#define _ECCP1AS_ECCPAS1_MASK                               0x20
#define _ECCP1AS_ECCPAS2_POSN                               0x6
#define _ECCP1AS_ECCPAS2_POSITION                           0x6
#define _ECCP1AS_ECCPAS2_SIZE                               0x1
#define _ECCP1AS_ECCPAS2_LENGTH                             0x1
#define _ECCP1AS_ECCPAS2_MASK                               0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned PSSBD                  :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned PSSBD0                 :1;
        unsigned PSSBD1                 :1;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} CCP1ASbits_t;
extern volatile CCP1ASbits_t CCP1ASbits @ 0xFB6;
// bitfield macros
#define _CCP1AS_PSSBD_POSN                                  0x0
#define _CCP1AS_PSSBD_POSITION                              0x0
#define _CCP1AS_PSSBD_SIZE                                  0x2
#define _CCP1AS_PSSBD_LENGTH                                0x2
#define _CCP1AS_PSSBD_MASK                                  0x3
#define _CCP1AS_PSSAC_POSN                                  0x2
#define _CCP1AS_PSSAC_POSITION                              0x2
#define _CCP1AS_PSSAC_SIZE                                  0x2
#define _CCP1AS_PSSAC_LENGTH                                0x2
#define _CCP1AS_PSSAC_MASK                                  0xC
#define _CCP1AS_ECCPAS_POSN                                 0x4
#define _CCP1AS_ECCPAS_POSITION                             0x4
#define _CCP1AS_ECCPAS_SIZE                                 0x3
#define _CCP1AS_ECCPAS_LENGTH                               0x3
#define _CCP1AS_ECCPAS_MASK                                 0x70
#define _CCP1AS_ECCPASE_POSN                                0x7
#define _CCP1AS_ECCPASE_POSITION                            0x7
#define _CCP1AS_ECCPASE_SIZE                                0x1
#define _CCP1AS_ECCPASE_LENGTH                              0x1
#define _CCP1AS_ECCPASE_MASK                                0x80
#define _CCP1AS_PSSBD0_POSN                                 0x0
#define _CCP1AS_PSSBD0_POSITION                             0x0
#define _CCP1AS_PSSBD0_SIZE                                 0x1
#define _CCP1AS_PSSBD0_LENGTH                               0x1
#define _CCP1AS_PSSBD0_MASK                                 0x1
#define _CCP1AS_PSSBD1_POSN                                 0x1
#define _CCP1AS_PSSBD1_POSITION                             0x1
#define _CCP1AS_PSSBD1_SIZE                                 0x1
#define _CCP1AS_PSSBD1_LENGTH                               0x1
#define _CCP1AS_PSSBD1_MASK                                 0x2
#define _CCP1AS_PSSAC0_POSN                                 0x2
#define _CCP1AS_PSSAC0_POSITION                             0x2
#define _CCP1AS_PSSAC0_SIZE                                 0x1
#define _CCP1AS_PSSAC0_LENGTH                               0x1
#define _CCP1AS_PSSAC0_MASK                                 0x4
#define _CCP1AS_PSSAC1_POSN                                 0x3
#define _CCP1AS_PSSAC1_POSITION                             0x3
#define _CCP1AS_PSSAC1_SIZE                                 0x1
#define _CCP1AS_PSSAC1_LENGTH                               0x1
#define _CCP1AS_PSSAC1_MASK                                 0x8
#define _CCP1AS_ECCPAS0_POSN                                0x4
#define _CCP1AS_ECCPAS0_POSITION                            0x4
#define _CCP1AS_ECCPAS0_SIZE                                0x1
#define _CCP1AS_ECCPAS0_LENGTH                              0x1
#define _CCP1AS_ECCPAS0_MASK                                0x10
#define _CCP1AS_ECCPAS1_POSN                                0x5
#define _CCP1AS_ECCPAS1_POSITION                            0x5
#define _CCP1AS_ECCPAS1_SIZE                                0x1
#define _CCP1AS_ECCPAS1_LENGTH                              0x1
#define _CCP1AS_ECCPAS1_MASK                                0x20
#define _CCP1AS_ECCPAS2_POSN                                0x6
#define _CCP1AS_ECCPAS2_POSITION                            0x6
#define _CCP1AS_ECCPAS2_SIZE                                0x1
#define _CCP1AS_ECCPAS2_LENGTH                              0x1
#define _CCP1AS_ECCPAS2_MASK                                0x40

// Register: ECCP1DEL
extern volatile unsigned char           ECCP1DEL            @ 0xFB7;
#ifndef _LIB_BUILD
asm("ECCP1DEL equ 0FB7h");
#endif
// aliases
extern volatile unsigned char           CCP1DEL             @ 0xFB7;
#ifndef _LIB_BUILD
asm("CCP1DEL equ 0FB7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
} ECCP1DELbits_t;
extern volatile ECCP1DELbits_t ECCP1DELbits @ 0xFB7;
// bitfield macros
#define _ECCP1DEL_PDC_POSN                                  0x0
#define _ECCP1DEL_PDC_POSITION                              0x0
#define _ECCP1DEL_PDC_SIZE                                  0x7
#define _ECCP1DEL_PDC_LENGTH                                0x7
#define _ECCP1DEL_PDC_MASK                                  0x7F
#define _ECCP1DEL_PRSEN_POSN                                0x7
#define _ECCP1DEL_PRSEN_POSITION                            0x7
#define _ECCP1DEL_PRSEN_SIZE                                0x1
#define _ECCP1DEL_PRSEN_LENGTH                              0x1
#define _ECCP1DEL_PRSEN_MASK                                0x80
#define _ECCP1DEL_PDC0_POSN                                 0x0
#define _ECCP1DEL_PDC0_POSITION                             0x0
#define _ECCP1DEL_PDC0_SIZE                                 0x1
#define _ECCP1DEL_PDC0_LENGTH                               0x1
#define _ECCP1DEL_PDC0_MASK                                 0x1
#define _ECCP1DEL_PDC1_POSN                                 0x1
#define _ECCP1DEL_PDC1_POSITION                             0x1
#define _ECCP1DEL_PDC1_SIZE                                 0x1
#define _ECCP1DEL_PDC1_LENGTH                               0x1
#define _ECCP1DEL_PDC1_MASK                                 0x2
#define _ECCP1DEL_PDC2_POSN                                 0x2
#define _ECCP1DEL_PDC2_POSITION                             0x2
#define _ECCP1DEL_PDC2_SIZE                                 0x1
#define _ECCP1DEL_PDC2_LENGTH                               0x1
#define _ECCP1DEL_PDC2_MASK                                 0x4
#define _ECCP1DEL_PDC3_POSN                                 0x3
#define _ECCP1DEL_PDC3_POSITION                             0x3
#define _ECCP1DEL_PDC3_SIZE                                 0x1
#define _ECCP1DEL_PDC3_LENGTH                               0x1
#define _ECCP1DEL_PDC3_MASK                                 0x8
#define _ECCP1DEL_PDC4_POSN                                 0x4
#define _ECCP1DEL_PDC4_POSITION                             0x4
#define _ECCP1DEL_PDC4_SIZE                                 0x1
#define _ECCP1DEL_PDC4_LENGTH                               0x1
#define _ECCP1DEL_PDC4_MASK                                 0x10
#define _ECCP1DEL_PDC5_POSN                                 0x5
#define _ECCP1DEL_PDC5_POSITION                             0x5
#define _ECCP1DEL_PDC5_SIZE                                 0x1
#define _ECCP1DEL_PDC5_LENGTH                               0x1
#define _ECCP1DEL_PDC5_MASK                                 0x20
#define _ECCP1DEL_PDC6_POSN                                 0x6
#define _ECCP1DEL_PDC6_POSITION                             0x6
#define _ECCP1DEL_PDC6_SIZE                                 0x1
#define _ECCP1DEL_PDC6_LENGTH                               0x1
#define _ECCP1DEL_PDC6_MASK                                 0x40
// alias bitfield definitions
typedef union {
    struct {
        unsigned PDC                    :7;
        unsigned PRSEN                  :1;
    };
    struct {
        unsigned PDC0                   :1;
        unsigned PDC1                   :1;
        unsigned PDC2                   :1;
        unsigned PDC3                   :1;
        unsigned PDC4                   :1;
        unsigned PDC5                   :1;
        unsigned PDC6                   :1;
    };
} CCP1DELbits_t;
extern volatile CCP1DELbits_t CCP1DELbits @ 0xFB7;
// bitfield macros
#define _CCP1DEL_PDC_POSN                                   0x0
#define _CCP1DEL_PDC_POSITION                               0x0
#define _CCP1DEL_PDC_SIZE                                   0x7
#define _CCP1DEL_PDC_LENGTH                                 0x7
#define _CCP1DEL_PDC_MASK                                   0x7F
#define _CCP1DEL_PRSEN_POSN                                 0x7
#define _CCP1DEL_PRSEN_POSITION                             0x7
#define _CCP1DEL_PRSEN_SIZE                                 0x1
#define _CCP1DEL_PRSEN_LENGTH                               0x1
#define _CCP1DEL_PRSEN_MASK                                 0x80
#define _CCP1DEL_PDC0_POSN                                  0x0
#define _CCP1DEL_PDC0_POSITION                              0x0
#define _CCP1DEL_PDC0_SIZE                                  0x1
#define _CCP1DEL_PDC0_LENGTH                                0x1
#define _CCP1DEL_PDC0_MASK                                  0x1
#define _CCP1DEL_PDC1_POSN                                  0x1
#define _CCP1DEL_PDC1_POSITION                              0x1
#define _CCP1DEL_PDC1_SIZE                                  0x1
#define _CCP1DEL_PDC1_LENGTH                                0x1
#define _CCP1DEL_PDC1_MASK                                  0x2
#define _CCP1DEL_PDC2_POSN                                  0x2
#define _CCP1DEL_PDC2_POSITION                              0x2
#define _CCP1DEL_PDC2_SIZE                                  0x1
#define _CCP1DEL_PDC2_LENGTH                                0x1
#define _CCP1DEL_PDC2_MASK                                  0x4
#define _CCP1DEL_PDC3_POSN                                  0x3
#define _CCP1DEL_PDC3_POSITION                              0x3
#define _CCP1DEL_PDC3_SIZE                                  0x1
#define _CCP1DEL_PDC3_LENGTH                                0x1
#define _CCP1DEL_PDC3_MASK                                  0x8
#define _CCP1DEL_PDC4_POSN                                  0x4
#define _CCP1DEL_PDC4_POSITION                              0x4
#define _CCP1DEL_PDC4_SIZE                                  0x1
#define _CCP1DEL_PDC4_LENGTH                                0x1
#define _CCP1DEL_PDC4_MASK                                  0x10
#define _CCP1DEL_PDC5_POSN                                  0x5
#define _CCP1DEL_PDC5_POSITION                              0x5
#define _CCP1DEL_PDC5_SIZE                                  0x1
#define _CCP1DEL_PDC5_LENGTH                                0x1
#define _CCP1DEL_PDC5_MASK                                  0x20
#define _CCP1DEL_PDC6_POSN                                  0x6
#define _CCP1DEL_PDC6_POSITION                              0x6
#define _CCP1DEL_PDC6_SIZE                                  0x1
#define _CCP1DEL_PDC6_LENGTH                                0x1
#define _CCP1DEL_PDC6_MASK                                  0x40

// Register: BAUDCON
extern volatile unsigned char           BAUDCON             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FB8h");
#endif
// aliases
extern volatile unsigned char           BAUDCTL             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0FB8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCONbits_t;
extern volatile BAUDCONbits_t BAUDCONbits @ 0xFB8;
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_TXCKP_POSN                                 0x4
#define _BAUDCON_TXCKP_POSITION                             0x4
#define _BAUDCON_TXCKP_SIZE                                 0x1
#define _BAUDCON_TXCKP_LENGTH                               0x1
#define _BAUDCON_TXCKP_MASK                                 0x10
#define _BAUDCON_RXDTP_POSN                                 0x5
#define _BAUDCON_RXDTP_POSITION                             0x5
#define _BAUDCON_RXDTP_SIZE                                 0x1
#define _BAUDCON_RXDTP_LENGTH                               0x1
#define _BAUDCON_RXDTP_MASK                                 0x20
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCMT_POSN                                  0x6
#define _BAUDCON_RCMT_POSITION                              0x6
#define _BAUDCON_RCMT_SIZE                                  0x1
#define _BAUDCON_RCMT_LENGTH                                0x1
#define _BAUDCON_RCMT_MASK                                  0x40
#define _BAUDCON_RXCKP_POSN                                 0x5
#define _BAUDCON_RXCKP_POSITION                             0x5
#define _BAUDCON_RXCKP_SIZE                                 0x1
#define _BAUDCON_RXCKP_LENGTH                               0x1
#define _BAUDCON_RXCKP_MASK                                 0x20
#define _BAUDCON_W4E_POSN                                   0x1
#define _BAUDCON_W4E_POSITION                               0x1
#define _BAUDCON_W4E_SIZE                                   0x1
#define _BAUDCON_W4E_LENGTH                                 0x1
#define _BAUDCON_W4E_MASK                                   0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits @ 0xFB8;
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_TXCKP_POSN                                 0x4
#define _BAUDCTL_TXCKP_POSITION                             0x4
#define _BAUDCTL_TXCKP_SIZE                                 0x1
#define _BAUDCTL_TXCKP_LENGTH                               0x1
#define _BAUDCTL_TXCKP_MASK                                 0x10
#define _BAUDCTL_RXDTP_POSN                                 0x5
#define _BAUDCTL_RXDTP_POSITION                             0x5
#define _BAUDCTL_RXDTP_SIZE                                 0x1
#define _BAUDCTL_RXDTP_LENGTH                               0x1
#define _BAUDCTL_RXDTP_MASK                                 0x20
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCMT_POSN                                  0x6
#define _BAUDCTL_RCMT_POSITION                              0x6
#define _BAUDCTL_RCMT_SIZE                                  0x1
#define _BAUDCTL_RCMT_LENGTH                                0x1
#define _BAUDCTL_RCMT_MASK                                  0x40
#define _BAUDCTL_RXCKP_POSN                                 0x5
#define _BAUDCTL_RXCKP_POSITION                             0x5
#define _BAUDCTL_RXCKP_SIZE                                 0x1
#define _BAUDCTL_RXCKP_LENGTH                               0x1
#define _BAUDCTL_RXCKP_MASK                                 0x20
#define _BAUDCTL_W4E_POSN                                   0x1
#define _BAUDCTL_W4E_POSITION                               0x1
#define _BAUDCTL_W4E_SIZE                                   0x1
#define _BAUDCTL_W4E_LENGTH                                 0x1
#define _BAUDCTL_W4E_MASK                                   0x2

// Register: CCP2CON
extern volatile unsigned char           CCP2CON             @ 0xFBA;
#ifndef _LIB_BUILD
asm("CCP2CON equ 0FBAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits @ 0xFBA;
// bitfield macros
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
#define _CCP2CON_DC2B_POSN                                  0x4
#define _CCP2CON_DC2B_POSITION                              0x4
#define _CCP2CON_DC2B_SIZE                                  0x2
#define _CCP2CON_DC2B_LENGTH                                0x2
#define _CCP2CON_DC2B_MASK                                  0x30
#define _CCP2CON_CCP2M0_POSN                                0x0
#define _CCP2CON_CCP2M0_POSITION                            0x0
#define _CCP2CON_CCP2M0_SIZE                                0x1
#define _CCP2CON_CCP2M0_LENGTH                              0x1
#define _CCP2CON_CCP2M0_MASK                                0x1
#define _CCP2CON_CCP2M1_POSN                                0x1
#define _CCP2CON_CCP2M1_POSITION                            0x1
#define _CCP2CON_CCP2M1_SIZE                                0x1
#define _CCP2CON_CCP2M1_LENGTH                              0x1
#define _CCP2CON_CCP2M1_MASK                                0x2
#define _CCP2CON_CCP2M2_POSN                                0x2
#define _CCP2CON_CCP2M2_POSITION                            0x2
#define _CCP2CON_CCP2M2_SIZE                                0x1
#define _CCP2CON_CCP2M2_LENGTH                              0x1
#define _CCP2CON_CCP2M2_MASK                                0x4
#define _CCP2CON_CCP2M3_POSN                                0x3
#define _CCP2CON_CCP2M3_POSITION                            0x3
#define _CCP2CON_CCP2M3_SIZE                                0x1
#define _CCP2CON_CCP2M3_LENGTH                              0x1
#define _CCP2CON_CCP2M3_MASK                                0x8
#define _CCP2CON_DC2B0_POSN                                 0x4
#define _CCP2CON_DC2B0_POSITION                             0x4
#define _CCP2CON_DC2B0_SIZE                                 0x1
#define _CCP2CON_DC2B0_LENGTH                               0x1
#define _CCP2CON_DC2B0_MASK                                 0x10
#define _CCP2CON_DC2B1_POSN                                 0x5
#define _CCP2CON_DC2B1_POSITION                             0x5
#define _CCP2CON_DC2B1_SIZE                                 0x1
#define _CCP2CON_DC2B1_LENGTH                               0x1
#define _CCP2CON_DC2B1_MASK                                 0x20

// Register: CCPR2
extern volatile unsigned short          CCPR2               @ 0xFBB;
#ifndef _LIB_BUILD
asm("CCPR2 equ 0FBBh");
#endif

// Register: CCPR2L
extern volatile unsigned char           CCPR2L              @ 0xFBB;
#ifndef _LIB_BUILD
asm("CCPR2L equ 0FBBh");
#endif

// Register: CCPR2H
extern volatile unsigned char           CCPR2H              @ 0xFBC;
#ifndef _LIB_BUILD
asm("CCPR2H equ 0FBCh");
#endif

// Register: CCP1CON
extern volatile unsigned char           CCP1CON             @ 0xFBD;
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
#endif
// aliases
extern volatile unsigned char           ECCP1CON            @ 0xFBD;
#ifndef _LIB_BUILD
asm("ECCP1CON equ 0FBDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits @ 0xFBD;
// bitfield macros
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20
#define _CCP1CON_P1M0_POSN                                  0x6
#define _CCP1CON_P1M0_POSITION                              0x6
#define _CCP1CON_P1M0_SIZE                                  0x1
#define _CCP1CON_P1M0_LENGTH                                0x1
#define _CCP1CON_P1M0_MASK                                  0x40
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
} ECCP1CONbits_t;
extern volatile ECCP1CONbits_t ECCP1CONbits @ 0xFBD;
// bitfield macros
#define _ECCP1CON_CCP1M_POSN                                0x0
#define _ECCP1CON_CCP1M_POSITION                            0x0
#define _ECCP1CON_CCP1M_SIZE                                0x4
#define _ECCP1CON_CCP1M_LENGTH                              0x4
#define _ECCP1CON_CCP1M_MASK                                0xF
#define _ECCP1CON_DC1B_POSN                                 0x4
#define _ECCP1CON_DC1B_POSITION                             0x4
#define _ECCP1CON_DC1B_SIZE                                 0x2
#define _ECCP1CON_DC1B_LENGTH                               0x2
#define _ECCP1CON_DC1B_MASK                                 0x30
#define _ECCP1CON_P1M_POSN                                  0x6
#define _ECCP1CON_P1M_POSITION                              0x6
#define _ECCP1CON_P1M_SIZE                                  0x2
#define _ECCP1CON_P1M_LENGTH                                0x2
#define _ECCP1CON_P1M_MASK                                  0xC0
#define _ECCP1CON_CCP1M0_POSN                               0x0
#define _ECCP1CON_CCP1M0_POSITION                           0x0
#define _ECCP1CON_CCP1M0_SIZE                               0x1
#define _ECCP1CON_CCP1M0_LENGTH                             0x1
#define _ECCP1CON_CCP1M0_MASK                               0x1
#define _ECCP1CON_CCP1M1_POSN                               0x1
#define _ECCP1CON_CCP1M1_POSITION                           0x1
#define _ECCP1CON_CCP1M1_SIZE                               0x1
#define _ECCP1CON_CCP1M1_LENGTH                             0x1
#define _ECCP1CON_CCP1M1_MASK                               0x2
#define _ECCP1CON_CCP1M2_POSN                               0x2
#define _ECCP1CON_CCP1M2_POSITION                           0x2
#define _ECCP1CON_CCP1M2_SIZE                               0x1
#define _ECCP1CON_CCP1M2_LENGTH                             0x1
#define _ECCP1CON_CCP1M2_MASK                               0x4
#define _ECCP1CON_CCP1M3_POSN                               0x3
#define _ECCP1CON_CCP1M3_POSITION                           0x3
#define _ECCP1CON_CCP1M3_SIZE                               0x1
#define _ECCP1CON_CCP1M3_LENGTH                             0x1
#define _ECCP1CON_CCP1M3_MASK                               0x8
#define _ECCP1CON_DC1B0_POSN                                0x4
#define _ECCP1CON_DC1B0_POSITION                            0x4
#define _ECCP1CON_DC1B0_SIZE                                0x1
#define _ECCP1CON_DC1B0_LENGTH                              0x1
#define _ECCP1CON_DC1B0_MASK                                0x10
#define _ECCP1CON_DC1B1_POSN                                0x5
#define _ECCP1CON_DC1B1_POSITION                            0x5
#define _ECCP1CON_DC1B1_SIZE                                0x1
#define _ECCP1CON_DC1B1_LENGTH                              0x1
#define _ECCP1CON_DC1B1_MASK                                0x20
#define _ECCP1CON_P1M0_POSN                                 0x6
#define _ECCP1CON_P1M0_POSITION                             0x6
#define _ECCP1CON_P1M0_SIZE                                 0x1
#define _ECCP1CON_P1M0_LENGTH                               0x1
#define _ECCP1CON_P1M0_MASK                                 0x40
#define _ECCP1CON_P1M1_POSN                                 0x7
#define _ECCP1CON_P1M1_POSITION                             0x7
#define _ECCP1CON_P1M1_SIZE                                 0x1
#define _ECCP1CON_P1M1_LENGTH                               0x1
#define _ECCP1CON_P1M1_MASK                                 0x80

// Register: CCPR1
extern volatile unsigned short          CCPR1               @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBEh");
#endif

// Register: CCPR1L
extern volatile unsigned char           CCPR1L              @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBEh");
#endif

// Register: CCPR1H
extern volatile unsigned char           CCPR1H              @ 0xFBF;
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif

// Register: ADCON2
extern volatile unsigned char           ADCON2              @ 0xFC0;
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
    };
} ADCON2bits_t;
extern volatile ADCON2bits_t ADCON2bits @ 0xFC0;
// bitfield macros
#define _ADCON2_ADCS_POSN                                   0x0
#define _ADCON2_ADCS_POSITION                               0x0
#define _ADCON2_ADCS_SIZE                                   0x3
#define _ADCON2_ADCS_LENGTH                                 0x3
#define _ADCON2_ADCS_MASK                                   0x7
#define _ADCON2_ACQT_POSN                                   0x3
#define _ADCON2_ACQT_POSITION                               0x3
#define _ADCON2_ACQT_SIZE                                   0x3
#define _ADCON2_ACQT_LENGTH                                 0x3
#define _ADCON2_ACQT_MASK                                   0x38
#define _ADCON2_ADFM_POSN                                   0x7
#define _ADCON2_ADFM_POSITION                               0x7
#define _ADCON2_ADFM_SIZE                                   0x1
#define _ADCON2_ADFM_LENGTH                                 0x1
#define _ADCON2_ADFM_MASK                                   0x80
#define _ADCON2_ADCS0_POSN                                  0x0
#define _ADCON2_ADCS0_POSITION                              0x0
#define _ADCON2_ADCS0_SIZE                                  0x1
#define _ADCON2_ADCS0_LENGTH                                0x1
#define _ADCON2_ADCS0_MASK                                  0x1
#define _ADCON2_ADCS1_POSN                                  0x1
#define _ADCON2_ADCS1_POSITION                              0x1
#define _ADCON2_ADCS1_SIZE                                  0x1
#define _ADCON2_ADCS1_LENGTH                                0x1
#define _ADCON2_ADCS1_MASK                                  0x2
#define _ADCON2_ADCS2_POSN                                  0x2
#define _ADCON2_ADCS2_POSITION                              0x2
#define _ADCON2_ADCS2_SIZE                                  0x1
#define _ADCON2_ADCS2_LENGTH                                0x1
#define _ADCON2_ADCS2_MASK                                  0x4
#define _ADCON2_ACQT0_POSN                                  0x3
#define _ADCON2_ACQT0_POSITION                              0x3
#define _ADCON2_ACQT0_SIZE                                  0x1
#define _ADCON2_ACQT0_LENGTH                                0x1
#define _ADCON2_ACQT0_MASK                                  0x8
#define _ADCON2_ACQT1_POSN                                  0x4
#define _ADCON2_ACQT1_POSITION                              0x4
#define _ADCON2_ACQT1_SIZE                                  0x1
#define _ADCON2_ACQT1_LENGTH                                0x1
#define _ADCON2_ACQT1_MASK                                  0x10
#define _ADCON2_ACQT2_POSN                                  0x5
#define _ADCON2_ACQT2_POSITION                              0x5
#define _ADCON2_ACQT2_SIZE                                  0x1
#define _ADCON2_ACQT2_LENGTH                                0x1
#define _ADCON2_ACQT2_MASK                                  0x20

// Register: ADCON1
extern volatile unsigned char           ADCON1              @ 0xFC1;
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned VCFG01                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned VCFG11                 :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits @ 0xFC1;
// bitfield macros
#define _ADCON1_PCFG_POSN                                   0x0
#define _ADCON1_PCFG_POSITION                               0x0
#define _ADCON1_PCFG_SIZE                                   0x4
#define _ADCON1_PCFG_LENGTH                                 0x4
#define _ADCON1_PCFG_MASK                                   0xF
#define _ADCON1_VCFG_POSN                                   0x4
#define _ADCON1_VCFG_POSITION                               0x4
#define _ADCON1_VCFG_SIZE                                   0x2
#define _ADCON1_VCFG_LENGTH                                 0x2
#define _ADCON1_VCFG_MASK                                   0x30
#define _ADCON1_PCFG0_POSN                                  0x0
#define _ADCON1_PCFG0_POSITION                              0x0
#define _ADCON1_PCFG0_SIZE                                  0x1
#define _ADCON1_PCFG0_LENGTH                                0x1
#define _ADCON1_PCFG0_MASK                                  0x1
#define _ADCON1_PCFG1_POSN                                  0x1
#define _ADCON1_PCFG1_POSITION                              0x1
#define _ADCON1_PCFG1_SIZE                                  0x1
#define _ADCON1_PCFG1_LENGTH                                0x1
#define _ADCON1_PCFG1_MASK                                  0x2
#define _ADCON1_PCFG2_POSN                                  0x2
#define _ADCON1_PCFG2_POSITION                              0x2
#define _ADCON1_PCFG2_SIZE                                  0x1
#define _ADCON1_PCFG2_LENGTH                                0x1
#define _ADCON1_PCFG2_MASK                                  0x4
#define _ADCON1_PCFG3_POSN                                  0x3
#define _ADCON1_PCFG3_POSITION                              0x3
#define _ADCON1_PCFG3_SIZE                                  0x1
#define _ADCON1_PCFG3_LENGTH                                0x1
#define _ADCON1_PCFG3_MASK                                  0x8
#define _ADCON1_VCFG0_POSN                                  0x4
#define _ADCON1_VCFG0_POSITION                              0x4
#define _ADCON1_VCFG0_SIZE                                  0x1
#define _ADCON1_VCFG0_LENGTH                                0x1
#define _ADCON1_VCFG0_MASK                                  0x10
#define _ADCON1_VCFG1_POSN                                  0x5
#define _ADCON1_VCFG1_POSITION                              0x5
#define _ADCON1_VCFG1_SIZE                                  0x1
#define _ADCON1_VCFG1_LENGTH                                0x1
#define _ADCON1_VCFG1_MASK                                  0x20
#define _ADCON1_CHSN3_POSN                                  0x3
#define _ADCON1_CHSN3_POSITION                              0x3
#define _ADCON1_CHSN3_SIZE                                  0x1
#define _ADCON1_CHSN3_LENGTH                                0x1
#define _ADCON1_CHSN3_MASK                                  0x8
#define _ADCON1_VCFG01_POSN                                 0x4
#define _ADCON1_VCFG01_POSITION                             0x4
#define _ADCON1_VCFG01_SIZE                                 0x1
#define _ADCON1_VCFG01_LENGTH                               0x1
#define _ADCON1_VCFG01_MASK                                 0x10
#define _ADCON1_VCFG11_POSN                                 0x5
#define _ADCON1_VCFG11_POSITION                             0x5
#define _ADCON1_VCFG11_SIZE                                 0x1
#define _ADCON1_VCFG11_LENGTH                               0x1
#define _ADCON1_VCFG11_MASK                                 0x20

// Register: ADCON0
extern volatile unsigned char           ADCON0              @ 0xFC2;
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
    };
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits @ 0xFC2;
// bitfield macros
#define _ADCON0_GO_NOT_DONE_POSN                            0x1
#define _ADCON0_GO_NOT_DONE_POSITION                        0x1
#define _ADCON0_GO_NOT_DONE_SIZE                            0x1
#define _ADCON0_GO_NOT_DONE_LENGTH                          0x1
#define _ADCON0_GO_NOT_DONE_MASK                            0x2
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x4
#define _ADCON0_CHS_LENGTH                                  0x4
#define _ADCON0_CHS_MASK                                    0x3C
#define _ADCON0_GO_DONE_POSN                                0x1
#define _ADCON0_GO_DONE_POSITION                            0x1
#define _ADCON0_GO_DONE_SIZE                                0x1
#define _ADCON0_GO_DONE_LENGTH                              0x1
#define _ADCON0_GO_DONE_MASK                                0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_NOT_DONE_POSN                               0x1
#define _ADCON0_NOT_DONE_POSITION                           0x1
#define _ADCON0_NOT_DONE_SIZE                               0x1
#define _ADCON0_NOT_DONE_LENGTH                             0x1
#define _ADCON0_NOT_DONE_MASK                               0x2
#define _ADCON0_nDONE_POSN                                  0x1
#define _ADCON0_nDONE_POSITION                              0x1
#define _ADCON0_nDONE_SIZE                                  0x1
#define _ADCON0_nDONE_LENGTH                                0x1
#define _ADCON0_nDONE_MASK                                  0x2
#define _ADCON0_GODONE_POSN                                 0x1
#define _ADCON0_GODONE_POSITION                             0x1
#define _ADCON0_GODONE_SIZE                                 0x1
#define _ADCON0_GODONE_LENGTH                               0x1
#define _ADCON0_GODONE_MASK                                 0x2

// Register: ADRES
extern volatile unsigned short          ADRES               @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif

// Register: ADRESL
extern volatile unsigned char           ADRESL              @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif

// Register: ADRESH
extern volatile unsigned char           ADRESH              @ 0xFC4;
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif

// Register: SSPCON2
extern volatile unsigned char           SSPCON2             @ 0xFC5;
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits @ 0xFC5;
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80

// Register: SSPCON1
extern volatile unsigned char           SSPCON1             @ 0xFC6;
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
} SSPCON1bits_t;
extern volatile SSPCON1bits_t SSPCON1bits @ 0xFC6;
// bitfield macros
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8

// Register: SSPSTAT
extern volatile unsigned char           SSPSTAT             @ 0xFC7;
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned I2C_READ               :1;
        unsigned I2C_START              :1;
        unsigned I2C_STOP               :1;
        unsigned I2C_DAT                :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :2;
        unsigned READ_WRITE             :1;
        unsigned                        :2;
        unsigned DATA_ADDRESS           :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :5;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
    };
    struct {
        unsigned                        :3;
        unsigned START                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned STOP                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits @ 0xFC7;
// bitfield macros
#define _SSPSTAT_R_NOT_W_POSN                               0x2
#define _SSPSTAT_R_NOT_W_POSITION                           0x2
#define _SSPSTAT_R_NOT_W_SIZE                               0x1
#define _SSPSTAT_R_NOT_W_LENGTH                             0x1
#define _SSPSTAT_R_NOT_W_MASK                               0x4
#define _SSPSTAT_D_NOT_A_POSN                               0x5
#define _SSPSTAT_D_NOT_A_POSITION                           0x5
#define _SSPSTAT_D_NOT_A_SIZE                               0x1
#define _SSPSTAT_D_NOT_A_LENGTH                             0x1
#define _SSPSTAT_D_NOT_A_MASK                               0x20
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80
#define _SSPSTAT_R_W_POSN                                   0x2
#define _SSPSTAT_R_W_POSITION                               0x2
#define _SSPSTAT_R_W_SIZE                                   0x1
#define _SSPSTAT_R_W_LENGTH                                 0x1
#define _SSPSTAT_R_W_MASK                                   0x4
#define _SSPSTAT_D_A_POSN                                   0x5
#define _SSPSTAT_D_A_POSITION                               0x5
#define _SSPSTAT_D_A_SIZE                                   0x1
#define _SSPSTAT_D_A_LENGTH                                 0x1
#define _SSPSTAT_D_A_MASK                                   0x20
#define _SSPSTAT_I2C_READ_POSN                              0x2
#define _SSPSTAT_I2C_READ_POSITION                          0x2
#define _SSPSTAT_I2C_READ_SIZE                              0x1
#define _SSPSTAT_I2C_READ_LENGTH                            0x1
#define _SSPSTAT_I2C_READ_MASK                              0x4
#define _SSPSTAT_I2C_START_POSN                             0x3
#define _SSPSTAT_I2C_START_POSITION                         0x3
#define _SSPSTAT_I2C_START_SIZE                             0x1
#define _SSPSTAT_I2C_START_LENGTH                           0x1
#define _SSPSTAT_I2C_START_MASK                             0x8
#define _SSPSTAT_I2C_STOP_POSN                              0x4
#define _SSPSTAT_I2C_STOP_POSITION                          0x4
#define _SSPSTAT_I2C_STOP_SIZE                              0x1
#define _SSPSTAT_I2C_STOP_LENGTH                            0x1
#define _SSPSTAT_I2C_STOP_MASK                              0x10
#define _SSPSTAT_I2C_DAT_POSN                               0x5
#define _SSPSTAT_I2C_DAT_POSITION                           0x5
#define _SSPSTAT_I2C_DAT_SIZE                               0x1
#define _SSPSTAT_I2C_DAT_LENGTH                             0x1
#define _SSPSTAT_I2C_DAT_MASK                               0x20
#define _SSPSTAT_nW_POSN                                    0x2
#define _SSPSTAT_nW_POSITION                                0x2
#define _SSPSTAT_nW_SIZE                                    0x1
#define _SSPSTAT_nW_LENGTH                                  0x1
#define _SSPSTAT_nW_MASK                                    0x4
#define _SSPSTAT_nA_POSN                                    0x5
#define _SSPSTAT_nA_POSITION                                0x5
#define _SSPSTAT_nA_SIZE                                    0x1
#define _SSPSTAT_nA_LENGTH                                  0x1
#define _SSPSTAT_nA_MASK                                    0x20
#define _SSPSTAT_NOT_WRITE_POSN                             0x2
#define _SSPSTAT_NOT_WRITE_POSITION                         0x2
#define _SSPSTAT_NOT_WRITE_SIZE                             0x1
#define _SSPSTAT_NOT_WRITE_LENGTH                           0x1
#define _SSPSTAT_NOT_WRITE_MASK                             0x4
#define _SSPSTAT_NOT_ADDRESS_POSN                           0x5
#define _SSPSTAT_NOT_ADDRESS_POSITION                       0x5
#define _SSPSTAT_NOT_ADDRESS_SIZE                           0x1
#define _SSPSTAT_NOT_ADDRESS_LENGTH                         0x1
#define _SSPSTAT_NOT_ADDRESS_MASK                           0x20
#define _SSPSTAT_nWRITE_POSN                                0x2
#define _SSPSTAT_nWRITE_POSITION                            0x2
#define _SSPSTAT_nWRITE_SIZE                                0x1
#define _SSPSTAT_nWRITE_LENGTH                              0x1
#define _SSPSTAT_nWRITE_MASK                                0x4
#define _SSPSTAT_nADDRESS_POSN                              0x5
#define _SSPSTAT_nADDRESS_POSITION                          0x5
#define _SSPSTAT_nADDRESS_SIZE                              0x1
#define _SSPSTAT_nADDRESS_LENGTH                            0x1
#define _SSPSTAT_nADDRESS_MASK                              0x20
#define _SSPSTAT_READ_WRITE_POSN                            0x2
#define _SSPSTAT_READ_WRITE_POSITION                        0x2
#define _SSPSTAT_READ_WRITE_SIZE                            0x1
#define _SSPSTAT_READ_WRITE_LENGTH                          0x1
#define _SSPSTAT_READ_WRITE_MASK                            0x4
#define _SSPSTAT_DATA_ADDRESS_POSN                          0x5
#define _SSPSTAT_DATA_ADDRESS_POSITION                      0x5
#define _SSPSTAT_DATA_ADDRESS_SIZE                          0x1
#define _SSPSTAT_DATA_ADDRESS_LENGTH                        0x1
#define _SSPSTAT_DATA_ADDRESS_MASK                          0x20
#define _SSPSTAT_R_POSN                                     0x2
#define _SSPSTAT_R_POSITION                                 0x2
#define _SSPSTAT_R_SIZE                                     0x1
#define _SSPSTAT_R_LENGTH                                   0x1
#define _SSPSTAT_R_MASK                                     0x4
#define _SSPSTAT_D_POSN                                     0x5
#define _SSPSTAT_D_POSITION                                 0x5
#define _SSPSTAT_D_SIZE                                     0x1
#define _SSPSTAT_D_LENGTH                                   0x1
#define _SSPSTAT_D_MASK                                     0x20
#define _SSPSTAT_DA_POSN                                    0x5
#define _SSPSTAT_DA_POSITION                                0x5
#define _SSPSTAT_DA_SIZE                                    0x1
#define _SSPSTAT_DA_LENGTH                                  0x1
#define _SSPSTAT_DA_MASK                                    0x20
#define _SSPSTAT_RW_POSN                                    0x2
#define _SSPSTAT_RW_POSITION                                0x2
#define _SSPSTAT_RW_SIZE                                    0x1
#define _SSPSTAT_RW_LENGTH                                  0x1
#define _SSPSTAT_RW_MASK                                    0x4
#define _SSPSTAT_START_POSN                                 0x3
#define _SSPSTAT_START_POSITION                             0x3
#define _SSPSTAT_START_SIZE                                 0x1
#define _SSPSTAT_START_LENGTH                               0x1
#define _SSPSTAT_START_MASK                                 0x8
#define _SSPSTAT_STOP_POSN                                  0x4
#define _SSPSTAT_STOP_POSITION                              0x4
#define _SSPSTAT_STOP_SIZE                                  0x1
#define _SSPSTAT_STOP_LENGTH                                0x1
#define _SSPSTAT_STOP_MASK                                  0x10
#define _SSPSTAT_NOT_W_POSN                                 0x2
#define _SSPSTAT_NOT_W_POSITION                             0x2
#define _SSPSTAT_NOT_W_SIZE                                 0x1
#define _SSPSTAT_NOT_W_LENGTH                               0x1
#define _SSPSTAT_NOT_W_MASK                                 0x4
#define _SSPSTAT_NOT_A_POSN                                 0x5
#define _SSPSTAT_NOT_A_POSITION                             0x5
#define _SSPSTAT_NOT_A_SIZE                                 0x1
#define _SSPSTAT_NOT_A_LENGTH                               0x1
#define _SSPSTAT_NOT_A_MASK                                 0x20

// Register: SSPADD
extern volatile unsigned char           SSPADD              @ 0xFC8;
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif

// Register: SSPBUF
extern volatile unsigned char           SSPBUF              @ 0xFC9;
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif

// Register: T2CON
extern volatile unsigned char           T2CON               @ 0xFCA;
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned TOUTPS                 :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned                        :3;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits @ 0xFCA;
// bitfield macros
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
#define _T2CON_TOUTPS_POSN                                  0x3
#define _T2CON_TOUTPS_POSITION                              0x3
#define _T2CON_TOUTPS_SIZE                                  0x4
#define _T2CON_TOUTPS_LENGTH                                0x4
#define _T2CON_TOUTPS_MASK                                  0x78
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40
#define _T2CON_TOUTPS0_POSN                                 0x3
#define _T2CON_TOUTPS0_POSITION                             0x3
#define _T2CON_TOUTPS0_SIZE                                 0x1
#define _T2CON_TOUTPS0_LENGTH                               0x1
#define _T2CON_TOUTPS0_MASK                                 0x8
#define _T2CON_TOUTPS1_POSN                                 0x4
#define _T2CON_TOUTPS1_POSITION                             0x4
#define _T2CON_TOUTPS1_SIZE                                 0x1
#define _T2CON_TOUTPS1_LENGTH                               0x1
#define _T2CON_TOUTPS1_MASK                                 0x10
#define _T2CON_TOUTPS2_POSN                                 0x5
#define _T2CON_TOUTPS2_POSITION                             0x5
#define _T2CON_TOUTPS2_SIZE                                 0x1
#define _T2CON_TOUTPS2_LENGTH                               0x1
#define _T2CON_TOUTPS2_MASK                                 0x20
#define _T2CON_TOUTPS3_POSN                                 0x6
#define _T2CON_TOUTPS3_POSITION                             0x6
#define _T2CON_TOUTPS3_SIZE                                 0x1
#define _T2CON_TOUTPS3_LENGTH                               0x1
#define _T2CON_TOUTPS3_MASK                                 0x40

// Register: PR2
extern volatile unsigned char           PR2                 @ 0xFCB;
#ifndef _LIB_BUILD
asm("PR2 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           MEMCON              @ 0xFCB;
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} PR2bits_t;
extern volatile PR2bits_t PR2bits @ 0xFCB;
// bitfield macros
#define _PR2_EBDIS_POSN                                     0x7
#define _PR2_EBDIS_POSITION                                 0x7
#define _PR2_EBDIS_SIZE                                     0x1
#define _PR2_EBDIS_LENGTH                                   0x1
#define _PR2_EBDIS_MASK                                     0x80
#define _PR2_WAIT0_POSN                                     0x4
#define _PR2_WAIT0_POSITION                                 0x4
#define _PR2_WAIT0_SIZE                                     0x1
#define _PR2_WAIT0_LENGTH                                   0x1
#define _PR2_WAIT0_MASK                                     0x10
#define _PR2_WAIT1_POSN                                     0x5
#define _PR2_WAIT1_POSITION                                 0x5
#define _PR2_WAIT1_SIZE                                     0x1
#define _PR2_WAIT1_LENGTH                                   0x1
#define _PR2_WAIT1_MASK                                     0x20
#define _PR2_WM0_POSN                                       0x0
#define _PR2_WM0_POSITION                                   0x0
#define _PR2_WM0_SIZE                                       0x1
#define _PR2_WM0_LENGTH                                     0x1
#define _PR2_WM0_MASK                                       0x1
#define _PR2_WM1_POSN                                       0x1
#define _PR2_WM1_POSITION                                   0x1
#define _PR2_WM1_SIZE                                       0x1
#define _PR2_WM1_LENGTH                                     0x1
#define _PR2_WM1_MASK                                       0x2
// alias bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned EBDIS                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned WAIT0                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned WAIT1                  :1;
    };
    struct {
        unsigned WM0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WM1                    :1;
    };
} MEMCONbits_t;
extern volatile MEMCONbits_t MEMCONbits @ 0xFCB;
// bitfield macros
#define _MEMCON_EBDIS_POSN                                  0x7
#define _MEMCON_EBDIS_POSITION                              0x7
#define _MEMCON_EBDIS_SIZE                                  0x1
#define _MEMCON_EBDIS_LENGTH                                0x1
#define _MEMCON_EBDIS_MASK                                  0x80
#define _MEMCON_WAIT0_POSN                                  0x4
#define _MEMCON_WAIT0_POSITION                              0x4
#define _MEMCON_WAIT0_SIZE                                  0x1
#define _MEMCON_WAIT0_LENGTH                                0x1
#define _MEMCON_WAIT0_MASK                                  0x10
#define _MEMCON_WAIT1_POSN                                  0x5
#define _MEMCON_WAIT1_POSITION                              0x5
#define _MEMCON_WAIT1_SIZE                                  0x1
#define _MEMCON_WAIT1_LENGTH                                0x1
#define _MEMCON_WAIT1_MASK                                  0x20
#define _MEMCON_WM0_POSN                                    0x0
#define _MEMCON_WM0_POSITION                                0x0
#define _MEMCON_WM0_SIZE                                    0x1
#define _MEMCON_WM0_LENGTH                                  0x1
#define _MEMCON_WM0_MASK                                    0x1
#define _MEMCON_WM1_POSN                                    0x1
#define _MEMCON_WM1_POSITION                                0x1
#define _MEMCON_WM1_SIZE                                    0x1
#define _MEMCON_WM1_LENGTH                                  0x1
#define _MEMCON_WM1_MASK                                    0x2

// Register: TMR2
extern volatile unsigned char           TMR2                @ 0xFCC;
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif

// Register: T1CON
extern volatile unsigned char           T1CON               @ 0xFCD;
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned T1RD16                 :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits @ 0xFCD;
// bitfield macros
#define _T1CON_NOT_T1SYNC_POSN                              0x2
#define _T1CON_NOT_T1SYNC_POSITION                          0x2
#define _T1CON_NOT_T1SYNC_SIZE                              0x1
#define _T1CON_NOT_T1SYNC_LENGTH                            0x1
#define _T1CON_NOT_T1SYNC_MASK                              0x4
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_TMR1CS_POSN                                  0x1
#define _T1CON_TMR1CS_POSITION                              0x1
#define _T1CON_TMR1CS_SIZE                                  0x1
#define _T1CON_TMR1CS_LENGTH                                0x1
#define _T1CON_TMR1CS_MASK                                  0x2
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_T1RUN_POSN                                   0x6
#define _T1CON_T1RUN_POSITION                               0x6
#define _T1CON_T1RUN_SIZE                                   0x1
#define _T1CON_T1RUN_LENGTH                                 0x1
#define _T1CON_T1RUN_MASK                                   0x40
#define _T1CON_RD16_POSN                                    0x7
#define _T1CON_RD16_POSITION                                0x7
#define _T1CON_RD16_SIZE                                    0x1
#define _T1CON_RD16_LENGTH                                  0x1
#define _T1CON_RD16_MASK                                    0x80
#define _T1CON_T1SYNC_POSN                                  0x2
#define _T1CON_T1SYNC_POSITION                              0x2
#define _T1CON_T1SYNC_SIZE                                  0x1
#define _T1CON_T1SYNC_LENGTH                                0x1
#define _T1CON_T1SYNC_MASK                                  0x4
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20
#define _T1CON_SOSCEN_POSN                                  0x3
#define _T1CON_SOSCEN_POSITION                              0x3
#define _T1CON_SOSCEN_SIZE                                  0x1
#define _T1CON_SOSCEN_LENGTH                                0x1
#define _T1CON_SOSCEN_MASK                                  0x8
#define _T1CON_T1RD16_POSN                                  0x7
#define _T1CON_T1RD16_POSITION                              0x7
#define _T1CON_T1RD16_SIZE                                  0x1
#define _T1CON_T1RD16_LENGTH                                0x1
#define _T1CON_T1RD16_MASK                                  0x80

// Register: TMR1
extern volatile unsigned short          TMR1                @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif

// Register: TMR1L
extern volatile unsigned char           TMR1L               @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif

// Register: TMR1H
extern volatile unsigned char           TMR1H               @ 0xFCF;
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif

// Register: RCON
extern volatile unsigned char           RCON                @ 0xFD0;
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned                        :1;
        unsigned SBOREN                 :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned                        :7;
        unsigned NOT_IPEN               :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
        unsigned                        :2;
        unsigned nIPEN                  :1;
    };
} RCONbits_t;
extern volatile RCONbits_t RCONbits @ 0xFD0;
// bitfield macros
#define _RCON_NOT_BOR_POSN                                  0x0
#define _RCON_NOT_BOR_POSITION                              0x0
#define _RCON_NOT_BOR_SIZE                                  0x1
#define _RCON_NOT_BOR_LENGTH                                0x1
#define _RCON_NOT_BOR_MASK                                  0x1
#define _RCON_NOT_POR_POSN                                  0x1
#define _RCON_NOT_POR_POSITION                              0x1
#define _RCON_NOT_POR_SIZE                                  0x1
#define _RCON_NOT_POR_LENGTH                                0x1
#define _RCON_NOT_POR_MASK                                  0x2
#define _RCON_NOT_PD_POSN                                   0x2
#define _RCON_NOT_PD_POSITION                               0x2
#define _RCON_NOT_PD_SIZE                                   0x1
#define _RCON_NOT_PD_LENGTH                                 0x1
#define _RCON_NOT_PD_MASK                                   0x4
#define _RCON_NOT_TO_POSN                                   0x3
#define _RCON_NOT_TO_POSITION                               0x3
#define _RCON_NOT_TO_SIZE                                   0x1
#define _RCON_NOT_TO_LENGTH                                 0x1
#define _RCON_NOT_TO_MASK                                   0x8
#define _RCON_NOT_RI_POSN                                   0x4
#define _RCON_NOT_RI_POSITION                               0x4
#define _RCON_NOT_RI_SIZE                                   0x1
#define _RCON_NOT_RI_LENGTH                                 0x1
#define _RCON_NOT_RI_MASK                                   0x10
#define _RCON_nBOR_POSN                                     0x0
#define _RCON_nBOR_POSITION                                 0x0
#define _RCON_nBOR_SIZE                                     0x1
#define _RCON_nBOR_LENGTH                                   0x1
#define _RCON_nBOR_MASK                                     0x1
#define _RCON_nPOR_POSN                                     0x1
#define _RCON_nPOR_POSITION                                 0x1
#define _RCON_nPOR_SIZE                                     0x1
#define _RCON_nPOR_LENGTH                                   0x1
#define _RCON_nPOR_MASK                                     0x2
#define _RCON_nPD_POSN                                      0x2
#define _RCON_nPD_POSITION                                  0x2
#define _RCON_nPD_SIZE                                      0x1
#define _RCON_nPD_LENGTH                                    0x1
#define _RCON_nPD_MASK                                      0x4
#define _RCON_nTO_POSN                                      0x3
#define _RCON_nTO_POSITION                                  0x3
#define _RCON_nTO_SIZE                                      0x1
#define _RCON_nTO_LENGTH                                    0x1
#define _RCON_nTO_MASK                                      0x8
#define _RCON_nRI_POSN                                      0x4
#define _RCON_nRI_POSITION                                  0x4
#define _RCON_nRI_SIZE                                      0x1
#define _RCON_nRI_LENGTH                                    0x1
#define _RCON_nRI_MASK                                      0x10
#define _RCON_SBOREN_POSN                                   0x6
#define _RCON_SBOREN_POSITION                               0x6
#define _RCON_SBOREN_SIZE                                   0x1
#define _RCON_SBOREN_LENGTH                                 0x1
#define _RCON_SBOREN_MASK                                   0x40
#define _RCON_IPEN_POSN                                     0x7
#define _RCON_IPEN_POSITION                                 0x7
#define _RCON_IPEN_SIZE                                     0x1
#define _RCON_IPEN_LENGTH                                   0x1
#define _RCON_IPEN_MASK                                     0x80
#define _RCON_NOT_IPEN_POSN                                 0x7
#define _RCON_NOT_IPEN_POSITION                             0x7
#define _RCON_NOT_IPEN_SIZE                                 0x1
#define _RCON_NOT_IPEN_LENGTH                               0x1
#define _RCON_NOT_IPEN_MASK                                 0x80
#define _RCON_BOR_POSN                                      0x0
#define _RCON_BOR_POSITION                                  0x0
#define _RCON_BOR_SIZE                                      0x1
#define _RCON_BOR_LENGTH                                    0x1
#define _RCON_BOR_MASK                                      0x1
#define _RCON_POR_POSN                                      0x1
#define _RCON_POR_POSITION                                  0x1
#define _RCON_POR_SIZE                                      0x1
#define _RCON_POR_LENGTH                                    0x1
#define _RCON_POR_MASK                                      0x2
#define _RCON_PD_POSN                                       0x2
#define _RCON_PD_POSITION                                   0x2
#define _RCON_PD_SIZE                                       0x1
#define _RCON_PD_LENGTH                                     0x1
#define _RCON_PD_MASK                                       0x4
#define _RCON_TO_POSN                                       0x3
#define _RCON_TO_POSITION                                   0x3
#define _RCON_TO_SIZE                                       0x1
#define _RCON_TO_LENGTH                                     0x1
#define _RCON_TO_MASK                                       0x8
#define _RCON_RI_POSN                                       0x4
#define _RCON_RI_POSITION                                   0x4
#define _RCON_RI_SIZE                                       0x1
#define _RCON_RI_LENGTH                                     0x1
#define _RCON_RI_MASK                                       0x10
#define _RCON_nIPEN_POSN                                    0x7
#define _RCON_nIPEN_POSITION                                0x7
#define _RCON_nIPEN_SIZE                                    0x1
#define _RCON_nIPEN_LENGTH                                  0x1
#define _RCON_nIPEN_MASK                                    0x80

// Register: WDTCON
extern volatile unsigned char           WDTCON              @ 0xFD1;
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits @ 0xFD1;
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_SWDTE_POSN                                  0x0
#define _WDTCON_SWDTE_POSITION                              0x0
#define _WDTCON_SWDTE_SIZE                                  0x1
#define _WDTCON_SWDTE_LENGTH                                0x1
#define _WDTCON_SWDTE_MASK                                  0x1

// Register: HLVDCON
extern volatile unsigned char           HLVDCON             @ 0xFD2;
#ifndef _LIB_BUILD
asm("HLVDCON equ 0FD2h");
#endif
// aliases
extern volatile unsigned char           LVDCON              @ 0xFD2;
#ifndef _LIB_BUILD
asm("LVDCON equ 0FD2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IRVST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IVRST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} HLVDCONbits_t;
extern volatile HLVDCONbits_t HLVDCONbits @ 0xFD2;
// bitfield macros
#define _HLVDCON_HLVDL_POSN                                 0x0
#define _HLVDCON_HLVDL_POSITION                             0x0
#define _HLVDCON_HLVDL_SIZE                                 0x4
#define _HLVDCON_HLVDL_LENGTH                               0x4
#define _HLVDCON_HLVDL_MASK                                 0xF
#define _HLVDCON_HLVDEN_POSN                                0x4
#define _HLVDCON_HLVDEN_POSITION                            0x4
#define _HLVDCON_HLVDEN_SIZE                                0x1
#define _HLVDCON_HLVDEN_LENGTH                              0x1
#define _HLVDCON_HLVDEN_MASK                                0x10
#define _HLVDCON_IRVST_POSN                                 0x5
#define _HLVDCON_IRVST_POSITION                             0x5
#define _HLVDCON_IRVST_SIZE                                 0x1
#define _HLVDCON_IRVST_LENGTH                               0x1
#define _HLVDCON_IRVST_MASK                                 0x20
#define _HLVDCON_VDIRMAG_POSN                               0x7
#define _HLVDCON_VDIRMAG_POSITION                           0x7
#define _HLVDCON_VDIRMAG_SIZE                               0x1
#define _HLVDCON_VDIRMAG_LENGTH                             0x1
#define _HLVDCON_VDIRMAG_MASK                               0x80
#define _HLVDCON_HLVDL0_POSN                                0x0
#define _HLVDCON_HLVDL0_POSITION                            0x0
#define _HLVDCON_HLVDL0_SIZE                                0x1
#define _HLVDCON_HLVDL0_LENGTH                              0x1
#define _HLVDCON_HLVDL0_MASK                                0x1
#define _HLVDCON_HLVDL1_POSN                                0x1
#define _HLVDCON_HLVDL1_POSITION                            0x1
#define _HLVDCON_HLVDL1_SIZE                                0x1
#define _HLVDCON_HLVDL1_LENGTH                              0x1
#define _HLVDCON_HLVDL1_MASK                                0x2
#define _HLVDCON_HLVDL2_POSN                                0x2
#define _HLVDCON_HLVDL2_POSITION                            0x2
#define _HLVDCON_HLVDL2_SIZE                                0x1
#define _HLVDCON_HLVDL2_LENGTH                              0x1
#define _HLVDCON_HLVDL2_MASK                                0x4
#define _HLVDCON_HLVDL3_POSN                                0x3
#define _HLVDCON_HLVDL3_POSITION                            0x3
#define _HLVDCON_HLVDL3_SIZE                                0x1
#define _HLVDCON_HLVDL3_LENGTH                              0x1
#define _HLVDCON_HLVDL3_MASK                                0x8
#define _HLVDCON_LVDL0_POSN                                 0x0
#define _HLVDCON_LVDL0_POSITION                             0x0
#define _HLVDCON_LVDL0_SIZE                                 0x1
#define _HLVDCON_LVDL0_LENGTH                               0x1
#define _HLVDCON_LVDL0_MASK                                 0x1
#define _HLVDCON_LVDL1_POSN                                 0x1
#define _HLVDCON_LVDL1_POSITION                             0x1
#define _HLVDCON_LVDL1_SIZE                                 0x1
#define _HLVDCON_LVDL1_LENGTH                               0x1
#define _HLVDCON_LVDL1_MASK                                 0x2
#define _HLVDCON_LVDL2_POSN                                 0x2
#define _HLVDCON_LVDL2_POSITION                             0x2
#define _HLVDCON_LVDL2_SIZE                                 0x1
#define _HLVDCON_LVDL2_LENGTH                               0x1
#define _HLVDCON_LVDL2_MASK                                 0x4
#define _HLVDCON_LVDL3_POSN                                 0x3
#define _HLVDCON_LVDL3_POSITION                             0x3
#define _HLVDCON_LVDL3_SIZE                                 0x1
#define _HLVDCON_LVDL3_LENGTH                               0x1
#define _HLVDCON_LVDL3_MASK                                 0x8
#define _HLVDCON_LVDEN_POSN                                 0x4
#define _HLVDCON_LVDEN_POSITION                             0x4
#define _HLVDCON_LVDEN_SIZE                                 0x1
#define _HLVDCON_LVDEN_LENGTH                               0x1
#define _HLVDCON_LVDEN_MASK                                 0x10
#define _HLVDCON_IVRST_POSN                                 0x5
#define _HLVDCON_IVRST_POSITION                             0x5
#define _HLVDCON_IVRST_SIZE                                 0x1
#define _HLVDCON_IVRST_LENGTH                               0x1
#define _HLVDCON_IVRST_MASK                                 0x20
#define _HLVDCON_LVV0_POSN                                  0x0
#define _HLVDCON_LVV0_POSITION                              0x0
#define _HLVDCON_LVV0_SIZE                                  0x1
#define _HLVDCON_LVV0_LENGTH                                0x1
#define _HLVDCON_LVV0_MASK                                  0x1
#define _HLVDCON_LVV1_POSN                                  0x1
#define _HLVDCON_LVV1_POSITION                              0x1
#define _HLVDCON_LVV1_SIZE                                  0x1
#define _HLVDCON_LVV1_LENGTH                                0x1
#define _HLVDCON_LVV1_MASK                                  0x2
#define _HLVDCON_LVV2_POSN                                  0x2
#define _HLVDCON_LVV2_POSITION                              0x2
#define _HLVDCON_LVV2_SIZE                                  0x1
#define _HLVDCON_LVV2_LENGTH                                0x1
#define _HLVDCON_LVV2_MASK                                  0x4
#define _HLVDCON_LVV3_POSN                                  0x3
#define _HLVDCON_LVV3_POSITION                              0x3
#define _HLVDCON_LVV3_SIZE                                  0x1
#define _HLVDCON_LVV3_LENGTH                                0x1
#define _HLVDCON_LVV3_MASK                                  0x8
#define _HLVDCON_BGST_POSN                                  0x5
#define _HLVDCON_BGST_POSITION                              0x5
#define _HLVDCON_BGST_SIZE                                  0x1
#define _HLVDCON_BGST_LENGTH                                0x1
#define _HLVDCON_BGST_MASK                                  0x20
// alias bitfield definitions
typedef union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IRVST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IVRST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} LVDCONbits_t;
extern volatile LVDCONbits_t LVDCONbits @ 0xFD2;
// bitfield macros
#define _LVDCON_HLVDL_POSN                                  0x0
#define _LVDCON_HLVDL_POSITION                              0x0
#define _LVDCON_HLVDL_SIZE                                  0x4
#define _LVDCON_HLVDL_LENGTH                                0x4
#define _LVDCON_HLVDL_MASK                                  0xF
#define _LVDCON_HLVDEN_POSN                                 0x4
#define _LVDCON_HLVDEN_POSITION                             0x4
#define _LVDCON_HLVDEN_SIZE                                 0x1
#define _LVDCON_HLVDEN_LENGTH                               0x1
#define _LVDCON_HLVDEN_MASK                                 0x10
#define _LVDCON_IRVST_POSN                                  0x5
#define _LVDCON_IRVST_POSITION                              0x5
#define _LVDCON_IRVST_SIZE                                  0x1
#define _LVDCON_IRVST_LENGTH                                0x1
#define _LVDCON_IRVST_MASK                                  0x20
#define _LVDCON_VDIRMAG_POSN                                0x7
#define _LVDCON_VDIRMAG_POSITION                            0x7
#define _LVDCON_VDIRMAG_SIZE                                0x1
#define _LVDCON_VDIRMAG_LENGTH                              0x1
#define _LVDCON_VDIRMAG_MASK                                0x80
#define _LVDCON_HLVDL0_POSN                                 0x0
#define _LVDCON_HLVDL0_POSITION                             0x0
#define _LVDCON_HLVDL0_SIZE                                 0x1
#define _LVDCON_HLVDL0_LENGTH                               0x1
#define _LVDCON_HLVDL0_MASK                                 0x1
#define _LVDCON_HLVDL1_POSN                                 0x1
#define _LVDCON_HLVDL1_POSITION                             0x1
#define _LVDCON_HLVDL1_SIZE                                 0x1
#define _LVDCON_HLVDL1_LENGTH                               0x1
#define _LVDCON_HLVDL1_MASK                                 0x2
#define _LVDCON_HLVDL2_POSN                                 0x2
#define _LVDCON_HLVDL2_POSITION                             0x2
#define _LVDCON_HLVDL2_SIZE                                 0x1
#define _LVDCON_HLVDL2_LENGTH                               0x1
#define _LVDCON_HLVDL2_MASK                                 0x4
#define _LVDCON_HLVDL3_POSN                                 0x3
#define _LVDCON_HLVDL3_POSITION                             0x3
#define _LVDCON_HLVDL3_SIZE                                 0x1
#define _LVDCON_HLVDL3_LENGTH                               0x1
#define _LVDCON_HLVDL3_MASK                                 0x8
#define _LVDCON_LVDL0_POSN                                  0x0
#define _LVDCON_LVDL0_POSITION                              0x0
#define _LVDCON_LVDL0_SIZE                                  0x1
#define _LVDCON_LVDL0_LENGTH                                0x1
#define _LVDCON_LVDL0_MASK                                  0x1
#define _LVDCON_LVDL1_POSN                                  0x1
#define _LVDCON_LVDL1_POSITION                              0x1
#define _LVDCON_LVDL1_SIZE                                  0x1
#define _LVDCON_LVDL1_LENGTH                                0x1
#define _LVDCON_LVDL1_MASK                                  0x2
#define _LVDCON_LVDL2_POSN                                  0x2
#define _LVDCON_LVDL2_POSITION                              0x2
#define _LVDCON_LVDL2_SIZE                                  0x1
#define _LVDCON_LVDL2_LENGTH                                0x1
#define _LVDCON_LVDL2_MASK                                  0x4
#define _LVDCON_LVDL3_POSN                                  0x3
#define _LVDCON_LVDL3_POSITION                              0x3
#define _LVDCON_LVDL3_SIZE                                  0x1
#define _LVDCON_LVDL3_LENGTH                                0x1
#define _LVDCON_LVDL3_MASK                                  0x8
#define _LVDCON_LVDEN_POSN                                  0x4
#define _LVDCON_LVDEN_POSITION                              0x4
#define _LVDCON_LVDEN_SIZE                                  0x1
#define _LVDCON_LVDEN_LENGTH                                0x1
#define _LVDCON_LVDEN_MASK                                  0x10
#define _LVDCON_IVRST_POSN                                  0x5
#define _LVDCON_IVRST_POSITION                              0x5
#define _LVDCON_IVRST_SIZE                                  0x1
#define _LVDCON_IVRST_LENGTH                                0x1
#define _LVDCON_IVRST_MASK                                  0x20
#define _LVDCON_LVV0_POSN                                   0x0
#define _LVDCON_LVV0_POSITION                               0x0
#define _LVDCON_LVV0_SIZE                                   0x1
#define _LVDCON_LVV0_LENGTH                                 0x1
#define _LVDCON_LVV0_MASK                                   0x1
#define _LVDCON_LVV1_POSN                                   0x1
#define _LVDCON_LVV1_POSITION                               0x1
#define _LVDCON_LVV1_SIZE                                   0x1
#define _LVDCON_LVV1_LENGTH                                 0x1
#define _LVDCON_LVV1_MASK                                   0x2
#define _LVDCON_LVV2_POSN                                   0x2
#define _LVDCON_LVV2_POSITION                               0x2
#define _LVDCON_LVV2_SIZE                                   0x1
#define _LVDCON_LVV2_LENGTH                                 0x1
#define _LVDCON_LVV2_MASK                                   0x4
#define _LVDCON_LVV3_POSN                                   0x3
#define _LVDCON_LVV3_POSITION                               0x3
#define _LVDCON_LVV3_SIZE                                   0x1
#define _LVDCON_LVV3_LENGTH                                 0x1
#define _LVDCON_LVV3_MASK                                   0x8
#define _LVDCON_BGST_POSN                                   0x5
#define _LVDCON_BGST_POSITION                               0x5
#define _LVDCON_BGST_SIZE                                   0x1
#define _LVDCON_BGST_LENGTH                                 0x1
#define _LVDCON_BGST_MASK                                   0x20

// Register: OSCCON
extern volatile unsigned char           OSCCON              @ 0xFD3;
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS                    :2;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned FLTS                   :1;
        unsigned                        :1;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits @ 0xFD3;
// bitfield macros
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_IOFS_POSN                                   0x2
#define _OSCCON_IOFS_POSITION                               0x2
#define _OSCCON_IOFS_SIZE                                   0x1
#define _OSCCON_IOFS_LENGTH                                 0x1
#define _OSCCON_IOFS_MASK                                   0x4
#define _OSCCON_OSTS_POSN                                   0x3
#define _OSCCON_OSTS_POSITION                               0x3
#define _OSCCON_OSTS_SIZE                                   0x1
#define _OSCCON_OSTS_LENGTH                                 0x1
#define _OSCCON_OSTS_MASK                                   0x8
#define _OSCCON_IRCF_POSN                                   0x4
#define _OSCCON_IRCF_POSITION                               0x4
#define _OSCCON_IRCF_SIZE                                   0x3
#define _OSCCON_IRCF_LENGTH                                 0x3
#define _OSCCON_IRCF_MASK                                   0x70
#define _OSCCON_IDLEN_POSN                                  0x7
#define _OSCCON_IDLEN_POSITION                              0x7
#define _OSCCON_IDLEN_SIZE                                  0x1
#define _OSCCON_IDLEN_LENGTH                                0x1
#define _OSCCON_IDLEN_MASK                                  0x80
#define _OSCCON_SCS0_POSN                                   0x0
#define _OSCCON_SCS0_POSITION                               0x0
#define _OSCCON_SCS0_SIZE                                   0x1
#define _OSCCON_SCS0_LENGTH                                 0x1
#define _OSCCON_SCS0_MASK                                   0x1
#define _OSCCON_SCS1_POSN                                   0x1
#define _OSCCON_SCS1_POSITION                               0x1
#define _OSCCON_SCS1_SIZE                                   0x1
#define _OSCCON_SCS1_LENGTH                                 0x1
#define _OSCCON_SCS1_MASK                                   0x2
#define _OSCCON_FLTS_POSN                                   0x2
#define _OSCCON_FLTS_POSITION                               0x2
#define _OSCCON_FLTS_SIZE                                   0x1
#define _OSCCON_FLTS_LENGTH                                 0x1
#define _OSCCON_FLTS_MASK                                   0x4
#define _OSCCON_IRCF0_POSN                                  0x4
#define _OSCCON_IRCF0_POSITION                              0x4
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x10
#define _OSCCON_IRCF1_POSN                                  0x5
#define _OSCCON_IRCF1_POSITION                              0x5
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x20
#define _OSCCON_IRCF2_POSN                                  0x6
#define _OSCCON_IRCF2_POSITION                              0x6
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x40

// Register: T0CON
extern volatile unsigned char           T0CON               @ 0xFD5;
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
    };
} T0CONbits_t;
extern volatile T0CONbits_t T0CONbits @ 0xFD5;
// bitfield macros
#define _T0CON_T0PS_POSN                                    0x0
#define _T0CON_T0PS_POSITION                                0x0
#define _T0CON_T0PS_SIZE                                    0x3
#define _T0CON_T0PS_LENGTH                                  0x3
#define _T0CON_T0PS_MASK                                    0x7
#define _T0CON_PSA_POSN                                     0x3
#define _T0CON_PSA_POSITION                                 0x3
#define _T0CON_PSA_SIZE                                     0x1
#define _T0CON_PSA_LENGTH                                   0x1
#define _T0CON_PSA_MASK                                     0x8
#define _T0CON_T0SE_POSN                                    0x4
#define _T0CON_T0SE_POSITION                                0x4
#define _T0CON_T0SE_SIZE                                    0x1
#define _T0CON_T0SE_LENGTH                                  0x1
#define _T0CON_T0SE_MASK                                    0x10
#define _T0CON_T0CS_POSN                                    0x5
#define _T0CON_T0CS_POSITION                                0x5
#define _T0CON_T0CS_SIZE                                    0x1
#define _T0CON_T0CS_LENGTH                                  0x1
#define _T0CON_T0CS_MASK                                    0x20
#define _T0CON_T08BIT_POSN                                  0x6
#define _T0CON_T08BIT_POSITION                              0x6
#define _T0CON_T08BIT_SIZE                                  0x1
#define _T0CON_T08BIT_LENGTH                                0x1
#define _T0CON_T08BIT_MASK                                  0x40
#define _T0CON_TMR0ON_POSN                                  0x7
#define _T0CON_TMR0ON_POSITION                              0x7
#define _T0CON_TMR0ON_SIZE                                  0x1
#define _T0CON_TMR0ON_LENGTH                                0x1
#define _T0CON_TMR0ON_MASK                                  0x80
#define _T0CON_T0PS0_POSN                                   0x0
#define _T0CON_T0PS0_POSITION                               0x0
#define _T0CON_T0PS0_SIZE                                   0x1
#define _T0CON_T0PS0_LENGTH                                 0x1
#define _T0CON_T0PS0_MASK                                   0x1
#define _T0CON_T0PS1_POSN                                   0x1
#define _T0CON_T0PS1_POSITION                               0x1
#define _T0CON_T0PS1_SIZE                                   0x1
#define _T0CON_T0PS1_LENGTH                                 0x1
#define _T0CON_T0PS1_MASK                                   0x2
#define _T0CON_T0PS2_POSN                                   0x2
#define _T0CON_T0PS2_POSITION                               0x2
#define _T0CON_T0PS2_SIZE                                   0x1
#define _T0CON_T0PS2_LENGTH                                 0x1
#define _T0CON_T0PS2_MASK                                   0x4

// Register: TMR0
extern volatile unsigned short          TMR0                @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif

// Register: TMR0L
extern volatile unsigned char           TMR0L               @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif

// Register: TMR0H
extern volatile unsigned char           TMR0H               @ 0xFD7;
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif

// Register: STATUS
extern volatile unsigned char           STATUS              @ 0xFD8;
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned NEGATIVE               :1;
    };
    struct {
        unsigned                        :3;
        unsigned OVERFLOW               :1;
    };
    struct {
        unsigned                        :2;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits @ 0xFD8;
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_OV_POSN                                     0x3
#define _STATUS_OV_POSITION                                 0x3
#define _STATUS_OV_SIZE                                     0x1
#define _STATUS_OV_LENGTH                                   0x1
#define _STATUS_OV_MASK                                     0x8
#define _STATUS_N_POSN                                      0x4
#define _STATUS_N_POSITION                                  0x4
#define _STATUS_N_SIZE                                      0x1
#define _STATUS_N_LENGTH                                    0x1
#define _STATUS_N_MASK                                      0x10
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_NEGATIVE_POSN                               0x4
#define _STATUS_NEGATIVE_POSITION                           0x4
#define _STATUS_NEGATIVE_SIZE                               0x1
#define _STATUS_NEGATIVE_LENGTH                             0x1
#define _STATUS_NEGATIVE_MASK                               0x10
#define _STATUS_OVERFLOW_POSN                               0x3
#define _STATUS_OVERFLOW_POSITION                           0x3
#define _STATUS_OVERFLOW_SIZE                               0x1
#define _STATUS_OVERFLOW_LENGTH                             0x1
#define _STATUS_OVERFLOW_MASK                               0x8
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR2
extern volatile unsigned short          FSR2                @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif

// Register: FSR2L
extern volatile unsigned char           FSR2L               @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif

// Register: FSR2H
extern volatile unsigned char           FSR2H               @ 0xFDA;
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif

// Register: PLUSW2
extern volatile unsigned char           PLUSW2              @ 0xFDB;
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif

// Register: PREINC2
extern volatile unsigned char           PREINC2             @ 0xFDC;
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif

// Register: POSTDEC2
extern volatile unsigned char           POSTDEC2            @ 0xFDD;
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif

// Register: POSTINC2
extern volatile unsigned char           POSTINC2            @ 0xFDE;
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif

// Register: INDF2
extern volatile unsigned char           INDF2               @ 0xFDF;
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif

// Register: BSR
extern volatile unsigned char           BSR                 @ 0xFE0;
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif

// Register: FSR1
extern volatile unsigned short          FSR1                @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif

// Register: FSR1L
extern volatile unsigned char           FSR1L               @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif

// Register: FSR1H
extern volatile unsigned char           FSR1H               @ 0xFE2;
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif

// Register: PLUSW1
extern volatile unsigned char           PLUSW1              @ 0xFE3;
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif

// Register: PREINC1
extern volatile unsigned char           PREINC1             @ 0xFE4;
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif

// Register: POSTDEC1
extern volatile unsigned char           POSTDEC1            @ 0xFE5;
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif

// Register: POSTINC1
extern volatile unsigned char           POSTINC1            @ 0xFE6;
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif

// Register: INDF1
extern volatile unsigned char           INDF1               @ 0xFE7;
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif

// Register: WREG
extern volatile unsigned char           WREG                @ 0xFE8;
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif

// Register: FSR0
extern volatile unsigned short          FSR0                @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif

// Register: FSR0L
extern volatile unsigned char           FSR0L               @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif

// Register: FSR0H
extern volatile unsigned char           FSR0H               @ 0xFEA;
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif

// Register: PLUSW0
extern volatile unsigned char           PLUSW0              @ 0xFEB;
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif

// Register: PREINC0
extern volatile unsigned char           PREINC0             @ 0xFEC;
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif

// Register: POSTDEC0
extern volatile unsigned char           POSTDEC0            @ 0xFED;
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif

// Register: POSTINC0
extern volatile unsigned char           POSTINC0            @ 0xFEE;
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif

// Register: INDF0
extern volatile unsigned char           INDF0               @ 0xFEF;
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif

// Register: INTCON3
extern volatile unsigned char           INTCON3             @ 0xFF0;
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned                        :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned                        :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned                        :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned                        :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits_t;
extern volatile INTCON3bits_t INTCON3bits @ 0xFF0;
// bitfield macros
#define _INTCON3_INT1IF_POSN                                0x0
#define _INTCON3_INT1IF_POSITION                            0x0
#define _INTCON3_INT1IF_SIZE                                0x1
#define _INTCON3_INT1IF_LENGTH                              0x1
#define _INTCON3_INT1IF_MASK                                0x1
#define _INTCON3_INT2IF_POSN                                0x1
#define _INTCON3_INT2IF_POSITION                            0x1
#define _INTCON3_INT2IF_SIZE                                0x1
#define _INTCON3_INT2IF_LENGTH                              0x1
#define _INTCON3_INT2IF_MASK                                0x2
#define _INTCON3_INT1IE_POSN                                0x3
#define _INTCON3_INT1IE_POSITION                            0x3
#define _INTCON3_INT1IE_SIZE                                0x1
#define _INTCON3_INT1IE_LENGTH                              0x1
#define _INTCON3_INT1IE_MASK                                0x8
#define _INTCON3_INT2IE_POSN                                0x4
#define _INTCON3_INT2IE_POSITION                            0x4
#define _INTCON3_INT2IE_SIZE                                0x1
#define _INTCON3_INT2IE_LENGTH                              0x1
#define _INTCON3_INT2IE_MASK                                0x10
#define _INTCON3_INT1IP_POSN                                0x6
#define _INTCON3_INT1IP_POSITION                            0x6
#define _INTCON3_INT1IP_SIZE                                0x1
#define _INTCON3_INT1IP_LENGTH                              0x1
#define _INTCON3_INT1IP_MASK                                0x40
#define _INTCON3_INT2IP_POSN                                0x7
#define _INTCON3_INT2IP_POSITION                            0x7
#define _INTCON3_INT2IP_SIZE                                0x1
#define _INTCON3_INT2IP_LENGTH                              0x1
#define _INTCON3_INT2IP_MASK                                0x80
#define _INTCON3_INT1F_POSN                                 0x0
#define _INTCON3_INT1F_POSITION                             0x0
#define _INTCON3_INT1F_SIZE                                 0x1
#define _INTCON3_INT1F_LENGTH                               0x1
#define _INTCON3_INT1F_MASK                                 0x1
#define _INTCON3_INT2F_POSN                                 0x1
#define _INTCON3_INT2F_POSITION                             0x1
#define _INTCON3_INT2F_SIZE                                 0x1
#define _INTCON3_INT2F_LENGTH                               0x1
#define _INTCON3_INT2F_MASK                                 0x2
#define _INTCON3_INT1E_POSN                                 0x3
#define _INTCON3_INT1E_POSITION                             0x3
#define _INTCON3_INT1E_SIZE                                 0x1
#define _INTCON3_INT1E_LENGTH                               0x1
#define _INTCON3_INT1E_MASK                                 0x8
#define _INTCON3_INT2E_POSN                                 0x4
#define _INTCON3_INT2E_POSITION                             0x4
#define _INTCON3_INT2E_SIZE                                 0x1
#define _INTCON3_INT2E_LENGTH                               0x1
#define _INTCON3_INT2E_MASK                                 0x10
#define _INTCON3_INT1P_POSN                                 0x6
#define _INTCON3_INT1P_POSITION                             0x6
#define _INTCON3_INT1P_SIZE                                 0x1
#define _INTCON3_INT1P_LENGTH                               0x1
#define _INTCON3_INT1P_MASK                                 0x40
#define _INTCON3_INT2P_POSN                                 0x7
#define _INTCON3_INT2P_POSITION                             0x7
#define _INTCON3_INT2P_SIZE                                 0x1
#define _INTCON3_INT2P_LENGTH                               0x1
#define _INTCON3_INT2P_MASK                                 0x80

// Register: INTCON2
extern volatile unsigned char           INTCON2             @ 0xFF1;
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :7;
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
        unsigned                        :1;
        unsigned TMR0IP                 :1;
        unsigned                        :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IP                   :1;
        unsigned                        :4;
        unsigned RBPU                   :1;
    };
} INTCON2bits_t;
extern volatile INTCON2bits_t INTCON2bits @ 0xFF1;
// bitfield macros
#define _INTCON2_NOT_RBPU_POSN                              0x7
#define _INTCON2_NOT_RBPU_POSITION                          0x7
#define _INTCON2_NOT_RBPU_SIZE                              0x1
#define _INTCON2_NOT_RBPU_LENGTH                            0x1
#define _INTCON2_NOT_RBPU_MASK                              0x80
#define _INTCON2_RBIP_POSN                                  0x0
#define _INTCON2_RBIP_POSITION                              0x0
#define _INTCON2_RBIP_SIZE                                  0x1
#define _INTCON2_RBIP_LENGTH                                0x1
#define _INTCON2_RBIP_MASK                                  0x1
#define _INTCON2_TMR0IP_POSN                                0x2
#define _INTCON2_TMR0IP_POSITION                            0x2
#define _INTCON2_TMR0IP_SIZE                                0x1
#define _INTCON2_TMR0IP_LENGTH                              0x1
#define _INTCON2_TMR0IP_MASK                                0x4
#define _INTCON2_INTEDG2_POSN                               0x4
#define _INTCON2_INTEDG2_POSITION                           0x4
#define _INTCON2_INTEDG2_SIZE                               0x1
#define _INTCON2_INTEDG2_LENGTH                             0x1
#define _INTCON2_INTEDG2_MASK                               0x10
#define _INTCON2_INTEDG1_POSN                               0x5
#define _INTCON2_INTEDG1_POSITION                           0x5
#define _INTCON2_INTEDG1_SIZE                               0x1
#define _INTCON2_INTEDG1_LENGTH                             0x1
#define _INTCON2_INTEDG1_MASK                               0x20
#define _INTCON2_INTEDG0_POSN                               0x6
#define _INTCON2_INTEDG0_POSITION                           0x6
#define _INTCON2_INTEDG0_SIZE                               0x1
#define _INTCON2_INTEDG0_LENGTH                             0x1
#define _INTCON2_INTEDG0_MASK                               0x40
#define _INTCON2_nRBPU_POSN                                 0x7
#define _INTCON2_nRBPU_POSITION                             0x7
#define _INTCON2_nRBPU_SIZE                                 0x1
#define _INTCON2_nRBPU_LENGTH                               0x1
#define _INTCON2_nRBPU_MASK                                 0x80
#define _INTCON2_T0IP_POSN                                  0x2
#define _INTCON2_T0IP_POSITION                              0x2
#define _INTCON2_T0IP_SIZE                                  0x1
#define _INTCON2_T0IP_LENGTH                                0x1
#define _INTCON2_T0IP_MASK                                  0x4
#define _INTCON2_RBPU_POSN                                  0x7
#define _INTCON2_RBPU_POSITION                              0x7
#define _INTCON2_RBPU_SIZE                                  0x1
#define _INTCON2_RBPU_LENGTH                                0x1
#define _INTCON2_RBPU_MASK                                  0x80

// Register: INTCON
extern volatile unsigned char           INTCON              @ 0xFF2;
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits @ 0xFF2;
// bitfield macros
#define _INTCON_RBIF_POSN                                   0x0
#define _INTCON_RBIF_POSITION                               0x0
#define _INTCON_RBIF_SIZE                                   0x1
#define _INTCON_RBIF_LENGTH                                 0x1
#define _INTCON_RBIF_MASK                                   0x1
#define _INTCON_INT0IF_POSN                                 0x1
#define _INTCON_INT0IF_POSITION                             0x1
#define _INTCON_INT0IF_SIZE                                 0x1
#define _INTCON_INT0IF_LENGTH                               0x1
#define _INTCON_INT0IF_MASK                                 0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_RBIE_POSN                                   0x3
#define _INTCON_RBIE_POSITION                               0x3
#define _INTCON_RBIE_SIZE                                   0x1
#define _INTCON_RBIE_LENGTH                                 0x1
#define _INTCON_RBIE_MASK                                   0x8
#define _INTCON_INT0IE_POSN                                 0x4
#define _INTCON_INT0IE_POSITION                             0x4
#define _INTCON_INT0IE_SIZE                                 0x1
#define _INTCON_INT0IE_LENGTH                               0x1
#define _INTCON_INT0IE_MASK                                 0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_GIEL_POSN                              0x6
#define _INTCON_PEIE_GIEL_POSITION                          0x6
#define _INTCON_PEIE_GIEL_SIZE                              0x1
#define _INTCON_PEIE_GIEL_LENGTH                            0x1
#define _INTCON_PEIE_GIEL_MASK                              0x40
#define _INTCON_GIE_GIEH_POSN                               0x7
#define _INTCON_GIE_GIEH_POSITION                           0x7
#define _INTCON_GIE_GIEH_SIZE                               0x1
#define _INTCON_GIE_GIEH_LENGTH                             0x1
#define _INTCON_GIE_GIEH_MASK                               0x80
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80
#define _INTCON_GIEL_POSN                                   0x6
#define _INTCON_GIEL_POSITION                               0x6
#define _INTCON_GIEL_SIZE                                   0x1
#define _INTCON_GIEL_LENGTH                                 0x1
#define _INTCON_GIEL_MASK                                   0x40
#define _INTCON_GIEH_POSN                                   0x7
#define _INTCON_GIEH_POSITION                               0x7
#define _INTCON_GIEH_SIZE                                   0x1
#define _INTCON_GIEH_LENGTH                                 0x1
#define _INTCON_GIEH_MASK                                   0x80
#define _INTCON_INT0F_POSN                                  0x1
#define _INTCON_INT0F_POSITION                              0x1
#define _INTCON_INT0F_SIZE                                  0x1
#define _INTCON_INT0F_LENGTH                                0x1
#define _INTCON_INT0F_MASK                                  0x2
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_INT0E_POSN                                  0x4
#define _INTCON_INT0E_POSITION                              0x4
#define _INTCON_INT0E_SIZE                                  0x1
#define _INTCON_INT0E_LENGTH                                0x1
#define _INTCON_INT0E_MASK                                  0x10
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20

// Register: PROD
extern volatile unsigned short          PROD                @ 0xFF3;
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif

// Register: PRODL
extern volatile unsigned char           PRODL               @ 0xFF3;
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif

// Register: PRODH
extern volatile unsigned char           PRODH               @ 0xFF4;
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif

// Register: TABLAT
extern volatile unsigned char           TABLAT              @ 0xFF5;
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif

// Register: TBLPTR
#ifndef __CCI__
extern volatile unsigned short long     TBLPTR              @ 0xFF6;
#endif
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif

// Register: TBLPTRL
extern volatile unsigned char           TBLPTRL             @ 0xFF6;
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif

// Register: TBLPTRH
extern volatile unsigned char           TBLPTRH             @ 0xFF7;
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif

// Register: TBLPTRU
extern volatile unsigned char           TBLPTRU             @ 0xFF8;
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif

// Register: PCLAT
#ifndef __CCI__
extern volatile unsigned short long     PCLAT               @ 0xFF9;
#endif
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
#ifndef __CCI__
extern volatile unsigned short long     PC                  @ 0xFF9;
#endif
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif

// Register: PCL
extern volatile unsigned char           PCL                 @ 0xFF9;
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif

// Register: PCLATH
extern volatile unsigned char           PCLATH              @ 0xFFA;
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif

// Register: PCLATU
extern volatile unsigned char           PCLATU              @ 0xFFB;
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif

// Register: STKPTR
extern volatile unsigned char           STKPTR              @ 0xFFC;
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned STKPTR0                :1;
        unsigned STKPTR1                :1;
        unsigned STKPTR2                :1;
        unsigned STKPTR3                :1;
        unsigned STKPTR4                :1;
    };
    struct {
        unsigned                        :7;
        unsigned STKOVF                 :1;
    };
} STKPTRbits_t;
extern volatile STKPTRbits_t STKPTRbits @ 0xFFC;
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F
#define _STKPTR_STKUNF_POSN                                 0x6
#define _STKPTR_STKUNF_POSITION                             0x6
#define _STKPTR_STKUNF_SIZE                                 0x1
#define _STKPTR_STKUNF_LENGTH                               0x1
#define _STKPTR_STKUNF_MASK                                 0x40
#define _STKPTR_STKFUL_POSN                                 0x7
#define _STKPTR_STKFUL_POSITION                             0x7
#define _STKPTR_STKFUL_SIZE                                 0x1
#define _STKPTR_STKFUL_LENGTH                               0x1
#define _STKPTR_STKFUL_MASK                                 0x80
#define _STKPTR_STKPTR0_POSN                                0x0
#define _STKPTR_STKPTR0_POSITION                            0x0
#define _STKPTR_STKPTR0_SIZE                                0x1
#define _STKPTR_STKPTR0_LENGTH                              0x1
#define _STKPTR_STKPTR0_MASK                                0x1
#define _STKPTR_STKPTR1_POSN                                0x1
#define _STKPTR_STKPTR1_POSITION                            0x1
#define _STKPTR_STKPTR1_SIZE                                0x1
#define _STKPTR_STKPTR1_LENGTH                              0x1
#define _STKPTR_STKPTR1_MASK                                0x2
#define _STKPTR_STKPTR2_POSN                                0x2
#define _STKPTR_STKPTR2_POSITION                            0x2
#define _STKPTR_STKPTR2_SIZE                                0x1
#define _STKPTR_STKPTR2_LENGTH                              0x1
#define _STKPTR_STKPTR2_MASK                                0x4
#define _STKPTR_STKPTR3_POSN                                0x3
#define _STKPTR_STKPTR3_POSITION                            0x3
#define _STKPTR_STKPTR3_SIZE                                0x1
#define _STKPTR_STKPTR3_LENGTH                              0x1
#define _STKPTR_STKPTR3_MASK                                0x8
#define _STKPTR_STKPTR4_POSN                                0x4
#define _STKPTR_STKPTR4_POSITION                            0x4
#define _STKPTR_STKPTR4_SIZE                                0x1
#define _STKPTR_STKPTR4_LENGTH                              0x1
#define _STKPTR_STKPTR4_MASK                                0x10
#define _STKPTR_STKOVF_POSN                                 0x7
#define _STKPTR_STKOVF_POSITION                             0x7
#define _STKPTR_STKOVF_SIZE                                 0x1
#define _STKPTR_STKOVF_LENGTH                               0x1
#define _STKPTR_STKOVF_MASK                                 0x80

// Register: TOS
#ifndef __CCI__
extern volatile unsigned short long     TOS                 @ 0xFFD;
#endif
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif

// Register: TOSL
extern volatile unsigned char           TOSL                @ 0xFFD;
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif

// Register: TOSH
extern volatile unsigned char           TOSH                @ 0xFFE;
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif

// Register: TOSU
extern volatile unsigned char           TOSU                @ 0xFFF;
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif

/*
 * Bit Definitions
 *  */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&0FFh)
#endif
extern volatile __bit                   ABDEN               @ (((unsigned) &BAUDCON)*8) + 0;
#define                                 ABDEN_bit           BANKMASK(BAUDCON), 0
extern volatile __bit                   ABDOVF              @ (((unsigned) &BAUDCON)*8) + 7;
#define                                 ABDOVF_bit          BANKMASK(BAUDCON), 7
extern volatile __bit                   ACKDT               @ (((unsigned) &SSPCON2)*8) + 5;
#define                                 ACKDT_bit           BANKMASK(SSPCON2), 5
extern volatile __bit                   ACKEN               @ (((unsigned) &SSPCON2)*8) + 4;
#define                                 ACKEN_bit           BANKMASK(SSPCON2), 4
extern volatile __bit                   ACKSTAT             @ (((unsigned) &SSPCON2)*8) + 6;
#define                                 ACKSTAT_bit         BANKMASK(SSPCON2), 6
extern volatile __bit                   ACQT0               @ (((unsigned) &ADCON2)*8) + 3;
#define                                 ACQT0_bit           BANKMASK(ADCON2), 3
extern volatile __bit                   ACQT1               @ (((unsigned) &ADCON2)*8) + 4;
#define                                 ACQT1_bit           BANKMASK(ADCON2), 4
extern volatile __bit                   ACQT2               @ (((unsigned) &ADCON2)*8) + 5;
#define                                 ACQT2_bit           BANKMASK(ADCON2), 5
extern volatile __bit                   ACTVIE              @ (((unsigned) &UIE)*8) + 2;
#define                                 ACTVIE_bit          BANKMASK(UIE), 2
extern volatile __bit                   ACTVIF              @ (((unsigned) &UIR)*8) + 2;
#define                                 ACTVIF_bit          BANKMASK(UIR), 2
extern volatile __bit                   ADCS0               @ (((unsigned) &ADCON2)*8) + 0;
#define                                 ADCS0_bit           BANKMASK(ADCON2), 0
extern volatile __bit                   ADCS1               @ (((unsigned) &ADCON2)*8) + 1;
#define                                 ADCS1_bit           BANKMASK(ADCON2), 1
extern volatile __bit                   ADCS2               @ (((unsigned) &ADCON2)*8) + 2;
#define                                 ADCS2_bit           BANKMASK(ADCON2), 2
extern volatile __bit                   ADDEN               @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADDEN_bit           BANKMASK(RCSTA), 3
extern volatile __bit _DEPRECATED       ADDR0               @ (((unsigned) &SPPEPS)*8) + 0;
#define                                 ADDR0_bit           BANKMASK(SPPEPS), 0
extern volatile __bit _DEPRECATED       ADDR1               @ (((unsigned) &SPPEPS)*8) + 1;
#define                                 ADDR1_bit           BANKMASK(SPPEPS), 1
extern volatile __bit _DEPRECATED       ADDR2               @ (((unsigned) &SPPEPS)*8) + 2;
#define                                 ADDR2_bit           BANKMASK(SPPEPS), 2
extern volatile __bit _DEPRECATED       ADDR3               @ (((unsigned) &SPPEPS)*8) + 3;
#define                                 ADDR3_bit           BANKMASK(SPPEPS), 3
extern volatile __bit                   ADDR4               @ (((unsigned) &UADDR)*8) + 4;
#define                                 ADDR4_bit           BANKMASK(UADDR), 4
extern volatile __bit                   ADDR5               @ (((unsigned) &UADDR)*8) + 5;
#define                                 ADDR5_bit           BANKMASK(UADDR), 5
extern volatile __bit                   ADDR6               @ (((unsigned) &UADDR)*8) + 6;
#define                                 ADDR6_bit           BANKMASK(UADDR), 6
extern volatile __bit                   ADEN                @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADEN_bit            BANKMASK(RCSTA), 3
extern volatile __bit                   ADFM                @ (((unsigned) &ADCON2)*8) + 7;
#define                                 ADFM_bit            BANKMASK(ADCON2), 7
extern volatile __bit                   ADIE                @ (((unsigned) &PIE1)*8) + 6;
#define                                 ADIE_bit            BANKMASK(PIE1), 6
extern volatile __bit                   ADIF                @ (((unsigned) &PIR1)*8) + 6;
#define                                 ADIF_bit            BANKMASK(PIR1), 6
extern volatile __bit                   ADIP                @ (((unsigned) &IPR1)*8) + 6;
#define                                 ADIP_bit            BANKMASK(IPR1), 6
extern volatile __bit                   ADON                @ (((unsigned) &ADCON0)*8) + 0;
#define                                 ADON_bit            BANKMASK(ADCON0), 0
extern volatile __bit                   AN0                 @ (((unsigned) &PORTA)*8) + 0;
#define                                 AN0_bit             BANKMASK(PORTA), 0
extern volatile __bit                   AN1                 @ (((unsigned) &PORTA)*8) + 1;
#define                                 AN1_bit             BANKMASK(PORTA), 1
extern volatile __bit                   AN2                 @ (((unsigned) &PORTA)*8) + 2;
#define                                 AN2_bit             BANKMASK(PORTA), 2
extern volatile __bit                   AN3                 @ (((unsigned) &PORTA)*8) + 3;
#define                                 AN3_bit             BANKMASK(PORTA), 3
extern volatile __bit                   AN4                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 AN4_bit             BANKMASK(PORTA), 5
extern volatile __bit                   BCLIE               @ (((unsigned) &PIE2)*8) + 3;
#define                                 BCLIE_bit           BANKMASK(PIE2), 3
extern volatile __bit                   BCLIF               @ (((unsigned) &PIR2)*8) + 3;
#define                                 BCLIF_bit           BANKMASK(PIR2), 3
extern volatile __bit                   BCLIP               @ (((unsigned) &IPR2)*8) + 3;
#define                                 BCLIP_bit           BANKMASK(IPR2), 3
extern volatile __bit                   BF                  @ (((unsigned) &SSPSTAT)*8) + 0;
#define                                 BF_bit              BANKMASK(SSPSTAT), 0
extern volatile __bit                   BGST                @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 BGST_bit            BANKMASK(HLVDCON), 5
extern volatile __bit                   BOR                 @ (((unsigned) &RCON)*8) + 0;
#define                                 BOR_bit             BANKMASK(RCON), 0
extern volatile __bit                   BRG16               @ (((unsigned) &BAUDCON)*8) + 3;
#define                                 BRG16_bit           BANKMASK(BAUDCON), 3
extern volatile __bit                   BRGH                @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH_bit            BANKMASK(TXSTA), 2
extern volatile __bit                   BRGH1               @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH1_bit           BANKMASK(TXSTA), 2
extern volatile __bit                   BTOEE               @ (((unsigned) &UEIE)*8) + 4;
#define                                 BTOEE_bit           BANKMASK(UEIE), 4
extern volatile __bit                   BTOEF               @ (((unsigned) &UEIR)*8) + 4;
#define                                 BTOEF_bit           BANKMASK(UEIR), 4
extern volatile __bit                   BTSEE               @ (((unsigned) &UEIE)*8) + 7;
#define                                 BTSEE_bit           BANKMASK(UEIE), 7
extern volatile __bit                   BTSEF               @ (((unsigned) &UEIR)*8) + 7;
#define                                 BTSEF_bit           BANKMASK(UEIR), 7
extern volatile __bit                   BUSY                @ (((unsigned) &SPPEPS)*8) + 4;
#define                                 BUSY_bit            BANKMASK(SPPEPS), 4
extern volatile __bit                   C1INV               @ (((unsigned) &CMCON)*8) + 4;
#define                                 C1INV_bit           BANKMASK(CMCON), 4
extern volatile __bit                   C1OUT               @ (((unsigned) &CMCON)*8) + 6;
#define                                 C1OUT_bit           BANKMASK(CMCON), 6
extern volatile __bit                   C2INV               @ (((unsigned) &CMCON)*8) + 5;
#define                                 C2INV_bit           BANKMASK(CMCON), 5
extern volatile __bit                   C2OUT               @ (((unsigned) &CMCON)*8) + 7;
#define                                 C2OUT_bit           BANKMASK(CMCON), 7
extern volatile __bit                   CARRY               @ (((unsigned) &STATUS)*8) + 0;
#define                                 CARRY_bit           BANKMASK(STATUS), 0
extern volatile __bit                   CCP1                @ (((unsigned) &PORTC)*8) + 2;
#define                                 CCP1_bit            BANKMASK(PORTC), 2
extern volatile __bit                   CCP10               @ (((unsigned) &PORTE)*8) + 2;
#define                                 CCP10_bit           BANKMASK(PORTE), 2
extern volatile __bit                   CCP1IE              @ (((unsigned) &PIE1)*8) + 2;
#define                                 CCP1IE_bit          BANKMASK(PIE1), 2
extern volatile __bit                   CCP1IF              @ (((unsigned) &PIR1)*8) + 2;
#define                                 CCP1IF_bit          BANKMASK(PIR1), 2
extern volatile __bit                   CCP1IP              @ (((unsigned) &IPR1)*8) + 2;
#define                                 CCP1IP_bit          BANKMASK(IPR1), 2
extern volatile __bit                   CCP1M0              @ (((unsigned) &CCP1CON)*8) + 0;
#define                                 CCP1M0_bit          BANKMASK(CCP1CON), 0
extern volatile __bit                   CCP1M1              @ (((unsigned) &CCP1CON)*8) + 1;
#define                                 CCP1M1_bit          BANKMASK(CCP1CON), 1
extern volatile __bit                   CCP1M2              @ (((unsigned) &CCP1CON)*8) + 2;
#define                                 CCP1M2_bit          BANKMASK(CCP1CON), 2
extern volatile __bit                   CCP1M3              @ (((unsigned) &CCP1CON)*8) + 3;
#define                                 CCP1M3_bit          BANKMASK(CCP1CON), 3
extern volatile __bit                   CCP2                @ (((unsigned) &PORTC)*8) + 1;
#define                                 CCP2_bit            BANKMASK(PORTC), 1
extern volatile __bit                   CCP2E               @ (((unsigned) &PORTE)*8) + 7;
#define                                 CCP2E_bit           BANKMASK(PORTE), 7
extern volatile __bit                   CCP2IE              @ (((unsigned) &PIE2)*8) + 0;
#define                                 CCP2IE_bit          BANKMASK(PIE2), 0
extern volatile __bit                   CCP2IF              @ (((unsigned) &PIR2)*8) + 0;
#define                                 CCP2IF_bit          BANKMASK(PIR2), 0
extern volatile __bit                   CCP2IP              @ (((unsigned) &IPR2)*8) + 0;
#define                                 CCP2IP_bit          BANKMASK(IPR2), 0
extern volatile __bit                   CCP2M0              @ (((unsigned) &CCP2CON)*8) + 0;
#define                                 CCP2M0_bit          BANKMASK(CCP2CON), 0
extern volatile __bit                   CCP2M1              @ (((unsigned) &CCP2CON)*8) + 1;
#define                                 CCP2M1_bit          BANKMASK(CCP2CON), 1
extern volatile __bit                   CCP2M2              @ (((unsigned) &CCP2CON)*8) + 2;
#define                                 CCP2M2_bit          BANKMASK(CCP2CON), 2
extern volatile __bit                   CCP2M3              @ (((unsigned) &CCP2CON)*8) + 3;
#define                                 CCP2M3_bit          BANKMASK(CCP2CON), 3
extern volatile __bit                   CCP2_PA2            @ (((unsigned) &PORTB)*8) + 3;
#define                                 CCP2_PA2_bit        BANKMASK(PORTB), 3
extern volatile __bit                   CCP6E               @ (((unsigned) &PORTE)*8) + 6;
#define                                 CCP6E_bit           BANKMASK(PORTE), 6
extern volatile __bit                   CCP7E               @ (((unsigned) &PORTE)*8) + 5;
#define                                 CCP7E_bit           BANKMASK(PORTE), 5
extern volatile __bit                   CCP8E               @ (((unsigned) &PORTE)*8) + 4;
#define                                 CCP8E_bit           BANKMASK(PORTE), 4
extern volatile __bit                   CCP9E               @ (((unsigned) &PORTE)*8) + 3;
#define                                 CCP9E_bit           BANKMASK(PORTE), 3
extern volatile __bit                   CFGS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 CFGS_bit            BANKMASK(EECON1), 6
extern volatile __bit                   CHS0                @ (((unsigned) &ADCON0)*8) + 2;
#define                                 CHS0_bit            BANKMASK(ADCON0), 2
extern volatile __bit                   CHS1                @ (((unsigned) &ADCON0)*8) + 3;
#define                                 CHS1_bit            BANKMASK(ADCON0), 3
extern volatile __bit                   CHS2                @ (((unsigned) &ADCON0)*8) + 4;
#define                                 CHS2_bit            BANKMASK(ADCON0), 4
extern volatile __bit                   CHS3                @ (((unsigned) &ADCON0)*8) + 5;
#define                                 CHS3_bit            BANKMASK(ADCON0), 5
extern volatile __bit                   CHSN3               @ (((unsigned) &ADCON1)*8) + 3;
#define                                 CHSN3_bit           BANKMASK(ADCON1), 3
extern volatile __bit                   CIS                 @ (((unsigned) &CMCON)*8) + 3;
#define                                 CIS_bit             BANKMASK(CMCON), 3
extern volatile __bit                   CK                  @ (((unsigned) &PORTC)*8) + 6;
#define                                 CK_bit              BANKMASK(PORTC), 6
extern volatile __bit                   CK1SPP              @ (((unsigned) &PORTE)*8) + 0;
#define                                 CK1SPP_bit          BANKMASK(PORTE), 0
extern volatile __bit                   CK2SPP              @ (((unsigned) &PORTE)*8) + 1;
#define                                 CK2SPP_bit          BANKMASK(PORTE), 1
extern volatile __bit                   CKE                 @ (((unsigned) &SSPSTAT)*8) + 6;
#define                                 CKE_bit             BANKMASK(SSPSTAT), 6
extern volatile __bit                   CKP                 @ (((unsigned) &SSPCON1)*8) + 4;
#define                                 CKP_bit             BANKMASK(SSPCON1), 4
extern volatile __bit                   CLK1EN              @ (((unsigned) &SPPCFG)*8) + 4;
#define                                 CLK1EN_bit          BANKMASK(SPPCFG), 4
extern volatile __bit                   CLKCFG0             @ (((unsigned) &SPPCFG)*8) + 6;
#define                                 CLKCFG0_bit         BANKMASK(SPPCFG), 6
extern volatile __bit                   CLKCFG1             @ (((unsigned) &SPPCFG)*8) + 7;
#define                                 CLKCFG1_bit         BANKMASK(SPPCFG), 7
extern volatile __bit                   CM0                 @ (((unsigned) &CMCON)*8) + 0;
#define                                 CM0_bit             BANKMASK(CMCON), 0
extern volatile __bit                   CM1                 @ (((unsigned) &CMCON)*8) + 1;
#define                                 CM1_bit             BANKMASK(CMCON), 1
extern volatile __bit                   CM2                 @ (((unsigned) &CMCON)*8) + 2;
#define                                 CM2_bit             BANKMASK(CMCON), 2
extern volatile __bit                   CMEN0               @ (((unsigned) &CMCON)*8) + 0;
#define                                 CMEN0_bit           BANKMASK(CMCON), 0
extern volatile __bit                   CMEN1               @ (((unsigned) &CMCON)*8) + 1;
#define                                 CMEN1_bit           BANKMASK(CMCON), 1
extern volatile __bit                   CMEN2               @ (((unsigned) &CMCON)*8) + 2;
#define                                 CMEN2_bit           BANKMASK(CMCON), 2
extern volatile __bit                   CMIE                @ (((unsigned) &PIE2)*8) + 6;
#define                                 CMIE_bit            BANKMASK(PIE2), 6
extern volatile __bit                   CMIF                @ (((unsigned) &PIR2)*8) + 6;
#define                                 CMIF_bit            BANKMASK(PIR2), 6
extern volatile __bit                   CMIP                @ (((unsigned) &IPR2)*8) + 6;
#define                                 CMIP_bit            BANKMASK(IPR2), 6
extern volatile __bit                   CRC16EE             @ (((unsigned) &UEIE)*8) + 2;
#define                                 CRC16EE_bit         BANKMASK(UEIE), 2
extern volatile __bit                   CRC16EF             @ (((unsigned) &UEIR)*8) + 2;
#define                                 CRC16EF_bit         BANKMASK(UEIR), 2
extern volatile __bit                   CRC5EE              @ (((unsigned) &UEIE)*8) + 1;
#define                                 CRC5EE_bit          BANKMASK(UEIE), 1
extern volatile __bit                   CRC5EF              @ (((unsigned) &UEIR)*8) + 1;
#define                                 CRC5EF_bit          BANKMASK(UEIR), 1
extern volatile __bit                   CREN                @ (((unsigned) &RCSTA)*8) + 4;
#define                                 CREN_bit            BANKMASK(RCSTA), 4
extern volatile __bit                   CS                  @ (((unsigned) &PORTE)*8) + 2;
#define                                 CS_bit              BANKMASK(PORTE), 2
extern volatile __bit                   CSEN                @ (((unsigned) &SPPCFG)*8) + 5;
#define                                 CSEN_bit            BANKMASK(SPPCFG), 5
extern volatile __bit                   CSRC                @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC_bit            BANKMASK(TXSTA), 7
extern volatile __bit                   CSRC1               @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC1_bit           BANKMASK(TXSTA), 7
extern volatile __bit                   CVR0                @ (((unsigned) &CVRCON)*8) + 0;
#define                                 CVR0_bit            BANKMASK(CVRCON), 0
extern volatile __bit                   CVR1                @ (((unsigned) &CVRCON)*8) + 1;
#define                                 CVR1_bit            BANKMASK(CVRCON), 1
extern volatile __bit                   CVR2                @ (((unsigned) &CVRCON)*8) + 2;
#define                                 CVR2_bit            BANKMASK(CVRCON), 2
extern volatile __bit                   CVR3                @ (((unsigned) &CVRCON)*8) + 3;
#define                                 CVR3_bit            BANKMASK(CVRCON), 3
extern volatile __bit                   CVREF               @ (((unsigned) &CVRCON)*8) + 4;
#define                                 CVREF_bit           BANKMASK(CVRCON), 4
extern volatile __bit                   CVREN               @ (((unsigned) &CVRCON)*8) + 7;
#define                                 CVREN_bit           BANKMASK(CVRCON), 7
extern volatile __bit                   CVROE               @ (((unsigned) &CVRCON)*8) + 6;
#define                                 CVROE_bit           BANKMASK(CVRCON), 6
extern volatile __bit                   CVROEN              @ (((unsigned) &CVRCON)*8) + 6;
#define                                 CVROEN_bit          BANKMASK(CVRCON), 6
extern volatile __bit                   CVRR                @ (((unsigned) &CVRCON)*8) + 5;
#define                                 CVRR_bit            BANKMASK(CVRCON), 5
extern volatile __bit                   CVRSS               @ (((unsigned) &CVRCON)*8) + 4;
#define                                 CVRSS_bit           BANKMASK(CVRCON), 4
extern volatile __bit                   DA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 DA_bit              BANKMASK(SSPSTAT), 5
extern volatile __bit                   DATA_ADDRESS        @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 DATA_ADDRESS_bit    BANKMASK(SSPSTAT), 5
extern volatile __bit                   DC                  @ (((unsigned) &STATUS)*8) + 1;
#define                                 DC_bit              BANKMASK(STATUS), 1
extern volatile __bit                   DC1B0               @ (((unsigned) &CCP1CON)*8) + 4;
#define                                 DC1B0_bit           BANKMASK(CCP1CON), 4
extern volatile __bit                   DC1B1               @ (((unsigned) &CCP1CON)*8) + 5;
#define                                 DC1B1_bit           BANKMASK(CCP1CON), 5
extern volatile __bit                   DC2B0               @ (((unsigned) &CCP2CON)*8) + 4;
#define                                 DC2B0_bit           BANKMASK(CCP2CON), 4
extern volatile __bit                   DC2B1               @ (((unsigned) &CCP2CON)*8) + 5;
#define                                 DC2B1_bit           BANKMASK(CCP2CON), 5
extern volatile __bit                   DFN8EE              @ (((unsigned) &UEIE)*8) + 3;
#define                                 DFN8EE_bit          BANKMASK(UEIE), 3
extern volatile __bit                   DFN8EF              @ (((unsigned) &UEIR)*8) + 3;
#define                                 DFN8EF_bit          BANKMASK(UEIR), 3
extern volatile __bit                   DIR                 @ (((unsigned) &USTAT)*8) + 2;
#define                                 DIR_bit             BANKMASK(USTAT), 2
extern volatile __bit                   DONE                @ (((unsigned) &ADCON0)*8) + 1;
#define                                 DONE_bit            BANKMASK(ADCON0), 1
extern volatile __bit                   DT                  @ (((unsigned) &PORTC)*8) + 7;
#define                                 DT_bit              BANKMASK(PORTC), 7
extern volatile __bit                   D_A                 @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_A_bit             BANKMASK(SSPSTAT), 5
extern volatile __bit                   D_NOT_A             @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_NOT_A_bit         BANKMASK(SSPSTAT), 5
extern volatile __bit                   D_nA                @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_nA_bit            BANKMASK(SSPSTAT), 5
extern volatile __bit                   EBDIS               @ (((unsigned) &PR2)*8) + 7;
#define                                 EBDIS_bit           BANKMASK(PR2), 7
extern volatile __bit                   ECCPAS0             @ (((unsigned) &ECCP1AS)*8) + 4;
#define                                 ECCPAS0_bit         BANKMASK(ECCP1AS), 4
extern volatile __bit                   ECCPAS1             @ (((unsigned) &ECCP1AS)*8) + 5;
#define                                 ECCPAS1_bit         BANKMASK(ECCP1AS), 5
extern volatile __bit                   ECCPAS2             @ (((unsigned) &ECCP1AS)*8) + 6;
#define                                 ECCPAS2_bit         BANKMASK(ECCP1AS), 6
extern volatile __bit                   ECCPASE             @ (((unsigned) &ECCP1AS)*8) + 7;
#define                                 ECCPASE_bit         BANKMASK(ECCP1AS), 7
extern volatile __bit                   EEFS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 EEFS_bit            BANKMASK(EECON1), 6
extern volatile __bit                   EEIE                @ (((unsigned) &PIE2)*8) + 4;
#define                                 EEIE_bit            BANKMASK(PIE2), 4
extern volatile __bit                   EEIF                @ (((unsigned) &PIR2)*8) + 4;
#define                                 EEIF_bit            BANKMASK(PIR2), 4
extern volatile __bit                   EEIP                @ (((unsigned) &IPR2)*8) + 4;
#define                                 EEIP_bit            BANKMASK(IPR2), 4
extern volatile __bit                   EEPGD               @ (((unsigned) &EECON1)*8) + 7;
#define                                 EEPGD_bit           BANKMASK(EECON1), 7
extern volatile __bit                   ENDP0               @ (((unsigned) &USTAT)*8) + 3;
#define                                 ENDP0_bit           BANKMASK(USTAT), 3
extern volatile __bit                   ENDP1               @ (((unsigned) &USTAT)*8) + 4;
#define                                 ENDP1_bit           BANKMASK(USTAT), 4
extern volatile __bit                   ENDP2               @ (((unsigned) &USTAT)*8) + 5;
#define                                 ENDP2_bit           BANKMASK(USTAT), 5
extern volatile __bit                   ENDP3               @ (((unsigned) &USTAT)*8) + 6;
#define                                 ENDP3_bit           BANKMASK(USTAT), 6
extern volatile __bit                   EP0CONDIS           @ (((unsigned) &UEP0)*8) + 3;
#define                                 EP0CONDIS_bit       BANKMASK(UEP0), 3
extern volatile __bit                   EP0HSHK             @ (((unsigned) &UEP0)*8) + 4;
#define                                 EP0HSHK_bit         BANKMASK(UEP0), 4
extern volatile __bit                   EP0INEN             @ (((unsigned) &UEP0)*8) + 1;
#define                                 EP0INEN_bit         BANKMASK(UEP0), 1
extern volatile __bit                   EP0OUTEN            @ (((unsigned) &UEP0)*8) + 2;
#define                                 EP0OUTEN_bit        BANKMASK(UEP0), 2
extern volatile __bit                   EP0STALL            @ (((unsigned) &UEP0)*8) + 0;
#define                                 EP0STALL_bit        BANKMASK(UEP0), 0
extern volatile __bit                   EP1CONDIS           @ (((unsigned) &UEP1)*8) + 3;
#define                                 EP1CONDIS_bit       BANKMASK(UEP1), 3
extern volatile __bit                   EP1HSHK             @ (((unsigned) &UEP1)*8) + 4;
#define                                 EP1HSHK_bit         BANKMASK(UEP1), 4
extern volatile __bit                   EP1INEN             @ (((unsigned) &UEP1)*8) + 1;
#define                                 EP1INEN_bit         BANKMASK(UEP1), 1
extern volatile __bit                   EP1OUTEN            @ (((unsigned) &UEP1)*8) + 2;
#define                                 EP1OUTEN_bit        BANKMASK(UEP1), 2
extern volatile __bit                   EP1STALL            @ (((unsigned) &UEP1)*8) + 0;
#define                                 EP1STALL_bit        BANKMASK(UEP1), 0
extern volatile __bit                   EP2CONDIS           @ (((unsigned) &UEP2)*8) + 3;
#define                                 EP2CONDIS_bit       BANKMASK(UEP2), 3
extern volatile __bit                   EP2HSHK             @ (((unsigned) &UEP2)*8) + 4;
#define                                 EP2HSHK_bit         BANKMASK(UEP2), 4
extern volatile __bit                   EP2INEN             @ (((unsigned) &UEP2)*8) + 1;
#define                                 EP2INEN_bit         BANKMASK(UEP2), 1
extern volatile __bit                   EP2OUTEN            @ (((unsigned) &UEP2)*8) + 2;
#define                                 EP2OUTEN_bit        BANKMASK(UEP2), 2
extern volatile __bit                   EP2STALL            @ (((unsigned) &UEP2)*8) + 0;
#define                                 EP2STALL_bit        BANKMASK(UEP2), 0
extern volatile __bit                   EP3CONDIS           @ (((unsigned) &UEP3)*8) + 3;
#define                                 EP3CONDIS_bit       BANKMASK(UEP3), 3
extern volatile __bit                   EP3HSHK             @ (((unsigned) &UEP3)*8) + 4;
#define                                 EP3HSHK_bit         BANKMASK(UEP3), 4
extern volatile __bit                   EP3INEN             @ (((unsigned) &UEP3)*8) + 1;
#define                                 EP3INEN_bit         BANKMASK(UEP3), 1
extern volatile __bit                   EP3OUTEN            @ (((unsigned) &UEP3)*8) + 2;
#define                                 EP3OUTEN_bit        BANKMASK(UEP3), 2
extern volatile __bit                   EP3STALL            @ (((unsigned) &UEP3)*8) + 0;
#define                                 EP3STALL_bit        BANKMASK(UEP3), 0
extern volatile __bit                   EP4CONDIS           @ (((unsigned) &UEP4)*8) + 3;
#define                                 EP4CONDIS_bit       BANKMASK(UEP4), 3
extern volatile __bit                   EP4HSHK             @ (((unsigned) &UEP4)*8) + 4;
#define                                 EP4HSHK_bit         BANKMASK(UEP4), 4
extern volatile __bit                   EP4INEN             @ (((unsigned) &UEP4)*8) + 1;
#define                                 EP4INEN_bit         BANKMASK(UEP4), 1
extern volatile __bit                   EP4OUTEN            @ (((unsigned) &UEP4)*8) + 2;
#define                                 EP4OUTEN_bit        BANKMASK(UEP4), 2
extern volatile __bit                   EP4STALL            @ (((unsigned) &UEP4)*8) + 0;
#define                                 EP4STALL_bit        BANKMASK(UEP4), 0
extern volatile __bit                   EP5CONDIS           @ (((unsigned) &UEP5)*8) + 3;
#define                                 EP5CONDIS_bit       BANKMASK(UEP5), 3
extern volatile __bit                   EP5HSHK             @ (((unsigned) &UEP5)*8) + 4;
#define                                 EP5HSHK_bit         BANKMASK(UEP5), 4
extern volatile __bit                   EP5INEN             @ (((unsigned) &UEP5)*8) + 1;
#define                                 EP5INEN_bit         BANKMASK(UEP5), 1
extern volatile __bit                   EP5OUTEN            @ (((unsigned) &UEP5)*8) + 2;
#define                                 EP5OUTEN_bit        BANKMASK(UEP5), 2
extern volatile __bit                   EP5STALL            @ (((unsigned) &UEP5)*8) + 0;
#define                                 EP5STALL_bit        BANKMASK(UEP5), 0
extern volatile __bit                   EP6CONDIS           @ (((unsigned) &UEP6)*8) + 3;
#define                                 EP6CONDIS_bit       BANKMASK(UEP6), 3
extern volatile __bit                   EP6HSHK             @ (((unsigned) &UEP6)*8) + 4;
#define                                 EP6HSHK_bit         BANKMASK(UEP6), 4
extern volatile __bit                   EP6INEN             @ (((unsigned) &UEP6)*8) + 1;
#define                                 EP6INEN_bit         BANKMASK(UEP6), 1
extern volatile __bit                   EP6OUTEN            @ (((unsigned) &UEP6)*8) + 2;
#define                                 EP6OUTEN_bit        BANKMASK(UEP6), 2
extern volatile __bit                   EP6STALL            @ (((unsigned) &UEP6)*8) + 0;
#define                                 EP6STALL_bit        BANKMASK(UEP6), 0
extern volatile __bit                   EP7CONDIS           @ (((unsigned) &UEP7)*8) + 3;
#define                                 EP7CONDIS_bit       BANKMASK(UEP7), 3
extern volatile __bit                   EP7HSHK             @ (((unsigned) &UEP7)*8) + 4;
#define                                 EP7HSHK_bit         BANKMASK(UEP7), 4
extern volatile __bit                   EP7INEN             @ (((unsigned) &UEP7)*8) + 1;
#define                                 EP7INEN_bit         BANKMASK(UEP7), 1
extern volatile __bit                   EP7OUTEN            @ (((unsigned) &UEP7)*8) + 2;
#define                                 EP7OUTEN_bit        BANKMASK(UEP7), 2
extern volatile __bit                   EP7STALL            @ (((unsigned) &UEP7)*8) + 0;
#define                                 EP7STALL_bit        BANKMASK(UEP7), 0
extern volatile __bit                   EPCONDIS0           @ (((unsigned) &UEP0)*8) + 3;
#define                                 EPCONDIS0_bit       BANKMASK(UEP0), 3
extern volatile __bit                   EPCONDIS1           @ (((unsigned) &UEP1)*8) + 3;
#define                                 EPCONDIS1_bit       BANKMASK(UEP1), 3
extern volatile __bit                   EPCONDIS10          @ (((unsigned) &UEP10)*8) + 3;
#define                                 EPCONDIS10_bit      BANKMASK(UEP10), 3
extern volatile __bit                   EPCONDIS11          @ (((unsigned) &UEP11)*8) + 3;
#define                                 EPCONDIS11_bit      BANKMASK(UEP11), 3
extern volatile __bit                   EPCONDIS12          @ (((unsigned) &UEP12)*8) + 3;
#define                                 EPCONDIS12_bit      BANKMASK(UEP12), 3
extern volatile __bit                   EPCONDIS13          @ (((unsigned) &UEP13)*8) + 3;
#define                                 EPCONDIS13_bit      BANKMASK(UEP13), 3
extern volatile __bit                   EPCONDIS14          @ (((unsigned) &UEP14)*8) + 3;
#define                                 EPCONDIS14_bit      BANKMASK(UEP14), 3
extern volatile __bit                   EPCONDIS15          @ (((unsigned) &UEP15)*8) + 3;
#define                                 EPCONDIS15_bit      BANKMASK(UEP15), 3
extern volatile __bit                   EPCONDIS2           @ (((unsigned) &UEP2)*8) + 3;
#define                                 EPCONDIS2_bit       BANKMASK(UEP2), 3
extern volatile __bit                   EPCONDIS3           @ (((unsigned) &UEP3)*8) + 3;
#define                                 EPCONDIS3_bit       BANKMASK(UEP3), 3
extern volatile __bit                   EPCONDIS4           @ (((unsigned) &UEP4)*8) + 3;
#define                                 EPCONDIS4_bit       BANKMASK(UEP4), 3
extern volatile __bit                   EPCONDIS5           @ (((unsigned) &UEP5)*8) + 3;
#define                                 EPCONDIS5_bit       BANKMASK(UEP5), 3
extern volatile __bit                   EPCONDIS6           @ (((unsigned) &UEP6)*8) + 3;
#define                                 EPCONDIS6_bit       BANKMASK(UEP6), 3
extern volatile __bit                   EPCONDIS7           @ (((unsigned) &UEP7)*8) + 3;
#define                                 EPCONDIS7_bit       BANKMASK(UEP7), 3
extern volatile __bit                   EPCONDIS8           @ (((unsigned) &UEP8)*8) + 3;
#define                                 EPCONDIS8_bit       BANKMASK(UEP8), 3
extern volatile __bit                   EPCONDIS9           @ (((unsigned) &UEP9)*8) + 3;
#define                                 EPCONDIS9_bit       BANKMASK(UEP9), 3
extern volatile __bit                   EPHSHK0             @ (((unsigned) &UEP0)*8) + 4;
#define                                 EPHSHK0_bit         BANKMASK(UEP0), 4
extern volatile __bit                   EPHSHK1             @ (((unsigned) &UEP1)*8) + 4;
#define                                 EPHSHK1_bit         BANKMASK(UEP1), 4
extern volatile __bit                   EPHSHK10            @ (((unsigned) &UEP10)*8) + 4;
#define                                 EPHSHK10_bit        BANKMASK(UEP10), 4
extern volatile __bit                   EPHSHK11            @ (((unsigned) &UEP11)*8) + 4;
#define                                 EPHSHK11_bit        BANKMASK(UEP11), 4
extern volatile __bit                   EPHSHK12            @ (((unsigned) &UEP12)*8) + 4;
#define                                 EPHSHK12_bit        BANKMASK(UEP12), 4
extern volatile __bit                   EPHSHK13            @ (((unsigned) &UEP13)*8) + 4;
#define                                 EPHSHK13_bit        BANKMASK(UEP13), 4
extern volatile __bit                   EPHSHK14            @ (((unsigned) &UEP14)*8) + 4;
#define                                 EPHSHK14_bit        BANKMASK(UEP14), 4
extern volatile __bit                   EPHSHK15            @ (((unsigned) &UEP15)*8) + 4;
#define                                 EPHSHK15_bit        BANKMASK(UEP15), 4
extern volatile __bit                   EPHSHK2             @ (((unsigned) &UEP2)*8) + 4;
#define                                 EPHSHK2_bit         BANKMASK(UEP2), 4
extern volatile __bit                   EPHSHK3             @ (((unsigned) &UEP3)*8) + 4;
#define                                 EPHSHK3_bit         BANKMASK(UEP3), 4
extern volatile __bit                   EPHSHK4             @ (((unsigned) &UEP4)*8) + 4;
#define                                 EPHSHK4_bit         BANKMASK(UEP4), 4
extern volatile __bit                   EPHSHK5             @ (((unsigned) &UEP5)*8) + 4;
#define                                 EPHSHK5_bit         BANKMASK(UEP5), 4
extern volatile __bit                   EPHSHK6             @ (((unsigned) &UEP6)*8) + 4;
#define                                 EPHSHK6_bit         BANKMASK(UEP6), 4
extern volatile __bit                   EPHSHK7             @ (((unsigned) &UEP7)*8) + 4;
#define                                 EPHSHK7_bit         BANKMASK(UEP7), 4
extern volatile __bit                   EPHSHK8             @ (((unsigned) &UEP8)*8) + 4;
#define                                 EPHSHK8_bit         BANKMASK(UEP8), 4
extern volatile __bit                   EPHSHK9             @ (((unsigned) &UEP9)*8) + 4;
#define                                 EPHSHK9_bit         BANKMASK(UEP9), 4
extern volatile __bit                   EPINEN0             @ (((unsigned) &UEP0)*8) + 1;
#define                                 EPINEN0_bit         BANKMASK(UEP0), 1
extern volatile __bit                   EPINEN1             @ (((unsigned) &UEP1)*8) + 1;
#define                                 EPINEN1_bit         BANKMASK(UEP1), 1
extern volatile __bit                   EPINEN10            @ (((unsigned) &UEP10)*8) + 1;
#define                                 EPINEN10_bit        BANKMASK(UEP10), 1
extern volatile __bit                   EPINEN11            @ (((unsigned) &UEP11)*8) + 1;
#define                                 EPINEN11_bit        BANKMASK(UEP11), 1
extern volatile __bit                   EPINEN12            @ (((unsigned) &UEP12)*8) + 1;
#define                                 EPINEN12_bit        BANKMASK(UEP12), 1
extern volatile __bit                   EPINEN13            @ (((unsigned) &UEP13)*8) + 1;
#define                                 EPINEN13_bit        BANKMASK(UEP13), 1
extern volatile __bit                   EPINEN14            @ (((unsigned) &UEP14)*8) + 1;
#define                                 EPINEN14_bit        BANKMASK(UEP14), 1
extern volatile __bit                   EPINEN15            @ (((unsigned) &UEP15)*8) + 1;
#define                                 EPINEN15_bit        BANKMASK(UEP15), 1
extern volatile __bit                   EPINEN2             @ (((unsigned) &UEP2)*8) + 1;
#define                                 EPINEN2_bit         BANKMASK(UEP2), 1
extern volatile __bit                   EPINEN3             @ (((unsigned) &UEP3)*8) + 1;
#define                                 EPINEN3_bit         BANKMASK(UEP3), 1
extern volatile __bit                   EPINEN4             @ (((unsigned) &UEP4)*8) + 1;
#define                                 EPINEN4_bit         BANKMASK(UEP4), 1
extern volatile __bit                   EPINEN5             @ (((unsigned) &UEP5)*8) + 1;
#define                                 EPINEN5_bit         BANKMASK(UEP5), 1
extern volatile __bit                   EPINEN6             @ (((unsigned) &UEP6)*8) + 1;
#define                                 EPINEN6_bit         BANKMASK(UEP6), 1
extern volatile __bit                   EPINEN7             @ (((unsigned) &UEP7)*8) + 1;
#define                                 EPINEN7_bit         BANKMASK(UEP7), 1
extern volatile __bit                   EPINEN8             @ (((unsigned) &UEP8)*8) + 1;
#define                                 EPINEN8_bit         BANKMASK(UEP8), 1
extern volatile __bit                   EPINEN9             @ (((unsigned) &UEP9)*8) + 1;
#define                                 EPINEN9_bit         BANKMASK(UEP9), 1
extern volatile __bit                   EPOUTEN0            @ (((unsigned) &UEP0)*8) + 2;
#define                                 EPOUTEN0_bit        BANKMASK(UEP0), 2
extern volatile __bit                   EPOUTEN1            @ (((unsigned) &UEP1)*8) + 2;
#define                                 EPOUTEN1_bit        BANKMASK(UEP1), 2
extern volatile __bit                   EPOUTEN10           @ (((unsigned) &UEP10)*8) + 2;
#define                                 EPOUTEN10_bit       BANKMASK(UEP10), 2
extern volatile __bit                   EPOUTEN11           @ (((unsigned) &UEP11)*8) + 2;
#define                                 EPOUTEN11_bit       BANKMASK(UEP11), 2
extern volatile __bit                   EPOUTEN12           @ (((unsigned) &UEP12)*8) + 2;
#define                                 EPOUTEN12_bit       BANKMASK(UEP12), 2
extern volatile __bit                   EPOUTEN13           @ (((unsigned) &UEP13)*8) + 2;
#define                                 EPOUTEN13_bit       BANKMASK(UEP13), 2
extern volatile __bit                   EPOUTEN14           @ (((unsigned) &UEP14)*8) + 2;
#define                                 EPOUTEN14_bit       BANKMASK(UEP14), 2
extern volatile __bit                   EPOUTEN15           @ (((unsigned) &UEP15)*8) + 2;
#define                                 EPOUTEN15_bit       BANKMASK(UEP15), 2
extern volatile __bit                   EPOUTEN2            @ (((unsigned) &UEP2)*8) + 2;
#define                                 EPOUTEN2_bit        BANKMASK(UEP2), 2
extern volatile __bit                   EPOUTEN3            @ (((unsigned) &UEP3)*8) + 2;
#define                                 EPOUTEN3_bit        BANKMASK(UEP3), 2
extern volatile __bit                   EPOUTEN4            @ (((unsigned) &UEP4)*8) + 2;
#define                                 EPOUTEN4_bit        BANKMASK(UEP4), 2
extern volatile __bit                   EPOUTEN5            @ (((unsigned) &UEP5)*8) + 2;
#define                                 EPOUTEN5_bit        BANKMASK(UEP5), 2
extern volatile __bit                   EPOUTEN6            @ (((unsigned) &UEP6)*8) + 2;
#define                                 EPOUTEN6_bit        BANKMASK(UEP6), 2
extern volatile __bit                   EPOUTEN7            @ (((unsigned) &UEP7)*8) + 2;
#define                                 EPOUTEN7_bit        BANKMASK(UEP7), 2
extern volatile __bit                   EPOUTEN8            @ (((unsigned) &UEP8)*8) + 2;
#define                                 EPOUTEN8_bit        BANKMASK(UEP8), 2
extern volatile __bit                   EPOUTEN9            @ (((unsigned) &UEP9)*8) + 2;
#define                                 EPOUTEN9_bit        BANKMASK(UEP9), 2
extern volatile __bit                   EPSTALL0            @ (((unsigned) &UEP0)*8) + 0;
#define                                 EPSTALL0_bit        BANKMASK(UEP0), 0
extern volatile __bit                   EPSTALL1            @ (((unsigned) &UEP1)*8) + 0;
#define                                 EPSTALL1_bit        BANKMASK(UEP1), 0
extern volatile __bit                   EPSTALL10           @ (((unsigned) &UEP10)*8) + 0;
#define                                 EPSTALL10_bit       BANKMASK(UEP10), 0
extern volatile __bit                   EPSTALL11           @ (((unsigned) &UEP11)*8) + 0;
#define                                 EPSTALL11_bit       BANKMASK(UEP11), 0
extern volatile __bit                   EPSTALL12           @ (((unsigned) &UEP12)*8) + 0;
#define                                 EPSTALL12_bit       BANKMASK(UEP12), 0
extern volatile __bit                   EPSTALL13           @ (((unsigned) &UEP13)*8) + 0;
#define                                 EPSTALL13_bit       BANKMASK(UEP13), 0
extern volatile __bit                   EPSTALL14           @ (((unsigned) &UEP14)*8) + 0;
#define                                 EPSTALL14_bit       BANKMASK(UEP14), 0
extern volatile __bit                   EPSTALL15           @ (((unsigned) &UEP15)*8) + 0;
#define                                 EPSTALL15_bit       BANKMASK(UEP15), 0
extern volatile __bit                   EPSTALL2            @ (((unsigned) &UEP2)*8) + 0;
#define                                 EPSTALL2_bit        BANKMASK(UEP2), 0
extern volatile __bit                   EPSTALL3            @ (((unsigned) &UEP3)*8) + 0;
#define                                 EPSTALL3_bit        BANKMASK(UEP3), 0
extern volatile __bit                   EPSTALL4            @ (((unsigned) &UEP4)*8) + 0;
#define                                 EPSTALL4_bit        BANKMASK(UEP4), 0
extern volatile __bit                   EPSTALL5            @ (((unsigned) &UEP5)*8) + 0;
#define                                 EPSTALL5_bit        BANKMASK(UEP5), 0
extern volatile __bit                   EPSTALL6            @ (((unsigned) &UEP6)*8) + 0;
#define                                 EPSTALL6_bit        BANKMASK(UEP6), 0
extern volatile __bit                   EPSTALL7            @ (((unsigned) &UEP7)*8) + 0;
#define                                 EPSTALL7_bit        BANKMASK(UEP7), 0
extern volatile __bit                   EPSTALL8            @ (((unsigned) &UEP8)*8) + 0;
#define                                 EPSTALL8_bit        BANKMASK(UEP8), 0
extern volatile __bit                   EPSTALL9            @ (((unsigned) &UEP9)*8) + 0;
#define                                 EPSTALL9_bit        BANKMASK(UEP9), 0
extern volatile __bit                   FERR                @ (((unsigned) &RCSTA)*8) + 2;
#define                                 FERR_bit            BANKMASK(RCSTA), 2
extern volatile __bit                   FLTS                @ (((unsigned) &OSCCON)*8) + 2;
#define                                 FLTS_bit            BANKMASK(OSCCON), 2
extern volatile __bit                   FREE                @ (((unsigned) &EECON1)*8) + 4;
#define                                 FREE_bit            BANKMASK(EECON1), 4
extern volatile __bit                   FRM0                @ (((unsigned) &UFRML)*8) + 0;
#define                                 FRM0_bit            BANKMASK(UFRML), 0
extern volatile __bit                   FRM1                @ (((unsigned) &UFRML)*8) + 1;
#define                                 FRM1_bit            BANKMASK(UFRML), 1
extern volatile __bit                   FRM10               @ (((unsigned) &UFRMH)*8) + 2;
#define                                 FRM10_bit           BANKMASK(UFRMH), 2
extern volatile __bit                   FRM2                @ (((unsigned) &UFRML)*8) + 2;
#define                                 FRM2_bit            BANKMASK(UFRML), 2
extern volatile __bit                   FRM3                @ (((unsigned) &UFRML)*8) + 3;
#define                                 FRM3_bit            BANKMASK(UFRML), 3
extern volatile __bit                   FRM4                @ (((unsigned) &UFRML)*8) + 4;
#define                                 FRM4_bit            BANKMASK(UFRML), 4
extern volatile __bit                   FRM5                @ (((unsigned) &UFRML)*8) + 5;
#define                                 FRM5_bit            BANKMASK(UFRML), 5
extern volatile __bit                   FRM6                @ (((unsigned) &UFRML)*8) + 6;
#define                                 FRM6_bit            BANKMASK(UFRML), 6
extern volatile __bit                   FRM7                @ (((unsigned) &UFRML)*8) + 7;
#define                                 FRM7_bit            BANKMASK(UFRML), 7
extern volatile __bit                   FRM8                @ (((unsigned) &UFRMH)*8) + 0;
#define                                 FRM8_bit            BANKMASK(UFRMH), 0
extern volatile __bit                   FRM9                @ (((unsigned) &UFRMH)*8) + 1;
#define                                 FRM9_bit            BANKMASK(UFRMH), 1
extern volatile __bit                   FSEN                @ (((unsigned) &UCFG)*8) + 2;
#define                                 FSEN_bit            BANKMASK(UCFG), 2
extern volatile __bit                   GCEN                @ (((unsigned) &SSPCON2)*8) + 7;
#define                                 GCEN_bit            BANKMASK(SSPCON2), 7
extern volatile __bit                   GIE                 @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_bit             BANKMASK(INTCON), 7
extern volatile __bit                   GIEH                @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIEH_bit            BANKMASK(INTCON), 7
extern volatile __bit                   GIEL                @ (((unsigned) &INTCON)*8) + 6;
#define                                 GIEL_bit            BANKMASK(INTCON), 6
extern volatile __bit                   GIE_GIEH            @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_GIEH_bit        BANKMASK(INTCON), 7
extern volatile __bit                   GO                  @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_bit              BANKMASK(ADCON0), 1
extern volatile __bit                   GODONE              @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GODONE_bit          BANKMASK(ADCON0), 1
extern volatile __bit                   GO_DONE             @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_DONE_bit         BANKMASK(ADCON0), 1
extern volatile __bit                   GO_NOT_DONE         @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_NOT_DONE_bit     BANKMASK(ADCON0), 1
extern volatile __bit                   GO_nDONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_nDONE_bit        BANKMASK(ADCON0), 1
extern volatile __bit                   HLVDEN              @ (((unsigned) &HLVDCON)*8) + 4;
#define                                 HLVDEN_bit          BANKMASK(HLVDCON), 4
extern volatile __bit                   HLVDIE              @ (((unsigned) &PIE2)*8) + 2;
#define                                 HLVDIE_bit          BANKMASK(PIE2), 2
extern volatile __bit                   HLVDIF              @ (((unsigned) &PIR2)*8) + 2;
#define                                 HLVDIF_bit          BANKMASK(PIR2), 2
extern volatile __bit                   HLVDIN              @ (((unsigned) &PORTA)*8) + 5;
#define                                 HLVDIN_bit          BANKMASK(PORTA), 5
extern volatile __bit                   HLVDIP              @ (((unsigned) &IPR2)*8) + 2;
#define                                 HLVDIP_bit          BANKMASK(IPR2), 2
extern volatile __bit                   HLVDL0              @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 HLVDL0_bit          BANKMASK(HLVDCON), 0
extern volatile __bit                   HLVDL1              @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 HLVDL1_bit          BANKMASK(HLVDCON), 1
extern volatile __bit                   HLVDL2              @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 HLVDL2_bit          BANKMASK(HLVDCON), 2
extern volatile __bit                   HLVDL3              @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 HLVDL3_bit          BANKMASK(HLVDCON), 3
extern volatile __bit                   I2C_DAT             @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 I2C_DAT_bit         BANKMASK(SSPSTAT), 5
extern volatile __bit                   I2C_READ            @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 I2C_READ_bit        BANKMASK(SSPSTAT), 2
extern volatile __bit                   I2C_START           @ (((unsigned) &SSPSTAT)*8) + 3;
#define                                 I2C_START_bit       BANKMASK(SSPSTAT), 3
extern volatile __bit                   I2C_STOP            @ (((unsigned) &SSPSTAT)*8) + 4;
#define                                 I2C_STOP_bit        BANKMASK(SSPSTAT), 4
extern volatile __bit                   IDLEIE              @ (((unsigned) &UIE)*8) + 4;
#define                                 IDLEIE_bit          BANKMASK(UIE), 4
extern volatile __bit                   IDLEIF              @ (((unsigned) &UIR)*8) + 4;
#define                                 IDLEIF_bit          BANKMASK(UIR), 4
extern volatile __bit                   IDLEN               @ (((unsigned) &OSCCON)*8) + 7;
#define                                 IDLEN_bit           BANKMASK(OSCCON), 7
extern volatile __bit                   INT0                @ (((unsigned) &PORTB)*8) + 0;
#define                                 INT0_bit            BANKMASK(PORTB), 0
extern volatile __bit                   INT0E               @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0E_bit           BANKMASK(INTCON), 4
extern volatile __bit                   INT0F               @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0F_bit           BANKMASK(INTCON), 1
extern volatile __bit                   INT0IE              @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0IE_bit          BANKMASK(INTCON), 4
extern volatile __bit                   INT0IF              @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0IF_bit          BANKMASK(INTCON), 1
extern volatile __bit                   INT1                @ (((unsigned) &PORTB)*8) + 1;
#define                                 INT1_bit            BANKMASK(PORTB), 1
extern volatile __bit                   INT1E               @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1E_bit           BANKMASK(INTCON3), 3
extern volatile __bit                   INT1F               @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1F_bit           BANKMASK(INTCON3), 0
extern volatile __bit                   INT1IE              @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1IE_bit          BANKMASK(INTCON3), 3
extern volatile __bit                   INT1IF              @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1IF_bit          BANKMASK(INTCON3), 0
extern volatile __bit                   INT1IP              @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1IP_bit          BANKMASK(INTCON3), 6
extern volatile __bit                   INT1P               @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1P_bit           BANKMASK(INTCON3), 6
extern volatile __bit                   INT2                @ (((unsigned) &PORTB)*8) + 2;
#define                                 INT2_bit            BANKMASK(PORTB), 2
extern volatile __bit                   INT2E               @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2E_bit           BANKMASK(INTCON3), 4
extern volatile __bit                   INT2F               @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2F_bit           BANKMASK(INTCON3), 1
extern volatile __bit                   INT2IE              @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2IE_bit          BANKMASK(INTCON3), 4
extern volatile __bit                   INT2IF              @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2IF_bit          BANKMASK(INTCON3), 1
extern volatile __bit                   INT2IP              @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2IP_bit          BANKMASK(INTCON3), 7
extern volatile __bit                   INT2P               @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2P_bit           BANKMASK(INTCON3), 7
extern volatile __bit                   INTEDG0             @ (((unsigned) &INTCON2)*8) + 6;
#define                                 INTEDG0_bit         BANKMASK(INTCON2), 6
extern volatile __bit                   INTEDG1             @ (((unsigned) &INTCON2)*8) + 5;
#define                                 INTEDG1_bit         BANKMASK(INTCON2), 5
extern volatile __bit                   INTEDG2             @ (((unsigned) &INTCON2)*8) + 4;
#define                                 INTEDG2_bit         BANKMASK(INTCON2), 4
extern volatile __bit                   INTSRC              @ (((unsigned) &OSCTUNE)*8) + 7;
#define                                 INTSRC_bit          BANKMASK(OSCTUNE), 7
extern volatile __bit                   IOFS                @ (((unsigned) &OSCCON)*8) + 2;
#define                                 IOFS_bit            BANKMASK(OSCCON), 2
extern volatile __bit                   IPEN                @ (((unsigned) &RCON)*8) + 7;
#define                                 IPEN_bit            BANKMASK(RCON), 7
extern volatile __bit                   IRCF0               @ (((unsigned) &OSCCON)*8) + 4;
#define                                 IRCF0_bit           BANKMASK(OSCCON), 4
extern volatile __bit                   IRCF1               @ (((unsigned) &OSCCON)*8) + 5;
#define                                 IRCF1_bit           BANKMASK(OSCCON), 5
extern volatile __bit                   IRCF2               @ (((unsigned) &OSCCON)*8) + 6;
#define                                 IRCF2_bit           BANKMASK(OSCCON), 6
extern volatile __bit                   IRVST               @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 IRVST_bit           BANKMASK(HLVDCON), 5
extern volatile __bit                   IVRST               @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 IVRST_bit           BANKMASK(HLVDCON), 5
extern volatile __bit                   LA0                 @ (((unsigned) &LATA)*8) + 0;
#define                                 LA0_bit             BANKMASK(LATA), 0
extern volatile __bit                   LA1                 @ (((unsigned) &LATA)*8) + 1;
#define                                 LA1_bit             BANKMASK(LATA), 1
extern volatile __bit                   LA2                 @ (((unsigned) &LATA)*8) + 2;
#define                                 LA2_bit             BANKMASK(LATA), 2
extern volatile __bit                   LA3                 @ (((unsigned) &LATA)*8) + 3;
#define                                 LA3_bit             BANKMASK(LATA), 3
extern volatile __bit                   LA4                 @ (((unsigned) &LATA)*8) + 4;
#define                                 LA4_bit             BANKMASK(LATA), 4
extern volatile __bit                   LA5                 @ (((unsigned) &LATA)*8) + 5;
#define                                 LA5_bit             BANKMASK(LATA), 5
extern volatile __bit                   LA6                 @ (((unsigned) &LATA)*8) + 6;
#define                                 LA6_bit             BANKMASK(LATA), 6
extern volatile __bit                   LA7                 @ (((unsigned) &LATA)*8) + 7;
#define                                 LA7_bit             BANKMASK(LATA), 7
extern volatile __bit                   LATA0               @ (((unsigned) &LATA)*8) + 0;
#define                                 LATA0_bit           BANKMASK(LATA), 0
extern volatile __bit                   LATA1               @ (((unsigned) &LATA)*8) + 1;
#define                                 LATA1_bit           BANKMASK(LATA), 1
extern volatile __bit                   LATA2               @ (((unsigned) &LATA)*8) + 2;
#define                                 LATA2_bit           BANKMASK(LATA), 2
extern volatile __bit                   LATA3               @ (((unsigned) &LATA)*8) + 3;
#define                                 LATA3_bit           BANKMASK(LATA), 3
extern volatile __bit                   LATA4               @ (((unsigned) &LATA)*8) + 4;
#define                                 LATA4_bit           BANKMASK(LATA), 4
extern volatile __bit                   LATA5               @ (((unsigned) &LATA)*8) + 5;
#define                                 LATA5_bit           BANKMASK(LATA), 5
extern volatile __bit                   LATA6               @ (((unsigned) &LATA)*8) + 6;
#define                                 LATA6_bit           BANKMASK(LATA), 6
extern volatile __bit                   LATA7               @ (((unsigned) &LATA)*8) + 7;
#define                                 LATA7_bit           BANKMASK(LATA), 7
extern volatile __bit                   LATB0               @ (((unsigned) &LATB)*8) + 0;
#define                                 LATB0_bit           BANKMASK(LATB), 0
extern volatile __bit                   LATB1               @ (((unsigned) &LATB)*8) + 1;
#define                                 LATB1_bit           BANKMASK(LATB), 1
extern volatile __bit                   LATB2               @ (((unsigned) &LATB)*8) + 2;
#define                                 LATB2_bit           BANKMASK(LATB), 2
extern volatile __bit                   LATB3               @ (((unsigned) &LATB)*8) + 3;
#define                                 LATB3_bit           BANKMASK(LATB), 3
extern volatile __bit                   LATB4               @ (((unsigned) &LATB)*8) + 4;
#define                                 LATB4_bit           BANKMASK(LATB), 4
extern volatile __bit                   LATB5               @ (((unsigned) &LATB)*8) + 5;
#define                                 LATB5_bit           BANKMASK(LATB), 5
extern volatile __bit                   LATB6               @ (((unsigned) &LATB)*8) + 6;
#define                                 LATB6_bit           BANKMASK(LATB), 6
extern volatile __bit                   LATB7               @ (((unsigned) &LATB)*8) + 7;
#define                                 LATB7_bit           BANKMASK(LATB), 7
extern volatile __bit                   LATC0               @ (((unsigned) &LATC)*8) + 0;
#define                                 LATC0_bit           BANKMASK(LATC), 0
extern volatile __bit                   LATC1               @ (((unsigned) &LATC)*8) + 1;
#define                                 LATC1_bit           BANKMASK(LATC), 1
extern volatile __bit                   LATC2               @ (((unsigned) &LATC)*8) + 2;
#define                                 LATC2_bit           BANKMASK(LATC), 2
extern volatile __bit                   LATC6               @ (((unsigned) &LATC)*8) + 6;
#define                                 LATC6_bit           BANKMASK(LATC), 6
extern volatile __bit                   LATC7               @ (((unsigned) &LATC)*8) + 7;
#define                                 LATC7_bit           BANKMASK(LATC), 7
extern volatile __bit                   LATD0               @ (((unsigned) &LATD)*8) + 0;
#define                                 LATD0_bit           BANKMASK(LATD), 0
extern volatile __bit                   LATD1               @ (((unsigned) &LATD)*8) + 1;
#define                                 LATD1_bit           BANKMASK(LATD), 1
extern volatile __bit                   LATD2               @ (((unsigned) &LATD)*8) + 2;
#define                                 LATD2_bit           BANKMASK(LATD), 2
extern volatile __bit                   LATD3               @ (((unsigned) &LATD)*8) + 3;
#define                                 LATD3_bit           BANKMASK(LATD), 3
extern volatile __bit                   LATD4               @ (((unsigned) &LATD)*8) + 4;
#define                                 LATD4_bit           BANKMASK(LATD), 4
extern volatile __bit                   LATD5               @ (((unsigned) &LATD)*8) + 5;
#define                                 LATD5_bit           BANKMASK(LATD), 5
extern volatile __bit                   LATD6               @ (((unsigned) &LATD)*8) + 6;
#define                                 LATD6_bit           BANKMASK(LATD), 6
extern volatile __bit                   LATD7               @ (((unsigned) &LATD)*8) + 7;
#define                                 LATD7_bit           BANKMASK(LATD), 7
extern volatile __bit                   LATE0               @ (((unsigned) &LATE)*8) + 0;
#define                                 LATE0_bit           BANKMASK(LATE), 0
extern volatile __bit                   LATE1               @ (((unsigned) &LATE)*8) + 1;
#define                                 LATE1_bit           BANKMASK(LATE), 1
extern volatile __bit                   LATE2               @ (((unsigned) &LATE)*8) + 2;
#define                                 LATE2_bit           BANKMASK(LATE), 2
extern volatile __bit                   LB0                 @ (((unsigned) &LATB)*8) + 0;
#define                                 LB0_bit             BANKMASK(LATB), 0
extern volatile __bit                   LB1                 @ (((unsigned) &LATB)*8) + 1;
#define                                 LB1_bit             BANKMASK(LATB), 1
extern volatile __bit                   LB2                 @ (((unsigned) &LATB)*8) + 2;
#define                                 LB2_bit             BANKMASK(LATB), 2
extern volatile __bit                   LB3                 @ (((unsigned) &LATB)*8) + 3;
#define                                 LB3_bit             BANKMASK(LATB), 3
extern volatile __bit                   LB4                 @ (((unsigned) &LATB)*8) + 4;
#define                                 LB4_bit             BANKMASK(LATB), 4
extern volatile __bit                   LB5                 @ (((unsigned) &LATB)*8) + 5;
#define                                 LB5_bit             BANKMASK(LATB), 5
extern volatile __bit                   LB6                 @ (((unsigned) &LATB)*8) + 6;
#define                                 LB6_bit             BANKMASK(LATB), 6
extern volatile __bit                   LB7                 @ (((unsigned) &LATB)*8) + 7;
#define                                 LB7_bit             BANKMASK(LATB), 7
extern volatile __bit                   LC0                 @ (((unsigned) &LATC)*8) + 0;
#define                                 LC0_bit             BANKMASK(LATC), 0
extern volatile __bit                   LC1                 @ (((unsigned) &LATC)*8) + 1;
#define                                 LC1_bit             BANKMASK(LATC), 1
extern volatile __bit                   LC2                 @ (((unsigned) &LATC)*8) + 2;
#define                                 LC2_bit             BANKMASK(LATC), 2
extern volatile __bit                   LC3                 @ (((unsigned) &LATC)*8) + 3;
#define                                 LC3_bit             BANKMASK(LATC), 3
extern volatile __bit                   LC4                 @ (((unsigned) &LATC)*8) + 4;
#define                                 LC4_bit             BANKMASK(LATC), 4
extern volatile __bit                   LC5                 @ (((unsigned) &LATC)*8) + 5;
#define                                 LC5_bit             BANKMASK(LATC), 5
extern volatile __bit                   LC6                 @ (((unsigned) &LATC)*8) + 6;
#define                                 LC6_bit             BANKMASK(LATC), 6
extern volatile __bit                   LC7                 @ (((unsigned) &LATC)*8) + 7;
#define                                 LC7_bit             BANKMASK(LATC), 7
extern volatile __bit                   LD0                 @ (((unsigned) &LATD)*8) + 0;
#define                                 LD0_bit             BANKMASK(LATD), 0
extern volatile __bit                   LD1                 @ (((unsigned) &LATD)*8) + 1;
#define                                 LD1_bit             BANKMASK(LATD), 1
extern volatile __bit                   LD2                 @ (((unsigned) &LATD)*8) + 2;
#define                                 LD2_bit             BANKMASK(LATD), 2
extern volatile __bit                   LD3                 @ (((unsigned) &LATD)*8) + 3;
#define                                 LD3_bit             BANKMASK(LATD), 3
extern volatile __bit                   LD4                 @ (((unsigned) &LATD)*8) + 4;
#define                                 LD4_bit             BANKMASK(LATD), 4
extern volatile __bit                   LD5                 @ (((unsigned) &LATD)*8) + 5;
#define                                 LD5_bit             BANKMASK(LATD), 5
extern volatile __bit                   LD6                 @ (((unsigned) &LATD)*8) + 6;
#define                                 LD6_bit             BANKMASK(LATD), 6
extern volatile __bit                   LD7                 @ (((unsigned) &LATD)*8) + 7;
#define                                 LD7_bit             BANKMASK(LATD), 7
extern volatile __bit                   LE0                 @ (((unsigned) &LATE)*8) + 0;
#define                                 LE0_bit             BANKMASK(LATE), 0
extern volatile __bit                   LE1                 @ (((unsigned) &LATE)*8) + 1;
#define                                 LE1_bit             BANKMASK(LATE), 1
extern volatile __bit                   LE2                 @ (((unsigned) &LATE)*8) + 2;
#define                                 LE2_bit             BANKMASK(LATE), 2
extern volatile __bit                   LE3                 @ (((unsigned) &LATE)*8) + 3;
#define                                 LE3_bit             BANKMASK(LATE), 3
extern volatile __bit                   LE4                 @ (((unsigned) &LATE)*8) + 4;
#define                                 LE4_bit             BANKMASK(LATE), 4
extern volatile __bit                   LE5                 @ (((unsigned) &LATE)*8) + 5;
#define                                 LE5_bit             BANKMASK(LATE), 5
extern volatile __bit                   LE6                 @ (((unsigned) &LATE)*8) + 6;
#define                                 LE6_bit             BANKMASK(LATE), 6
extern volatile __bit                   LE7                 @ (((unsigned) &LATE)*8) + 7;
#define                                 LE7_bit             BANKMASK(LATE), 7
extern volatile __bit                   LVDEN               @ (((unsigned) &HLVDCON)*8) + 4;
#define                                 LVDEN_bit           BANKMASK(HLVDCON), 4
extern volatile __bit                   LVDIE               @ (((unsigned) &PIE2)*8) + 2;
#define                                 LVDIE_bit           BANKMASK(PIE2), 2
extern volatile __bit                   LVDIF               @ (((unsigned) &PIR2)*8) + 2;
#define                                 LVDIF_bit           BANKMASK(PIR2), 2
extern volatile __bit                   LVDIN               @ (((unsigned) &PORTA)*8) + 5;
#define                                 LVDIN_bit           BANKMASK(PORTA), 5
extern volatile __bit                   LVDIP               @ (((unsigned) &IPR2)*8) + 2;
#define                                 LVDIP_bit           BANKMASK(IPR2), 2
extern volatile __bit                   LVDL0               @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 LVDL0_bit           BANKMASK(HLVDCON), 0
extern volatile __bit                   LVDL1               @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 LVDL1_bit           BANKMASK(HLVDCON), 1
extern volatile __bit                   LVDL2               @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 LVDL2_bit           BANKMASK(HLVDCON), 2
extern volatile __bit                   LVDL3               @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 LVDL3_bit           BANKMASK(HLVDCON), 3
extern volatile __bit                   LVV0                @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 LVV0_bit            BANKMASK(HLVDCON), 0
extern volatile __bit                   LVV1                @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 LVV1_bit            BANKMASK(HLVDCON), 1
extern volatile __bit                   LVV2                @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 LVV2_bit            BANKMASK(HLVDCON), 2
extern volatile __bit                   LVV3                @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 LVV3_bit            BANKMASK(HLVDCON), 3
extern volatile __bit                   NEGATIVE            @ (((unsigned) &STATUS)*8) + 4;
#define                                 NEGATIVE_bit        BANKMASK(STATUS), 4
extern volatile __bit                   NOT_A               @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_A_bit           BANKMASK(SSPSTAT), 5
extern volatile __bit                   NOT_ADDRESS         @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_ADDRESS_bit     BANKMASK(SSPSTAT), 5
extern volatile __bit                   NOT_BOR             @ (((unsigned) &RCON)*8) + 0;
#define                                 NOT_BOR_bit         BANKMASK(RCON), 0
extern volatile __bit                   NOT_DONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 NOT_DONE_bit        BANKMASK(ADCON0), 1
extern volatile __bit                   NOT_IPEN            @ (((unsigned) &RCON)*8) + 7;
#define                                 NOT_IPEN_bit        BANKMASK(RCON), 7
extern volatile __bit                   NOT_PD              @ (((unsigned) &RCON)*8) + 2;
#define                                 NOT_PD_bit          BANKMASK(RCON), 2
extern volatile __bit                   NOT_POR             @ (((unsigned) &RCON)*8) + 1;
#define                                 NOT_POR_bit         BANKMASK(RCON), 1
extern volatile __bit                   NOT_RBPU            @ (((unsigned) &INTCON2)*8) + 7;
#define                                 NOT_RBPU_bit        BANKMASK(INTCON2), 7
extern volatile __bit                   NOT_RI              @ (((unsigned) &RCON)*8) + 4;
#define                                 NOT_RI_bit          BANKMASK(RCON), 4
extern volatile __bit                   NOT_T1SYNC          @ (((unsigned) &T1CON)*8) + 2;
#define                                 NOT_T1SYNC_bit      BANKMASK(T1CON), 2
extern volatile __bit                   NOT_T3SYNC          @ (((unsigned) &T3CON)*8) + 2;
#define                                 NOT_T3SYNC_bit      BANKMASK(T3CON), 2
extern volatile __bit                   NOT_TO              @ (((unsigned) &RCON)*8) + 3;
#define                                 NOT_TO_bit          BANKMASK(RCON), 3
extern volatile __bit                   NOT_W               @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_W_bit           BANKMASK(SSPSTAT), 2
extern volatile __bit                   NOT_WRITE           @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_WRITE_bit       BANKMASK(SSPSTAT), 2
extern volatile __bit                   OERR                @ (((unsigned) &RCSTA)*8) + 1;
#define                                 OERR_bit            BANKMASK(RCSTA), 1
extern volatile __bit                   OESPP               @ (((unsigned) &PORTE)*8) + 2;
#define                                 OESPP_bit           BANKMASK(PORTE), 2
extern volatile __bit                   OSC2                @ (((unsigned) &PORTA)*8) + 6;
#define                                 OSC2_bit            BANKMASK(PORTA), 6
extern volatile __bit                   OSCFIE              @ (((unsigned) &PIE2)*8) + 7;
#define                                 OSCFIE_bit          BANKMASK(PIE2), 7
extern volatile __bit                   OSCFIF              @ (((unsigned) &PIR2)*8) + 7;
#define                                 OSCFIF_bit          BANKMASK(PIR2), 7
extern volatile __bit                   OSCFIP              @ (((unsigned) &IPR2)*8) + 7;
#define                                 OSCFIP_bit          BANKMASK(IPR2), 7
extern volatile __bit                   OSTS                @ (((unsigned) &OSCCON)*8) + 3;
#define                                 OSTS_bit            BANKMASK(OSCCON), 3
extern volatile __bit                   OV                  @ (((unsigned) &STATUS)*8) + 3;
#define                                 OV_bit              BANKMASK(STATUS), 3
extern volatile __bit                   OVERFLOW            @ (((unsigned) &STATUS)*8) + 3;
#define                                 OVERFLOW_bit        BANKMASK(STATUS), 3
extern volatile __bit                   P1A                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 P1A_bit             BANKMASK(PORTC), 2
extern volatile __bit                   P1M0                @ (((unsigned) &CCP1CON)*8) + 6;
#define                                 P1M0_bit            BANKMASK(CCP1CON), 6
extern volatile __bit                   P1M1                @ (((unsigned) &CCP1CON)*8) + 7;
#define                                 P1M1_bit            BANKMASK(CCP1CON), 7
extern volatile __bit                   PA1                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 PA1_bit             BANKMASK(PORTC), 2
extern volatile __bit                   PA2                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 PA2_bit             BANKMASK(PORTC), 1
extern volatile __bit                   PA2E                @ (((unsigned) &PORTE)*8) + 7;
#define                                 PA2E_bit            BANKMASK(PORTE), 7
extern volatile __bit                   PB1E                @ (((unsigned) &PORTE)*8) + 6;
#define                                 PB1E_bit            BANKMASK(PORTE), 6
extern volatile __bit                   PB2                 @ (((unsigned) &PORTE)*8) + 2;
#define                                 PB2_bit             BANKMASK(PORTE), 2
extern volatile __bit                   PB3E                @ (((unsigned) &PORTE)*8) + 4;
#define                                 PB3E_bit            BANKMASK(PORTE), 4
extern volatile __bit                   PC1E                @ (((unsigned) &PORTE)*8) + 5;
#define                                 PC1E_bit            BANKMASK(PORTE), 5
extern volatile __bit                   PC2                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 PC2_bit             BANKMASK(PORTE), 1
extern volatile __bit                   PC3E                @ (((unsigned) &PORTE)*8) + 3;
#define                                 PC3E_bit            BANKMASK(PORTE), 3
extern volatile __bit                   PCFG0               @ (((unsigned) &ADCON1)*8) + 0;
#define                                 PCFG0_bit           BANKMASK(ADCON1), 0
extern volatile __bit                   PCFG1               @ (((unsigned) &ADCON1)*8) + 1;
#define                                 PCFG1_bit           BANKMASK(ADCON1), 1
extern volatile __bit                   PCFG2               @ (((unsigned) &ADCON1)*8) + 2;
#define                                 PCFG2_bit           BANKMASK(ADCON1), 2
extern volatile __bit                   PCFG3               @ (((unsigned) &ADCON1)*8) + 3;
#define                                 PCFG3_bit           BANKMASK(ADCON1), 3
extern volatile __bit                   PD                  @ (((unsigned) &RCON)*8) + 2;
#define                                 PD_bit              BANKMASK(RCON), 2
extern volatile __bit                   PD2                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 PD2_bit             BANKMASK(PORTE), 0
extern volatile __bit                   PDC0                @ (((unsigned) &ECCP1DEL)*8) + 0;
#define                                 PDC0_bit            BANKMASK(ECCP1DEL), 0
extern volatile __bit                   PDC1                @ (((unsigned) &ECCP1DEL)*8) + 1;
#define                                 PDC1_bit            BANKMASK(ECCP1DEL), 1
extern volatile __bit                   PDC2                @ (((unsigned) &ECCP1DEL)*8) + 2;
#define                                 PDC2_bit            BANKMASK(ECCP1DEL), 2
extern volatile __bit                   PDC3                @ (((unsigned) &ECCP1DEL)*8) + 3;
#define                                 PDC3_bit            BANKMASK(ECCP1DEL), 3
extern volatile __bit                   PDC4                @ (((unsigned) &ECCP1DEL)*8) + 4;
#define                                 PDC4_bit            BANKMASK(ECCP1DEL), 4
extern volatile __bit                   PDC5                @ (((unsigned) &ECCP1DEL)*8) + 5;
#define                                 PDC5_bit            BANKMASK(ECCP1DEL), 5
extern volatile __bit                   PDC6                @ (((unsigned) &ECCP1DEL)*8) + 6;
#define                                 PDC6_bit            BANKMASK(ECCP1DEL), 6
extern volatile __bit                   PEIE                @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_bit            BANKMASK(INTCON), 6
extern volatile __bit                   PEIE_GIEL           @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_GIEL_bit       BANKMASK(INTCON), 6
extern volatile __bit                   PEN                 @ (((unsigned) &SSPCON2)*8) + 2;
#define                                 PEN_bit             BANKMASK(SSPCON2), 2
extern volatile __bit                   PGC                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 PGC_bit             BANKMASK(PORTB), 6
extern volatile __bit                   PGD                 @ (((unsigned) &PORTB)*8) + 7;
#define                                 PGD_bit             BANKMASK(PORTB), 7
extern volatile __bit                   PGM                 @ (((unsigned) &PORTB)*8) + 5;
#define                                 PGM_bit             BANKMASK(PORTB), 5
extern volatile __bit                   PIDEE               @ (((unsigned) &UEIE)*8) + 0;
#define                                 PIDEE_bit           BANKMASK(UEIE), 0
extern volatile __bit                   PIDEF               @ (((unsigned) &UEIR)*8) + 0;
#define                                 PIDEF_bit           BANKMASK(UEIR), 0
extern volatile __bit                   PKTDIS              @ (((unsigned) &UCON)*8) + 4;
#define                                 PKTDIS_bit          BANKMASK(UCON), 4
extern volatile __bit                   POR                 @ (((unsigned) &RCON)*8) + 1;
#define                                 POR_bit             BANKMASK(RCON), 1
extern volatile __bit                   PPB0                @ (((unsigned) &UCFG)*8) + 0;
#define                                 PPB0_bit            BANKMASK(UCFG), 0
extern volatile __bit                   PPB1                @ (((unsigned) &UCFG)*8) + 1;
#define                                 PPB1_bit            BANKMASK(UCFG), 1
extern volatile __bit                   PPBI                @ (((unsigned) &USTAT)*8) + 1;
#define                                 PPBI_bit            BANKMASK(USTAT), 1
extern volatile __bit                   PPBRST              @ (((unsigned) &UCON)*8) + 6;
#define                                 PPBRST_bit          BANKMASK(UCON), 6
extern volatile __bit                   PRSEN               @ (((unsigned) &ECCP1DEL)*8) + 7;
#define                                 PRSEN_bit           BANKMASK(ECCP1DEL), 7
extern volatile __bit                   PSA                 @ (((unsigned) &T0CON)*8) + 3;
#define                                 PSA_bit             BANKMASK(T0CON), 3
extern volatile __bit                   PSPIE               @ (((unsigned) &PIE1)*8) + 7;
#define                                 PSPIE_bit           BANKMASK(PIE1), 7
extern volatile __bit                   PSPIF               @ (((unsigned) &PIR1)*8) + 7;
#define                                 PSPIF_bit           BANKMASK(PIR1), 7
extern volatile __bit                   PSPIP               @ (((unsigned) &IPR1)*8) + 7;
#define                                 PSPIP_bit           BANKMASK(IPR1), 7
extern volatile __bit                   PSSAC0              @ (((unsigned) &ECCP1AS)*8) + 2;
#define                                 PSSAC0_bit          BANKMASK(ECCP1AS), 2
extern volatile __bit                   PSSAC1              @ (((unsigned) &ECCP1AS)*8) + 3;
#define                                 PSSAC1_bit          BANKMASK(ECCP1AS), 3
extern volatile __bit                   PSSBD0              @ (((unsigned) &ECCP1AS)*8) + 0;
#define                                 PSSBD0_bit          BANKMASK(ECCP1AS), 0
extern volatile __bit                   PSSBD1              @ (((unsigned) &ECCP1AS)*8) + 1;
#define                                 PSSBD1_bit          BANKMASK(ECCP1AS), 1
extern volatile __bit _DEPRECATED       RA0                 @ (((unsigned) &PORTA)*8) + 0;
#define                                 RA0_bit             BANKMASK(PORTA), 0
extern volatile __bit _DEPRECATED       RA1                 @ (((unsigned) &PORTA)*8) + 1;
#define                                 RA1_bit             BANKMASK(PORTA), 1
extern volatile __bit _DEPRECATED       RA2                 @ (((unsigned) &PORTA)*8) + 2;
#define                                 RA2_bit             BANKMASK(PORTA), 2
extern volatile __bit _DEPRECATED       RA3                 @ (((unsigned) &PORTA)*8) + 3;
#define                                 RA3_bit             BANKMASK(PORTA), 3
extern volatile __bit _DEPRECATED       RA4                 @ (((unsigned) &PORTA)*8) + 4;
#define                                 RA4_bit             BANKMASK(PORTA), 4
extern volatile __bit _DEPRECATED       RA5                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 RA5_bit             BANKMASK(PORTA), 5
extern volatile __bit _DEPRECATED       RA6                 @ (((unsigned) &PORTA)*8) + 6;
#define                                 RA6_bit             BANKMASK(PORTA), 6
extern volatile __bit                   RA7                 @ (((unsigned) &PORTA)*8) + 7;
#define                                 RA7_bit             BANKMASK(PORTA), 7
extern volatile __bit _DEPRECATED       RB0                 @ (((unsigned) &PORTB)*8) + 0;
#define                                 RB0_bit             BANKMASK(PORTB), 0
extern volatile __bit _DEPRECATED       RB1                 @ (((unsigned) &PORTB)*8) + 1;
#define                                 RB1_bit             BANKMASK(PORTB), 1
extern volatile __bit _DEPRECATED       RB2                 @ (((unsigned) &PORTB)*8) + 2;
#define                                 RB2_bit             BANKMASK(PORTB), 2
extern volatile __bit _DEPRECATED       RB3                 @ (((unsigned) &PORTB)*8) + 3;
#define                                 RB3_bit             BANKMASK(PORTB), 3
extern volatile __bit _DEPRECATED       RB4                 @ (((unsigned) &PORTB)*8) + 4;
#define                                 RB4_bit             BANKMASK(PORTB), 4
extern volatile __bit _DEPRECATED       RB5                 @ (((unsigned) &PORTB)*8) + 5;
#define                                 RB5_bit             BANKMASK(PORTB), 5
extern volatile __bit _DEPRECATED       RB6                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 RB6_bit             BANKMASK(PORTB), 6
extern volatile __bit _DEPRECATED       RB7                 @ (((unsigned) &PORTB)*8) + 7;
#define                                 RB7_bit             BANKMASK(PORTB), 7
extern volatile __bit                   RBIE                @ (((unsigned) &INTCON)*8) + 3;
#define                                 RBIE_bit            BANKMASK(INTCON), 3
extern volatile __bit                   RBIF                @ (((unsigned) &INTCON)*8) + 0;
#define                                 RBIF_bit            BANKMASK(INTCON), 0
extern volatile __bit                   RBIP                @ (((unsigned) &INTCON2)*8) + 0;
#define                                 RBIP_bit            BANKMASK(INTCON2), 0
extern volatile __bit                   RBPU                @ (((unsigned) &INTCON2)*8) + 7;
#define                                 RBPU_bit            BANKMASK(INTCON2), 7
extern volatile __bit _DEPRECATED       RC0                 @ (((unsigned) &PORTC)*8) + 0;
#define                                 RC0_bit             BANKMASK(PORTC), 0
extern volatile __bit _DEPRECATED       RC1                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 RC1_bit             BANKMASK(PORTC), 1
extern volatile __bit                   RC1IE               @ (((unsigned) &PIE1)*8) + 5;
#define                                 RC1IE_bit           BANKMASK(PIE1), 5
extern volatile __bit                   RC1IF               @ (((unsigned) &PIR1)*8) + 5;
#define                                 RC1IF_bit           BANKMASK(PIR1), 5
extern volatile __bit                   RC1IP               @ (((unsigned) &IPR1)*8) + 5;
#define                                 RC1IP_bit           BANKMASK(IPR1), 5
extern volatile __bit _DEPRECATED       RC2                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 RC2_bit             BANKMASK(PORTC), 2
extern volatile __bit                   RC3                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 RC3_bit             BANKMASK(PORTC), 3
extern volatile __bit                   RC4                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 RC4_bit             BANKMASK(PORTC), 4
extern volatile __bit                   RC5                 @ (((unsigned) &PORTC)*8) + 5;
#define                                 RC5_bit             BANKMASK(PORTC), 5
extern volatile __bit _DEPRECATED       RC6                 @ (((unsigned) &PORTC)*8) + 6;
#define                                 RC6_bit             BANKMASK(PORTC), 6
extern volatile __bit _DEPRECATED       RC7                 @ (((unsigned) &PORTC)*8) + 7;
#define                                 RC7_bit             BANKMASK(PORTC), 7
extern volatile __bit                   RC8_9               @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RC8_9_bit           BANKMASK(RCSTA), 6
extern volatile __bit                   RC9                 @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RC9_bit             BANKMASK(RCSTA), 6
extern volatile __bit                   RCD8                @ (((unsigned) &RCSTA)*8) + 0;
#define                                 RCD8_bit            BANKMASK(RCSTA), 0
extern volatile __bit                   RCEN                @ (((unsigned) &SSPCON2)*8) + 3;
#define                                 RCEN_bit            BANKMASK(SSPCON2), 3
extern volatile __bit                   RCIDL               @ (((unsigned) &BAUDCON)*8) + 6;
#define                                 RCIDL_bit           BANKMASK(BAUDCON), 6
extern volatile __bit                   RCIE                @ (((unsigned) &PIE1)*8) + 5;
#define                                 RCIE_bit            BANKMASK(PIE1), 5
extern volatile __bit                   RCIF                @ (((unsigned) &PIR1)*8) + 5;
#define                                 RCIF_bit            BANKMASK(PIR1), 5
extern volatile __bit                   RCIP                @ (((unsigned) &IPR1)*8) + 5;
#define                                 RCIP_bit            BANKMASK(IPR1), 5
extern volatile __bit                   RCMT                @ (((unsigned) &BAUDCON)*8) + 6;
#define                                 RCMT_bit            BANKMASK(BAUDCON), 6
extern volatile __bit                   RD                  @ (((unsigned) &EECON1)*8) + 0;
#define                                 RD_bit              BANKMASK(EECON1), 0
extern volatile __bit _DEPRECATED       RD0                 @ (((unsigned) &PORTD)*8) + 0;
#define                                 RD0_bit             BANKMASK(PORTD), 0
extern volatile __bit _DEPRECATED       RD1                 @ (((unsigned) &PORTD)*8) + 1;
#define                                 RD1_bit             BANKMASK(PORTD), 1
extern volatile __bit                   RD163               @ (((unsigned) &T3CON)*8) + 7;
#define                                 RD163_bit           BANKMASK(T3CON), 7
extern volatile __bit _DEPRECATED       RD2                 @ (((unsigned) &PORTD)*8) + 2;
#define                                 RD2_bit             BANKMASK(PORTD), 2
extern volatile __bit _DEPRECATED       RD3                 @ (((unsigned) &PORTD)*8) + 3;
#define                                 RD3_bit             BANKMASK(PORTD), 3
extern volatile __bit _DEPRECATED       RD4                 @ (((unsigned) &PORTD)*8) + 4;
#define                                 RD4_bit             BANKMASK(PORTD), 4
extern volatile __bit _DEPRECATED       RD5                 @ (((unsigned) &PORTD)*8) + 5;
#define                                 RD5_bit             BANKMASK(PORTD), 5
extern volatile __bit _DEPRECATED       RD6                 @ (((unsigned) &PORTD)*8) + 6;
#define                                 RD6_bit             BANKMASK(PORTD), 6
extern volatile __bit _DEPRECATED       RD7                 @ (((unsigned) &PORTD)*8) + 7;
#define                                 RD7_bit             BANKMASK(PORTD), 7
extern volatile __bit                   RDE                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 RDE_bit             BANKMASK(PORTE), 0
extern volatile __bit                   RDPU                @ (((unsigned) &PORTE)*8) + 7;
#define                                 RDPU_bit            BANKMASK(PORTE), 7
extern volatile __bit                   RDSPP               @ (((unsigned) &SPPEPS)*8) + 7;
#define                                 RDSPP_bit           BANKMASK(SPPEPS), 7
extern volatile __bit _DEPRECATED       RE0                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 RE0_bit             BANKMASK(PORTE), 0
extern volatile __bit _DEPRECATED       RE1                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 RE1_bit             BANKMASK(PORTE), 1
extern volatile __bit _DEPRECATED       RE2                 @ (((unsigned) &PORTE)*8) + 2;
#define                                 RE2_bit             BANKMASK(PORTE), 2
extern volatile __bit                   RE3                 @ (((unsigned) &PORTE)*8) + 3;
#define                                 RE3_bit             BANKMASK(PORTE), 3
extern volatile __bit                   RE4                 @ (((unsigned) &PORTE)*8) + 4;
#define                                 RE4_bit             BANKMASK(PORTE), 4
extern volatile __bit                   RE5                 @ (((unsigned) &PORTE)*8) + 5;
#define                                 RE5_bit             BANKMASK(PORTE), 5
extern volatile __bit                   RE6                 @ (((unsigned) &PORTE)*8) + 6;
#define                                 RE6_bit             BANKMASK(PORTE), 6
extern volatile __bit                   RE7                 @ (((unsigned) &PORTE)*8) + 7;
#define                                 RE7_bit             BANKMASK(PORTE), 7
extern volatile __bit                   READ_WRITE          @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 READ_WRITE_bit      BANKMASK(SSPSTAT), 2
extern volatile __bit                   RESUME              @ (((unsigned) &UCON)*8) + 2;
#define                                 RESUME_bit          BANKMASK(UCON), 2
extern volatile __bit                   RI                  @ (((unsigned) &RCON)*8) + 4;
#define                                 RI_bit              BANKMASK(RCON), 4
extern volatile __bit                   RJPU                @ (((unsigned) &PORTA)*8) + 7;
#define                                 RJPU_bit            BANKMASK(PORTA), 7
extern volatile __bit                   RSEN                @ (((unsigned) &SSPCON2)*8) + 1;
#define                                 RSEN_bit            BANKMASK(SSPCON2), 1
extern volatile __bit                   RW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 RW_bit              BANKMASK(SSPSTAT), 2
extern volatile __bit                   RX                  @ (((unsigned) &PORTC)*8) + 7;
#define                                 RX_bit              BANKMASK(PORTC), 7
extern volatile __bit                   RX9                 @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RX9_bit             BANKMASK(RCSTA), 6
extern volatile __bit                   RX9D                @ (((unsigned) &RCSTA)*8) + 0;
#define                                 RX9D_bit            BANKMASK(RCSTA), 0
extern volatile __bit                   RXCKP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 RXCKP_bit           BANKMASK(BAUDCON), 5
extern volatile __bit                   RXDTP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 RXDTP_bit           BANKMASK(BAUDCON), 5
extern volatile __bit                   R_NOT_W             @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_NOT_W_bit         BANKMASK(SSPSTAT), 2
extern volatile __bit                   R_W                 @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_W_bit             BANKMASK(SSPSTAT), 2
extern volatile __bit                   R_nW                @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_nW_bit            BANKMASK(SSPSTAT), 2
extern volatile __bit                   SBOREN              @ (((unsigned) &RCON)*8) + 6;
#define                                 SBOREN_bit          BANKMASK(RCON), 6
extern volatile __bit                   SCKP                @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 SCKP_bit            BANKMASK(BAUDCON), 4
extern volatile __bit                   SCS0                @ (((unsigned) &OSCCON)*8) + 0;
#define                                 SCS0_bit            BANKMASK(OSCCON), 0
extern volatile __bit                   SCS1                @ (((unsigned) &OSCCON)*8) + 1;
#define                                 SCS1_bit            BANKMASK(OSCCON), 1
extern volatile __bit                   SE0                 @ (((unsigned) &UCON)*8) + 5;
#define                                 SE0_bit             BANKMASK(UCON), 5
extern volatile __bit                   SEN                 @ (((unsigned) &SSPCON2)*8) + 0;
#define                                 SEN_bit             BANKMASK(SSPCON2), 0
extern volatile __bit                   SENDB               @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB_bit           BANKMASK(TXSTA), 3
extern volatile __bit                   SENDB1              @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB1_bit          BANKMASK(TXSTA), 3
extern volatile __bit                   SMP                 @ (((unsigned) &SSPSTAT)*8) + 7;
#define                                 SMP_bit             BANKMASK(SSPSTAT), 7
extern volatile __bit                   SOFIE               @ (((unsigned) &UIE)*8) + 6;
#define                                 SOFIE_bit           BANKMASK(UIE), 6
extern volatile __bit                   SOFIF               @ (((unsigned) &UIR)*8) + 6;
#define                                 SOFIF_bit           BANKMASK(UIR), 6
extern volatile __bit                   SOSCEN              @ (((unsigned) &T1CON)*8) + 3;
#define                                 SOSCEN_bit          BANKMASK(T1CON), 3
extern volatile __bit                   SOSCEN3             @ (((unsigned) &T3CON)*8) + 3;
#define                                 SOSCEN3_bit         BANKMASK(T3CON), 3
extern volatile __bit                   SPEN                @ (((unsigned) &RCSTA)*8) + 7;
#define                                 SPEN_bit            BANKMASK(RCSTA), 7
extern volatile __bit                   SPP0                @ (((unsigned) &PORTD)*8) + 0;
#define                                 SPP0_bit            BANKMASK(PORTD), 0
extern volatile __bit                   SPP1                @ (((unsigned) &PORTD)*8) + 1;
#define                                 SPP1_bit            BANKMASK(PORTD), 1
extern volatile __bit                   SPP2                @ (((unsigned) &PORTD)*8) + 2;
#define                                 SPP2_bit            BANKMASK(PORTD), 2
extern volatile __bit                   SPP3                @ (((unsigned) &PORTD)*8) + 3;
#define                                 SPP3_bit            BANKMASK(PORTD), 3
extern volatile __bit                   SPP4                @ (((unsigned) &PORTD)*8) + 4;
#define                                 SPP4_bit            BANKMASK(PORTD), 4
extern volatile __bit                   SPP5                @ (((unsigned) &PORTD)*8) + 5;
#define                                 SPP5_bit            BANKMASK(PORTD), 5
extern volatile __bit                   SPP6                @ (((unsigned) &PORTD)*8) + 6;
#define                                 SPP6_bit            BANKMASK(PORTD), 6
extern volatile __bit                   SPP7                @ (((unsigned) &PORTD)*8) + 7;
#define                                 SPP7_bit            BANKMASK(PORTD), 7
extern volatile __bit                   SPPBUSY             @ (((unsigned) &SPPEPS)*8) + 4;
#define                                 SPPBUSY_bit         BANKMASK(SPPEPS), 4
extern volatile __bit                   SPPEN               @ (((unsigned) &SPPCON)*8) + 0;
#define                                 SPPEN_bit           BANKMASK(SPPCON), 0
extern volatile __bit                   SPPIE               @ (((unsigned) &PIE1)*8) + 7;
#define                                 SPPIE_bit           BANKMASK(PIE1), 7
extern volatile __bit                   SPPIF               @ (((unsigned) &PIR1)*8) + 7;
#define                                 SPPIF_bit           BANKMASK(PIR1), 7
extern volatile __bit                   SPPIP               @ (((unsigned) &IPR1)*8) + 7;
#define                                 SPPIP_bit           BANKMASK(IPR1), 7
extern volatile __bit                   SPPOWN              @ (((unsigned) &SPPCON)*8) + 1;
#define                                 SPPOWN_bit          BANKMASK(SPPCON), 1
extern volatile __bit                   SREN                @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SREN_bit            BANKMASK(RCSTA), 5
extern volatile __bit                   SRENA               @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SRENA_bit           BANKMASK(RCSTA), 5
extern volatile __bit                   SS2                 @ (((unsigned) &PORTD)*8) + 7;
#define                                 SS2_bit             BANKMASK(PORTD), 7
extern volatile __bit                   SSPEN               @ (((unsigned) &SSPCON1)*8) + 5;
#define                                 SSPEN_bit           BANKMASK(SSPCON1), 5
extern volatile __bit                   SSPIE               @ (((unsigned) &PIE1)*8) + 3;
#define                                 SSPIE_bit           BANKMASK(PIE1), 3
extern volatile __bit                   SSPIF               @ (((unsigned) &PIR1)*8) + 3;
#define                                 SSPIF_bit           BANKMASK(PIR1), 3
extern volatile __bit                   SSPIP               @ (((unsigned) &IPR1)*8) + 3;
#define                                 SSPIP_bit           BANKMASK(IPR1), 3
extern volatile __bit                   SSPM0               @ (((unsigned) &SSPCON1)*8) + 0;
#define                                 SSPM0_bit           BANKMASK(SSPCON1), 0
extern volatile __bit                   SSPM1               @ (((unsigned) &SSPCON1)*8) + 1;
#define                                 SSPM1_bit           BANKMASK(SSPCON1), 1
extern volatile __bit                   SSPM2               @ (((unsigned) &SSPCON1)*8) + 2;
#define                                 SSPM2_bit           BANKMASK(SSPCON1), 2
extern volatile __bit                   SSPM3               @ (((unsigned) &SSPCON1)*8) + 3;
#define                                 SSPM3_bit           BANKMASK(SSPCON1), 3
extern volatile __bit                   SSPOV               @ (((unsigned) &SSPCON1)*8) + 6;
#define                                 SSPOV_bit           BANKMASK(SSPCON1), 6
extern volatile __bit                   STALLIE             @ (((unsigned) &UIE)*8) + 5;
#define                                 STALLIE_bit         BANKMASK(UIE), 5
extern volatile __bit                   STALLIF             @ (((unsigned) &UIR)*8) + 5;
#define                                 STALLIF_bit         BANKMASK(UIR), 5
extern volatile __bit                   START               @ (((unsigned) &SSPSTAT)*8) + 3;
#define                                 START_bit           BANKMASK(SSPSTAT), 3
extern volatile __bit                   STKFUL              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKFUL_bit          BANKMASK(STKPTR), 7
extern volatile __bit                   STKOVF              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKOVF_bit          BANKMASK(STKPTR), 7
extern volatile __bit                   STKPTR0             @ (((unsigned) &STKPTR)*8) + 0;
#define                                 STKPTR0_bit         BANKMASK(STKPTR), 0
extern volatile __bit                   STKPTR1             @ (((unsigned) &STKPTR)*8) + 1;
#define                                 STKPTR1_bit         BANKMASK(STKPTR), 1
extern volatile __bit                   STKPTR2             @ (((unsigned) &STKPTR)*8) + 2;
#define                                 STKPTR2_bit         BANKMASK(STKPTR), 2
extern volatile __bit                   STKPTR3             @ (((unsigned) &STKPTR)*8) + 3;
#define                                 STKPTR3_bit         BANKMASK(STKPTR), 3
extern volatile __bit                   STKPTR4             @ (((unsigned) &STKPTR)*8) + 4;
#define                                 STKPTR4_bit         BANKMASK(STKPTR), 4
extern volatile __bit                   STKUNF              @ (((unsigned) &STKPTR)*8) + 6;
#define                                 STKUNF_bit          BANKMASK(STKPTR), 6
extern volatile __bit                   STOP                @ (((unsigned) &SSPSTAT)*8) + 4;
#define                                 STOP_bit            BANKMASK(SSPSTAT), 4
extern volatile __bit                   SUSPND              @ (((unsigned) &UCON)*8) + 1;
#define                                 SUSPND_bit          BANKMASK(UCON), 1
extern volatile __bit                   SWDTE               @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTE_bit           BANKMASK(WDTCON), 0
extern volatile __bit                   SWDTEN              @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTEN_bit          BANKMASK(WDTCON), 0
extern volatile __bit                   SYNC                @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC_bit            BANKMASK(TXSTA), 4
extern volatile __bit                   SYNC1               @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC1_bit           BANKMASK(TXSTA), 4
extern volatile __bit                   T08BIT              @ (((unsigned) &T0CON)*8) + 6;
#define                                 T08BIT_bit          BANKMASK(T0CON), 6
extern volatile __bit                   T0CKI               @ (((unsigned) &PORTA)*8) + 4;
#define                                 T0CKI_bit           BANKMASK(PORTA), 4
extern volatile __bit                   T0CS                @ (((unsigned) &T0CON)*8) + 5;
#define                                 T0CS_bit            BANKMASK(T0CON), 5
extern volatile __bit                   T0IE                @ (((unsigned) &INTCON)*8) + 5;
#define                                 T0IE_bit            BANKMASK(INTCON), 5
extern volatile __bit                   T0IF                @ (((unsigned) &INTCON)*8) + 2;
#define                                 T0IF_bit            BANKMASK(INTCON), 2
extern volatile __bit                   T0IP                @ (((unsigned) &INTCON2)*8) + 2;
#define                                 T0IP_bit            BANKMASK(INTCON2), 2
extern volatile __bit                   T0PS0               @ (((unsigned) &T0CON)*8) + 0;
#define                                 T0PS0_bit           BANKMASK(T0CON), 0
extern volatile __bit                   T0PS1               @ (((unsigned) &T0CON)*8) + 1;
#define                                 T0PS1_bit           BANKMASK(T0CON), 1
extern volatile __bit                   T0PS2               @ (((unsigned) &T0CON)*8) + 2;
#define                                 T0PS2_bit           BANKMASK(T0CON), 2
extern volatile __bit                   T0SE                @ (((unsigned) &T0CON)*8) + 4;
#define                                 T0SE_bit            BANKMASK(T0CON), 4
extern volatile __bit                   T13CKI              @ (((unsigned) &PORTC)*8) + 0;
#define                                 T13CKI_bit          BANKMASK(PORTC), 0
extern volatile __bit                   T1CKPS0             @ (((unsigned) &T1CON)*8) + 4;
#define                                 T1CKPS0_bit         BANKMASK(T1CON), 4
extern volatile __bit                   T1CKPS1             @ (((unsigned) &T1CON)*8) + 5;
#define                                 T1CKPS1_bit         BANKMASK(T1CON), 5
extern volatile __bit                   T1OSCEN             @ (((unsigned) &T1CON)*8) + 3;
#define                                 T1OSCEN_bit         BANKMASK(T1CON), 3
extern volatile __bit                   T1OSI               @ (((unsigned) &PORTC)*8) + 1;
#define                                 T1OSI_bit           BANKMASK(PORTC), 1
extern volatile __bit                   T1OSO               @ (((unsigned) &PORTC)*8) + 0;
#define                                 T1OSO_bit           BANKMASK(PORTC), 0
extern volatile __bit                   T1RD16              @ (((unsigned) &T1CON)*8) + 7;
#define                                 T1RD16_bit          BANKMASK(T1CON), 7
extern volatile __bit                   T1RUN               @ (((unsigned) &T1CON)*8) + 6;
#define                                 T1RUN_bit           BANKMASK(T1CON), 6
extern volatile __bit                   T1SYNC              @ (((unsigned) &T1CON)*8) + 2;
#define                                 T1SYNC_bit          BANKMASK(T1CON), 2
extern volatile __bit                   T2CKPS0             @ (((unsigned) &T2CON)*8) + 0;
#define                                 T2CKPS0_bit         BANKMASK(T2CON), 0
extern volatile __bit                   T2CKPS1             @ (((unsigned) &T2CON)*8) + 1;
#define                                 T2CKPS1_bit         BANKMASK(T2CON), 1
extern volatile __bit                   T2OUTPS0            @ (((unsigned) &T2CON)*8) + 3;
#define                                 T2OUTPS0_bit        BANKMASK(T2CON), 3
extern volatile __bit                   T2OUTPS1            @ (((unsigned) &T2CON)*8) + 4;
#define                                 T2OUTPS1_bit        BANKMASK(T2CON), 4
extern volatile __bit                   T2OUTPS2            @ (((unsigned) &T2CON)*8) + 5;
#define                                 T2OUTPS2_bit        BANKMASK(T2CON), 5
extern volatile __bit                   T2OUTPS3            @ (((unsigned) &T2CON)*8) + 6;
#define                                 T2OUTPS3_bit        BANKMASK(T2CON), 6
extern volatile __bit                   T3CCP1              @ (((unsigned) &T3CON)*8) + 3;
#define                                 T3CCP1_bit          BANKMASK(T3CON), 3
extern volatile __bit                   T3CCP2              @ (((unsigned) &T3CON)*8) + 6;
#define                                 T3CCP2_bit          BANKMASK(T3CON), 6
extern volatile __bit                   T3CKPS0             @ (((unsigned) &T3CON)*8) + 4;
#define                                 T3CKPS0_bit         BANKMASK(T3CON), 4
extern volatile __bit                   T3CKPS1             @ (((unsigned) &T3CON)*8) + 5;
#define                                 T3CKPS1_bit         BANKMASK(T3CON), 5
extern volatile __bit                   T3NSYNC             @ (((unsigned) &T3CON)*8) + 2;
#define                                 T3NSYNC_bit         BANKMASK(T3CON), 2
extern volatile __bit                   T3RD16              @ (((unsigned) &T3CON)*8) + 7;
#define                                 T3RD16_bit          BANKMASK(T3CON), 7
extern volatile __bit                   T3SYNC              @ (((unsigned) &T3CON)*8) + 2;
#define                                 T3SYNC_bit          BANKMASK(T3CON), 2
extern volatile __bit                   TMR0IE              @ (((unsigned) &INTCON)*8) + 5;
#define                                 TMR0IE_bit          BANKMASK(INTCON), 5
extern volatile __bit                   TMR0IF              @ (((unsigned) &INTCON)*8) + 2;
#define                                 TMR0IF_bit          BANKMASK(INTCON), 2
extern volatile __bit                   TMR0IP              @ (((unsigned) &INTCON2)*8) + 2;
#define                                 TMR0IP_bit          BANKMASK(INTCON2), 2
extern volatile __bit                   TMR0ON              @ (((unsigned) &T0CON)*8) + 7;
#define                                 TMR0ON_bit          BANKMASK(T0CON), 7
extern volatile __bit                   TMR1CS              @ (((unsigned) &T1CON)*8) + 1;
#define                                 TMR1CS_bit          BANKMASK(T1CON), 1
extern volatile __bit                   TMR1IE              @ (((unsigned) &PIE1)*8) + 0;
#define                                 TMR1IE_bit          BANKMASK(PIE1), 0
extern volatile __bit                   TMR1IF              @ (((unsigned) &PIR1)*8) + 0;
#define                                 TMR1IF_bit          BANKMASK(PIR1), 0
extern volatile __bit                   TMR1IP              @ (((unsigned) &IPR1)*8) + 0;
#define                                 TMR1IP_bit          BANKMASK(IPR1), 0
extern volatile __bit                   TMR1ON              @ (((unsigned) &T1CON)*8) + 0;
#define                                 TMR1ON_bit          BANKMASK(T1CON), 0
extern volatile __bit                   TMR2IE              @ (((unsigned) &PIE1)*8) + 1;
#define                                 TMR2IE_bit          BANKMASK(PIE1), 1
extern volatile __bit                   TMR2IF              @ (((unsigned) &PIR1)*8) + 1;
#define                                 TMR2IF_bit          BANKMASK(PIR1), 1
extern volatile __bit                   TMR2IP              @ (((unsigned) &IPR1)*8) + 1;
#define                                 TMR2IP_bit          BANKMASK(IPR1), 1
extern volatile __bit                   TMR2ON              @ (((unsigned) &T2CON)*8) + 2;
#define                                 TMR2ON_bit          BANKMASK(T2CON), 2
extern volatile __bit                   TMR3CS              @ (((unsigned) &T3CON)*8) + 1;
#define                                 TMR3CS_bit          BANKMASK(T3CON), 1
extern volatile __bit                   TMR3IE              @ (((unsigned) &PIE2)*8) + 1;
#define                                 TMR3IE_bit          BANKMASK(PIE2), 1
extern volatile __bit                   TMR3IF              @ (((unsigned) &PIR2)*8) + 1;
#define                                 TMR3IF_bit          BANKMASK(PIR2), 1
extern volatile __bit                   TMR3IP              @ (((unsigned) &IPR2)*8) + 1;
#define                                 TMR3IP_bit          BANKMASK(IPR2), 1
extern volatile __bit                   TMR3ON              @ (((unsigned) &T3CON)*8) + 0;
#define                                 TMR3ON_bit          BANKMASK(T3CON), 0
extern volatile __bit                   TO                  @ (((unsigned) &RCON)*8) + 3;
#define                                 TO_bit              BANKMASK(RCON), 3
extern volatile __bit                   TOUTPS0             @ (((unsigned) &T2CON)*8) + 3;
#define                                 TOUTPS0_bit         BANKMASK(T2CON), 3
extern volatile __bit                   TOUTPS1             @ (((unsigned) &T2CON)*8) + 4;
#define                                 TOUTPS1_bit         BANKMASK(T2CON), 4
extern volatile __bit                   TOUTPS2             @ (((unsigned) &T2CON)*8) + 5;
#define                                 TOUTPS2_bit         BANKMASK(T2CON), 5
extern volatile __bit                   TOUTPS3             @ (((unsigned) &T2CON)*8) + 6;
#define                                 TOUTPS3_bit         BANKMASK(T2CON), 6
extern volatile __bit                   TRISA0              @ (((unsigned) &TRISA)*8) + 0;
#define                                 TRISA0_bit          BANKMASK(TRISA), 0
extern volatile __bit                   TRISA1              @ (((unsigned) &TRISA)*8) + 1;
#define                                 TRISA1_bit          BANKMASK(TRISA), 1
extern volatile __bit                   TRISA2              @ (((unsigned) &TRISA)*8) + 2;
#define                                 TRISA2_bit          BANKMASK(TRISA), 2
extern volatile __bit                   TRISA3              @ (((unsigned) &TRISA)*8) + 3;
#define                                 TRISA3_bit          BANKMASK(TRISA), 3
extern volatile __bit                   TRISA4              @ (((unsigned) &TRISA)*8) + 4;
#define                                 TRISA4_bit          BANKMASK(TRISA), 4
extern volatile __bit                   TRISA5              @ (((unsigned) &TRISA)*8) + 5;
#define                                 TRISA5_bit          BANKMASK(TRISA), 5
extern volatile __bit                   TRISA6              @ (((unsigned) &TRISA)*8) + 6;
#define                                 TRISA6_bit          BANKMASK(TRISA), 6
extern volatile __bit                   TRISB0              @ (((unsigned) &TRISB)*8) + 0;
#define                                 TRISB0_bit          BANKMASK(TRISB), 0
extern volatile __bit                   TRISB1              @ (((unsigned) &TRISB)*8) + 1;
#define                                 TRISB1_bit          BANKMASK(TRISB), 1
extern volatile __bit                   TRISB2              @ (((unsigned) &TRISB)*8) + 2;
#define                                 TRISB2_bit          BANKMASK(TRISB), 2
extern volatile __bit                   TRISB3              @ (((unsigned) &TRISB)*8) + 3;
#define                                 TRISB3_bit          BANKMASK(TRISB), 3
extern volatile __bit                   TRISB4              @ (((unsigned) &TRISB)*8) + 4;
#define                                 TRISB4_bit          BANKMASK(TRISB), 4
extern volatile __bit                   TRISB5              @ (((unsigned) &TRISB)*8) + 5;
#define                                 TRISB5_bit          BANKMASK(TRISB), 5
extern volatile __bit                   TRISB6              @ (((unsigned) &TRISB)*8) + 6;
#define                                 TRISB6_bit          BANKMASK(TRISB), 6
extern volatile __bit                   TRISB7              @ (((unsigned) &TRISB)*8) + 7;
#define                                 TRISB7_bit          BANKMASK(TRISB), 7
extern volatile __bit                   TRISC0              @ (((unsigned) &TRISC)*8) + 0;
#define                                 TRISC0_bit          BANKMASK(TRISC), 0
extern volatile __bit                   TRISC1              @ (((unsigned) &TRISC)*8) + 1;
#define                                 TRISC1_bit          BANKMASK(TRISC), 1
extern volatile __bit                   TRISC2              @ (((unsigned) &TRISC)*8) + 2;
#define                                 TRISC2_bit          BANKMASK(TRISC), 2
extern volatile __bit                   TRISC3              @ (((unsigned) &TRISC)*8) + 3;
#define                                 TRISC3_bit          BANKMASK(TRISC), 3
extern volatile __bit                   TRISC6              @ (((unsigned) &TRISC)*8) + 6;
#define                                 TRISC6_bit          BANKMASK(TRISC), 6
extern volatile __bit                   TRISC7              @ (((unsigned) &TRISC)*8) + 7;
#define                                 TRISC7_bit          BANKMASK(TRISC), 7
extern volatile __bit                   TRISD0              @ (((unsigned) &TRISD)*8) + 0;
#define                                 TRISD0_bit          BANKMASK(TRISD), 0
extern volatile __bit                   TRISD1              @ (((unsigned) &TRISD)*8) + 1;
#define                                 TRISD1_bit          BANKMASK(TRISD), 1
extern volatile __bit                   TRISD2              @ (((unsigned) &TRISD)*8) + 2;
#define                                 TRISD2_bit          BANKMASK(TRISD), 2
extern volatile __bit                   TRISD3              @ (((unsigned) &TRISD)*8) + 3;
#define                                 TRISD3_bit          BANKMASK(TRISD), 3
extern volatile __bit                   TRISD4              @ (((unsigned) &TRISD)*8) + 4;
#define                                 TRISD4_bit          BANKMASK(TRISD), 4
extern volatile __bit                   TRISD5              @ (((unsigned) &TRISD)*8) + 5;
#define                                 TRISD5_bit          BANKMASK(TRISD), 5
extern volatile __bit                   TRISD6              @ (((unsigned) &TRISD)*8) + 6;
#define                                 TRISD6_bit          BANKMASK(TRISD), 6
extern volatile __bit                   TRISD7              @ (((unsigned) &TRISD)*8) + 7;
#define                                 TRISD7_bit          BANKMASK(TRISD), 7
extern volatile __bit                   TRISE0              @ (((unsigned) &TRISE)*8) + 0;
#define                                 TRISE0_bit          BANKMASK(TRISE), 0
extern volatile __bit                   TRISE1              @ (((unsigned) &TRISE)*8) + 1;
#define                                 TRISE1_bit          BANKMASK(TRISE), 1
extern volatile __bit                   TRISE2              @ (((unsigned) &TRISE)*8) + 2;
#define                                 TRISE2_bit          BANKMASK(TRISE), 2
extern volatile __bit                   TRMT                @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT_bit            BANKMASK(TXSTA), 1
extern volatile __bit                   TRMT1               @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT1_bit           BANKMASK(TXSTA), 1
extern volatile __bit                   TRNIE               @ (((unsigned) &UIE)*8) + 3;
#define                                 TRNIE_bit           BANKMASK(UIE), 3
extern volatile __bit                   TRNIF               @ (((unsigned) &UIR)*8) + 3;
#define                                 TRNIF_bit           BANKMASK(UIR), 3
extern volatile __bit                   TUN0                @ (((unsigned) &OSCTUNE)*8) + 0;
#define                                 TUN0_bit            BANKMASK(OSCTUNE), 0
extern volatile __bit                   TUN1                @ (((unsigned) &OSCTUNE)*8) + 1;
#define                                 TUN1_bit            BANKMASK(OSCTUNE), 1
extern volatile __bit                   TUN2                @ (((unsigned) &OSCTUNE)*8) + 2;
#define                                 TUN2_bit            BANKMASK(OSCTUNE), 2
extern volatile __bit                   TUN3                @ (((unsigned) &OSCTUNE)*8) + 3;
#define                                 TUN3_bit            BANKMASK(OSCTUNE), 3
extern volatile __bit                   TUN4                @ (((unsigned) &OSCTUNE)*8) + 4;
#define                                 TUN4_bit            BANKMASK(OSCTUNE), 4
extern volatile __bit                   TX                  @ (((unsigned) &PORTC)*8) + 6;
#define                                 TX_bit              BANKMASK(PORTC), 6
extern volatile __bit                   TX1IE               @ (((unsigned) &PIE1)*8) + 4;
#define                                 TX1IE_bit           BANKMASK(PIE1), 4
extern volatile __bit                   TX1IF               @ (((unsigned) &PIR1)*8) + 4;
#define                                 TX1IF_bit           BANKMASK(PIR1), 4
extern volatile __bit                   TX1IP               @ (((unsigned) &IPR1)*8) + 4;
#define                                 TX1IP_bit           BANKMASK(IPR1), 4
extern volatile __bit                   TX8_9               @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX8_9_bit           BANKMASK(TXSTA), 6
extern volatile __bit                   TX9                 @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX9_bit             BANKMASK(TXSTA), 6
extern volatile __bit                   TX91                @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX91_bit            BANKMASK(TXSTA), 6
extern volatile __bit                   TX9D                @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D_bit            BANKMASK(TXSTA), 0
extern volatile __bit                   TX9D1               @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D1_bit           BANKMASK(TXSTA), 0
extern volatile __bit                   TXCKP               @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 TXCKP_bit           BANKMASK(BAUDCON), 4
extern volatile __bit                   TXD8                @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TXD8_bit            BANKMASK(TXSTA), 0
extern volatile __bit                   TXEN                @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN_bit            BANKMASK(TXSTA), 5
extern volatile __bit                   TXEN1               @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN1_bit           BANKMASK(TXSTA), 5
extern volatile __bit                   TXIE                @ (((unsigned) &PIE1)*8) + 4;
#define                                 TXIE_bit            BANKMASK(PIE1), 4
extern volatile __bit                   TXIF                @ (((unsigned) &PIR1)*8) + 4;
#define                                 TXIF_bit            BANKMASK(PIR1), 4
extern volatile __bit                   TXIP                @ (((unsigned) &IPR1)*8) + 4;
#define                                 TXIP_bit            BANKMASK(IPR1), 4
extern volatile __bit                   UA                  @ (((unsigned) &SSPSTAT)*8) + 1;
#define                                 UA_bit              BANKMASK(SSPSTAT), 1
extern volatile __bit                   UERRIE              @ (((unsigned) &UIE)*8) + 1;
#define                                 UERRIE_bit          BANKMASK(UIE), 1
extern volatile __bit                   UERRIF              @ (((unsigned) &UIR)*8) + 1;
#define                                 UERRIF_bit          BANKMASK(UIR), 1
extern volatile __bit                   ULPWUIN             @ (((unsigned) &PORTA)*8) + 0;
#define                                 ULPWUIN_bit         BANKMASK(PORTA), 0
extern volatile __bit                   UOEMON              @ (((unsigned) &UCFG)*8) + 6;
#define                                 UOEMON_bit          BANKMASK(UCFG), 6
extern volatile __bit                   UPP0                @ (((unsigned) &UCFG)*8) + 0;
#define                                 UPP0_bit            BANKMASK(UCFG), 0
extern volatile __bit                   UPP1                @ (((unsigned) &UCFG)*8) + 1;
#define                                 UPP1_bit            BANKMASK(UCFG), 1
extern volatile __bit                   UPUEN               @ (((unsigned) &UCFG)*8) + 4;
#define                                 UPUEN_bit           BANKMASK(UCFG), 4
extern volatile __bit                   URSTIE              @ (((unsigned) &UIE)*8) + 0;
#define                                 URSTIE_bit          BANKMASK(UIE), 0
extern volatile __bit                   URSTIF              @ (((unsigned) &UIR)*8) + 0;
#define                                 URSTIF_bit          BANKMASK(UIR), 0
extern volatile __bit                   USBEN               @ (((unsigned) &UCON)*8) + 3;
#define                                 USBEN_bit           BANKMASK(UCON), 3
extern volatile __bit                   USBIE               @ (((unsigned) &PIE2)*8) + 5;
#define                                 USBIE_bit           BANKMASK(PIE2), 5
extern volatile __bit                   USBIF               @ (((unsigned) &PIR2)*8) + 5;
#define                                 USBIF_bit           BANKMASK(PIR2), 5
extern volatile __bit                   USBIP               @ (((unsigned) &IPR2)*8) + 5;
#define                                 USBIP_bit           BANKMASK(IPR2), 5
extern volatile __bit                   UTEYE               @ (((unsigned) &UCFG)*8) + 7;
#define                                 UTEYE_bit           BANKMASK(UCFG), 7
extern volatile __bit                   UTRDIS              @ (((unsigned) &UCFG)*8) + 3;
#define                                 UTRDIS_bit          BANKMASK(UCFG), 3
extern volatile __bit                   VCFG0               @ (((unsigned) &ADCON1)*8) + 4;
#define                                 VCFG0_bit           BANKMASK(ADCON1), 4
extern volatile __bit                   VCFG01              @ (((unsigned) &ADCON1)*8) + 4;
#define                                 VCFG01_bit          BANKMASK(ADCON1), 4
extern volatile __bit                   VCFG1               @ (((unsigned) &ADCON1)*8) + 5;
#define                                 VCFG1_bit           BANKMASK(ADCON1), 5
extern volatile __bit                   VCFG11              @ (((unsigned) &ADCON1)*8) + 5;
#define                                 VCFG11_bit          BANKMASK(ADCON1), 5
extern volatile __bit                   VDIRMAG             @ (((unsigned) &HLVDCON)*8) + 7;
#define                                 VDIRMAG_bit         BANKMASK(HLVDCON), 7
extern volatile __bit                   VREFM               @ (((unsigned) &PORTA)*8) + 2;
#define                                 VREFM_bit           BANKMASK(PORTA), 2
extern volatile __bit                   VREFP               @ (((unsigned) &PORTA)*8) + 3;
#define                                 VREFP_bit           BANKMASK(PORTA), 3
extern volatile __bit                   W4E                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 W4E_bit             BANKMASK(BAUDCON), 1
extern volatile __bit                   WAIT0               @ (((unsigned) &PR2)*8) + 4;
#define                                 WAIT0_bit           BANKMASK(PR2), 4
extern volatile __bit                   WAIT1               @ (((unsigned) &PR2)*8) + 5;
#define                                 WAIT1_bit           BANKMASK(PR2), 5
extern volatile __bit                   WCOL                @ (((unsigned) &SSPCON1)*8) + 7;
#define                                 WCOL_bit            BANKMASK(SSPCON1), 7
extern volatile __bit                   WM0                 @ (((unsigned) &PR2)*8) + 0;
#define                                 WM0_bit             BANKMASK(PR2), 0
extern volatile __bit                   WM1                 @ (((unsigned) &PR2)*8) + 1;
#define                                 WM1_bit             BANKMASK(PR2), 1
extern volatile __bit                   WR                  @ (((unsigned) &EECON1)*8) + 1;
#define                                 WR_bit              BANKMASK(EECON1), 1
extern volatile __bit                   WRE                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 WRE_bit             BANKMASK(PORTE), 1
extern volatile __bit                   WREN                @ (((unsigned) &EECON1)*8) + 2;
#define                                 WREN_bit            BANKMASK(EECON1), 2
extern volatile __bit                   WRERR               @ (((unsigned) &EECON1)*8) + 3;
#define                                 WRERR_bit           BANKMASK(EECON1), 3
extern volatile __bit                   WRSPP               @ (((unsigned) &SPPEPS)*8) + 6;
#define                                 WRSPP_bit           BANKMASK(SPPEPS), 6
extern volatile __bit                   WS0                 @ (((unsigned) &SPPCFG)*8) + 0;
#define                                 WS0_bit             BANKMASK(SPPCFG), 0
extern volatile __bit                   WS1                 @ (((unsigned) &SPPCFG)*8) + 1;
#define                                 WS1_bit             BANKMASK(SPPCFG), 1
extern volatile __bit                   WS2                 @ (((unsigned) &SPPCFG)*8) + 2;
#define                                 WS2_bit             BANKMASK(SPPCFG), 2
extern volatile __bit                   WS3                 @ (((unsigned) &SPPCFG)*8) + 3;
#define                                 WS3_bit             BANKMASK(SPPCFG), 3
extern volatile __bit                   WUE                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 WUE_bit             BANKMASK(BAUDCON), 1
extern volatile __bit                   ZERO                @ (((unsigned) &STATUS)*8) + 2;
#define                                 ZERO_bit            BANKMASK(STATUS), 2
extern volatile __bit                   nA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nA_bit              BANKMASK(SSPSTAT), 5
extern volatile __bit                   nADDRESS            @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nADDRESS_bit        BANKMASK(SSPSTAT), 5
extern volatile __bit                   nBOR                @ (((unsigned) &RCON)*8) + 0;
#define                                 nBOR_bit            BANKMASK(RCON), 0
extern volatile __bit                   nDONE               @ (((unsigned) &ADCON0)*8) + 1;
#define                                 nDONE_bit           BANKMASK(ADCON0), 1
extern volatile __bit                   nIPEN               @ (((unsigned) &RCON)*8) + 7;
#define                                 nIPEN_bit           BANKMASK(RCON), 7
extern volatile __bit                   nPD                 @ (((unsigned) &RCON)*8) + 2;
#define                                 nPD_bit             BANKMASK(RCON), 2
extern volatile __bit                   nPOR                @ (((unsigned) &RCON)*8) + 1;
#define                                 nPOR_bit            BANKMASK(RCON), 1
extern volatile __bit                   nRBPU               @ (((unsigned) &INTCON2)*8) + 7;
#define                                 nRBPU_bit           BANKMASK(INTCON2), 7
extern volatile __bit                   nRI                 @ (((unsigned) &RCON)*8) + 4;
#define                                 nRI_bit             BANKMASK(RCON), 4
extern volatile __bit                   nT1SYNC             @ (((unsigned) &T1CON)*8) + 2;
#define                                 nT1SYNC_bit         BANKMASK(T1CON), 2
extern volatile __bit                   nT3SYNC             @ (((unsigned) &T3CON)*8) + 2;
#define                                 nT3SYNC_bit         BANKMASK(T3CON), 2
extern volatile __bit                   nTO                 @ (((unsigned) &RCON)*8) + 3;
#define                                 nTO_bit             BANKMASK(RCON), 3
extern volatile __bit                   nW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nW_bit              BANKMASK(SSPSTAT), 2
extern volatile __bit                   nWRITE              @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nWRITE_bit          BANKMASK(SSPSTAT), 2

#endif // _PIC18F4550_H_
