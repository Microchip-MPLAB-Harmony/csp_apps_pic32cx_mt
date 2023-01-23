/*
 * Component description for ADC
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-01-20T11:01:06Z */
#ifndef _PIC32CXMTSH_ADC_COMPONENT_H_
#define _PIC32CXMTSH_ADC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ADC                                          */
/* ************************************************************************** */

/* -------- ADC_CR : (ADC Offset: 0x00) ( /W 32) Control Register -------- */
#define ADC_CR_SWRST_Pos                      _UINT32_(0)                                          /* (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                      (_UINT32_(0x1) << ADC_CR_SWRST_Pos)                  /* (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST(value)                   (ADC_CR_SWRST_Msk & (_UINT32_(value) << ADC_CR_SWRST_Pos)) /* Assigment of value for SWRST in the ADC_CR register */
#define ADC_CR_START_Pos                      _UINT32_(1)                                          /* (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                      (_UINT32_(0x1) << ADC_CR_START_Pos)                  /* (ADC_CR) Start Conversion Mask */
#define ADC_CR_START(value)                   (ADC_CR_START_Msk & (_UINT32_(value) << ADC_CR_START_Pos)) /* Assigment of value for START in the ADC_CR register */
#define ADC_CR_SWFIFO_Pos                     _UINT32_(3)                                          /* (ADC_CR) Software FIFO Reset Position */
#define ADC_CR_SWFIFO_Msk                     (_UINT32_(0x1) << ADC_CR_SWFIFO_Pos)                 /* (ADC_CR) Software FIFO Reset Mask */
#define ADC_CR_SWFIFO(value)                  (ADC_CR_SWFIFO_Msk & (_UINT32_(value) << ADC_CR_SWFIFO_Pos)) /* Assigment of value for SWFIFO in the ADC_CR register */
#define ADC_CR_CMPRST_Pos                     _UINT32_(4)                                          /* (ADC_CR) Comparison Restart Position */
#define ADC_CR_CMPRST_Msk                     (_UINT32_(0x1) << ADC_CR_CMPRST_Pos)                 /* (ADC_CR) Comparison Restart Mask */
#define ADC_CR_CMPRST(value)                  (ADC_CR_CMPRST_Msk & (_UINT32_(value) << ADC_CR_CMPRST_Pos)) /* Assigment of value for CMPRST in the ADC_CR register */
#define ADC_CR_Msk                            _UINT32_(0x0000001B)                                 /* (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ADC_MR_TRGSEL_Pos                     _UINT32_(1)                                          /* (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                     (_UINT32_(0x7) << ADC_MR_TRGSEL_Pos)                 /* (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                  (ADC_MR_TRGSEL_Msk & (_UINT32_(value) << ADC_MR_TRGSEL_Pos)) /* Assigment of value for TRGSEL in the ADC_MR register */
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val         _UINT32_(0x0)                                        /* (ADC_MR) PWM event line 0  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val         _UINT32_(0x1)                                        /* (ADC_MR) TIOA0 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val         _UINT32_(0x2)                                        /* (ADC_MR) TIOA1 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val         _UINT32_(0x3)                                        /* (ADC_MR) TIOA2 TC0  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val         _UINT32_(0x4)                                        /* (ADC_MR) TIOA0 TC1  */
#define   ADC_MR_TRGSEL_ADC_TRIG5_Val         _UINT32_(0x5)                                        /* (ADC_MR) TIOA1 TC1  */
#define   ADC_MR_TRGSEL_ADC_TRIG6_Val         _UINT32_(0x6)                                        /* (ADC_MR) RTCOUT0  */
#define ADC_MR_TRGSEL_ADC_TRIG0               (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) PWM event line 0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG1               (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA0 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG2               (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA1 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG3               (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA2 TC0 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG4               (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA0 TC1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG5               (ADC_MR_TRGSEL_ADC_TRIG5_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA1 TC1 Position  */
#define ADC_MR_TRGSEL_ADC_TRIG6               (ADC_MR_TRGSEL_ADC_TRIG6_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) RTCOUT0 Position  */
#define ADC_MR_SLEEP_Pos                      _UINT32_(5)                                          /* (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                      (_UINT32_(0x1) << ADC_MR_SLEEP_Pos)                  /* (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP(value)                   (ADC_MR_SLEEP_Msk & (_UINT32_(value) << ADC_MR_SLEEP_Pos)) /* Assigment of value for SLEEP in the ADC_MR register */
#define   ADC_MR_SLEEP_NORMAL_Val             _UINT32_(0x0)                                        /* (ADC_MR) Normal mode: The ADC core and reference voltage circuitry are kept on between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val              _UINT32_(0x1)                                        /* (ADC_MR) Sleep mode: The wake-up time can be modified by programming the FWUP bit.  */
#define ADC_MR_SLEEP_NORMAL                   (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)        /* (ADC_MR) Normal mode: The ADC core and reference voltage circuitry are kept on between conversions. Position  */
#define ADC_MR_SLEEP_SLEEP                    (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)         /* (ADC_MR) Sleep mode: The wake-up time can be modified by programming the FWUP bit. Position  */
#define ADC_MR_FWUP_Pos                       _UINT32_(6)                                          /* (ADC_MR) Fast Wake-up Position */
#define ADC_MR_FWUP_Msk                       (_UINT32_(0x1) << ADC_MR_FWUP_Pos)                   /* (ADC_MR) Fast Wake-up Mask */
#define ADC_MR_FWUP(value)                    (ADC_MR_FWUP_Msk & (_UINT32_(value) << ADC_MR_FWUP_Pos)) /* Assigment of value for FWUP in the ADC_MR register */
#define   ADC_MR_FWUP_OFF_Val                 _UINT32_(0x0)                                        /* (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions.  */
#define   ADC_MR_FWUP_ON_Val                  _UINT32_(0x1)                                        /* (ADC_MR) If SLEEP is 1, then Fast Wake-up Sleep mode: The voltage reference is on between conversions and ADC core is off.  */
#define ADC_MR_FWUP_OFF                       (ADC_MR_FWUP_OFF_Val << ADC_MR_FWUP_Pos)             /* (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions. Position  */
#define ADC_MR_FWUP_ON                        (ADC_MR_FWUP_ON_Val << ADC_MR_FWUP_Pos)              /* (ADC_MR) If SLEEP is 1, then Fast Wake-up Sleep mode: The voltage reference is on between conversions and ADC core is off. Position  */
#define ADC_MR_PRESCAL_Pos                    _UINT32_(8)                                          /* (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                    (_UINT32_(0xFF) << ADC_MR_PRESCAL_Pos)               /* (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)                 (ADC_MR_PRESCAL_Msk & (_UINT32_(value) << ADC_MR_PRESCAL_Pos)) /* Assigment of value for PRESCAL in the ADC_MR register */
#define ADC_MR_STARTUP_Pos                    _UINT32_(16)                                         /* (ADC_MR) Startup Time Position */
#define ADC_MR_STARTUP_Msk                    (_UINT32_(0xF) << ADC_MR_STARTUP_Pos)                /* (ADC_MR) Startup Time Mask */
#define ADC_MR_STARTUP(value)                 (ADC_MR_STARTUP_Msk & (_UINT32_(value) << ADC_MR_STARTUP_Pos)) /* Assigment of value for STARTUP in the ADC_MR register */
#define   ADC_MR_STARTUP_SUT0_Val             _UINT32_(0x0)                                        /* (ADC_MR) 0 period of ADCCLK  */
#define   ADC_MR_STARTUP_SUT8_Val             _UINT32_(0x1)                                        /* (ADC_MR) 8 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT16_Val            _UINT32_(0x2)                                        /* (ADC_MR) 16 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT24_Val            _UINT32_(0x3)                                        /* (ADC_MR) 24 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT64_Val            _UINT32_(0x4)                                        /* (ADC_MR) 64 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT80_Val            _UINT32_(0x5)                                        /* (ADC_MR) 80 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT96_Val            _UINT32_(0x6)                                        /* (ADC_MR) 96 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT112_Val           _UINT32_(0x7)                                        /* (ADC_MR) 112 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT512_Val           _UINT32_(0x8)                                        /* (ADC_MR) 512 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT576_Val           _UINT32_(0x9)                                        /* (ADC_MR) 576 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT640_Val           _UINT32_(0xA)                                        /* (ADC_MR) 640 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT704_Val           _UINT32_(0xB)                                        /* (ADC_MR) 704 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT768_Val           _UINT32_(0xC)                                        /* (ADC_MR) 768 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT832_Val           _UINT32_(0xD)                                        /* (ADC_MR) 832 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT896_Val           _UINT32_(0xE)                                        /* (ADC_MR) 896 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT960_Val           _UINT32_(0xF)                                        /* (ADC_MR) 960 periods of ADCCLK  */
#define ADC_MR_STARTUP_SUT0                   (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)      /* (ADC_MR) 0 period of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT8                   (ADC_MR_STARTUP_SUT8_Val << ADC_MR_STARTUP_Pos)      /* (ADC_MR) 8 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT16                  (ADC_MR_STARTUP_SUT16_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 16 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT24                  (ADC_MR_STARTUP_SUT24_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 24 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT64                  (ADC_MR_STARTUP_SUT64_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 64 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT80                  (ADC_MR_STARTUP_SUT80_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 80 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT96                  (ADC_MR_STARTUP_SUT96_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 96 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT112                 (ADC_MR_STARTUP_SUT112_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 112 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT512                 (ADC_MR_STARTUP_SUT512_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 512 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT576                 (ADC_MR_STARTUP_SUT576_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 576 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT640                 (ADC_MR_STARTUP_SUT640_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 640 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT704                 (ADC_MR_STARTUP_SUT704_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 704 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT768                 (ADC_MR_STARTUP_SUT768_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 768 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT832                 (ADC_MR_STARTUP_SUT832_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 832 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT896                 (ADC_MR_STARTUP_SUT896_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 896 periods of ADCCLK Position  */
#define ADC_MR_STARTUP_SUT960                 (ADC_MR_STARTUP_SUT960_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 960 periods of ADCCLK Position  */
#define ADC_MR_ANACH_Pos                      _UINT32_(23)                                         /* (ADC_MR) Analog Change Position */
#define ADC_MR_ANACH_Msk                      (_UINT32_(0x1) << ADC_MR_ANACH_Pos)                  /* (ADC_MR) Analog Change Mask */
#define ADC_MR_ANACH(value)                   (ADC_MR_ANACH_Msk & (_UINT32_(value) << ADC_MR_ANACH_Pos)) /* Assigment of value for ANACH in the ADC_MR register */
#define   ADC_MR_ANACH_NONE_Val               _UINT32_(0x0)                                        /* (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels.  */
#define   ADC_MR_ANACH_ALLOWED_Val            _UINT32_(0x1)                                        /* (ADC_MR) Allows different analog settings for each channel. See ADC Channel Configuration Register.  */
#define ADC_MR_ANACH_NONE                     (ADC_MR_ANACH_NONE_Val << ADC_MR_ANACH_Pos)          /* (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels. Position  */
#define ADC_MR_ANACH_ALLOWED                  (ADC_MR_ANACH_ALLOWED_Val << ADC_MR_ANACH_Pos)       /* (ADC_MR) Allows different analog settings for each channel. See ADC Channel Configuration Register. Position  */
#define ADC_MR_TRACKTIM_Pos                   _UINT32_(24)                                         /* (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                   (_UINT32_(0xF) << ADC_MR_TRACKTIM_Pos)               /* (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)                (ADC_MR_TRACKTIM_Msk & (_UINT32_(value) << ADC_MR_TRACKTIM_Pos)) /* Assigment of value for TRACKTIM in the ADC_MR register */
#define ADC_MR_TRANSFER_Pos                   _UINT32_(28)                                         /* (ADC_MR) Transfer Time Position */
#define ADC_MR_TRANSFER_Msk                   (_UINT32_(0x3) << ADC_MR_TRANSFER_Pos)               /* (ADC_MR) Transfer Time Mask */
#define ADC_MR_TRANSFER(value)                (ADC_MR_TRANSFER_Msk & (_UINT32_(value) << ADC_MR_TRANSFER_Pos)) /* Assigment of value for TRANSFER in the ADC_MR register */
#define ADC_MR_ALWAYS1_Pos                    _UINT32_(30)                                         /* (ADC_MR)  Position */
#define ADC_MR_ALWAYS1_Msk                    (_UINT32_(0x1) << ADC_MR_ALWAYS1_Pos)                /* (ADC_MR)  Mask */
#define ADC_MR_ALWAYS1(value)                 (ADC_MR_ALWAYS1_Msk & (_UINT32_(value) << ADC_MR_ALWAYS1_Pos)) /* Assigment of value for ALWAYS1 in the ADC_MR register */
#define ADC_MR_USEQ_Pos                       _UINT32_(31)                                         /* (ADC_MR) User Sequence Enable Position */
#define ADC_MR_USEQ_Msk                       (_UINT32_(0x1) << ADC_MR_USEQ_Pos)                   /* (ADC_MR) User Sequence Enable Mask */
#define ADC_MR_USEQ(value)                    (ADC_MR_USEQ_Msk & (_UINT32_(value) << ADC_MR_USEQ_Pos)) /* Assigment of value for USEQ in the ADC_MR register */
#define   ADC_MR_USEQ_NUM_ORDER_Val           _UINT32_(0x0)                                        /* (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val           _UINT32_(0x1)                                        /* (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER                 (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)       /* (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index. Position  */
#define ADC_MR_USEQ_REG_ORDER                 (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)       /* (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1and can be used to convert the same channel several times. Position  */
#define ADC_MR_Msk                            _UINT32_(0xFF8FFF6E)                                 /* (ADC_MR) Register Mask  */

#define ADC_MR_ALWAYS_Pos                     _UINT32_(30)                                         /* (ADC_MR Position)  */
#define ADC_MR_ALWAYS_Msk                     (_UINT32_(0x1) << ADC_MR_ALWAYS_Pos)                 /* (ADC_MR Mask) ALWAYS */
#define ADC_MR_ALWAYS(value)                  (ADC_MR_ALWAYS_Msk & (_UINT32_(value) << ADC_MR_ALWAYS_Pos)) 

/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_USCH1_Pos                   _UINT32_(0)                                          /* (ADC_SEQR1) User Sequence Number 1 Position */
#define ADC_SEQR1_USCH1_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH1_Pos)               /* (ADC_SEQR1) User Sequence Number 1 Mask */
#define ADC_SEQR1_USCH1(value)                (ADC_SEQR1_USCH1_Msk & (_UINT32_(value) << ADC_SEQR1_USCH1_Pos)) /* Assigment of value for USCH1 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH2_Pos                   _UINT32_(4)                                          /* (ADC_SEQR1) User Sequence Number 2 Position */
#define ADC_SEQR1_USCH2_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH2_Pos)               /* (ADC_SEQR1) User Sequence Number 2 Mask */
#define ADC_SEQR1_USCH2(value)                (ADC_SEQR1_USCH2_Msk & (_UINT32_(value) << ADC_SEQR1_USCH2_Pos)) /* Assigment of value for USCH2 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH3_Pos                   _UINT32_(8)                                          /* (ADC_SEQR1) User Sequence Number 3 Position */
#define ADC_SEQR1_USCH3_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH3_Pos)               /* (ADC_SEQR1) User Sequence Number 3 Mask */
#define ADC_SEQR1_USCH3(value)                (ADC_SEQR1_USCH3_Msk & (_UINT32_(value) << ADC_SEQR1_USCH3_Pos)) /* Assigment of value for USCH3 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH4_Pos                   _UINT32_(12)                                         /* (ADC_SEQR1) User Sequence Number 4 Position */
#define ADC_SEQR1_USCH4_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH4_Pos)               /* (ADC_SEQR1) User Sequence Number 4 Mask */
#define ADC_SEQR1_USCH4(value)                (ADC_SEQR1_USCH4_Msk & (_UINT32_(value) << ADC_SEQR1_USCH4_Pos)) /* Assigment of value for USCH4 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH5_Pos                   _UINT32_(16)                                         /* (ADC_SEQR1) User Sequence Number 5 Position */
#define ADC_SEQR1_USCH5_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH5_Pos)               /* (ADC_SEQR1) User Sequence Number 5 Mask */
#define ADC_SEQR1_USCH5(value)                (ADC_SEQR1_USCH5_Msk & (_UINT32_(value) << ADC_SEQR1_USCH5_Pos)) /* Assigment of value for USCH5 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH6_Pos                   _UINT32_(20)                                         /* (ADC_SEQR1) User Sequence Number 6 Position */
#define ADC_SEQR1_USCH6_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH6_Pos)               /* (ADC_SEQR1) User Sequence Number 6 Mask */
#define ADC_SEQR1_USCH6(value)                (ADC_SEQR1_USCH6_Msk & (_UINT32_(value) << ADC_SEQR1_USCH6_Pos)) /* Assigment of value for USCH6 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH7_Pos                   _UINT32_(24)                                         /* (ADC_SEQR1) User Sequence Number 7 Position */
#define ADC_SEQR1_USCH7_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH7_Pos)               /* (ADC_SEQR1) User Sequence Number 7 Mask */
#define ADC_SEQR1_USCH7(value)                (ADC_SEQR1_USCH7_Msk & (_UINT32_(value) << ADC_SEQR1_USCH7_Pos)) /* Assigment of value for USCH7 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH8_Pos                   _UINT32_(28)                                         /* (ADC_SEQR1) User Sequence Number 8 Position */
#define ADC_SEQR1_USCH8_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH8_Pos)               /* (ADC_SEQR1) User Sequence Number 8 Mask */
#define ADC_SEQR1_USCH8(value)                (ADC_SEQR1_USCH8_Msk & (_UINT32_(value) << ADC_SEQR1_USCH8_Pos)) /* Assigment of value for USCH8 in the ADC_SEQR1 register */
#define ADC_SEQR1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ADC_SEQR1) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define ADC_CHER_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                      (_UINT32_(0x1) << ADC_CHER_CH0_Pos)                  /* (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0(value)                   (ADC_CHER_CH0_Msk & (_UINT32_(value) << ADC_CHER_CH0_Pos)) /* Assigment of value for CH0 in the ADC_CHER register */
#define ADC_CHER_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                      (_UINT32_(0x1) << ADC_CHER_CH1_Pos)                  /* (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1(value)                   (ADC_CHER_CH1_Msk & (_UINT32_(value) << ADC_CHER_CH1_Pos)) /* Assigment of value for CH1 in the ADC_CHER register */
#define ADC_CHER_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                      (_UINT32_(0x1) << ADC_CHER_CH2_Pos)                  /* (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2(value)                   (ADC_CHER_CH2_Msk & (_UINT32_(value) << ADC_CHER_CH2_Pos)) /* Assigment of value for CH2 in the ADC_CHER register */
#define ADC_CHER_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                      (_UINT32_(0x1) << ADC_CHER_CH3_Pos)                  /* (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3(value)                   (ADC_CHER_CH3_Msk & (_UINT32_(value) << ADC_CHER_CH3_Pos)) /* Assigment of value for CH3 in the ADC_CHER register */
#define ADC_CHER_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                      (_UINT32_(0x1) << ADC_CHER_CH4_Pos)                  /* (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4(value)                   (ADC_CHER_CH4_Msk & (_UINT32_(value) << ADC_CHER_CH4_Pos)) /* Assigment of value for CH4 in the ADC_CHER register */
#define ADC_CHER_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                      (_UINT32_(0x1) << ADC_CHER_CH5_Pos)                  /* (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5(value)                   (ADC_CHER_CH5_Msk & (_UINT32_(value) << ADC_CHER_CH5_Pos)) /* Assigment of value for CH5 in the ADC_CHER register */
#define ADC_CHER_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                      (_UINT32_(0x1) << ADC_CHER_CH6_Pos)                  /* (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6(value)                   (ADC_CHER_CH6_Msk & (_UINT32_(value) << ADC_CHER_CH6_Pos)) /* Assigment of value for CH6 in the ADC_CHER register */
#define ADC_CHER_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                      (_UINT32_(0x1) << ADC_CHER_CH7_Pos)                  /* (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7(value)                   (ADC_CHER_CH7_Msk & (_UINT32_(value) << ADC_CHER_CH7_Pos)) /* Assigment of value for CH7 in the ADC_CHER register */
#define ADC_CHER_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHER Position) Channel 7 Enable */
#define ADC_CHER_CH_Msk                       (_UINT32_(0xFF) << ADC_CHER_CH_Pos)                  /* (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                    (ADC_CHER_CH_Msk & (_UINT32_(value) << ADC_CHER_CH_Pos)) 

/* -------- ADC_CHDR : (ADC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define ADC_CHDR_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH0_Pos)                  /* (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0(value)                   (ADC_CHDR_CH0_Msk & (_UINT32_(value) << ADC_CHDR_CH0_Pos)) /* Assigment of value for CH0 in the ADC_CHDR register */
#define ADC_CHDR_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH1_Pos)                  /* (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1(value)                   (ADC_CHDR_CH1_Msk & (_UINT32_(value) << ADC_CHDR_CH1_Pos)) /* Assigment of value for CH1 in the ADC_CHDR register */
#define ADC_CHDR_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH2_Pos)                  /* (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2(value)                   (ADC_CHDR_CH2_Msk & (_UINT32_(value) << ADC_CHDR_CH2_Pos)) /* Assigment of value for CH2 in the ADC_CHDR register */
#define ADC_CHDR_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH3_Pos)                  /* (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3(value)                   (ADC_CHDR_CH3_Msk & (_UINT32_(value) << ADC_CHDR_CH3_Pos)) /* Assigment of value for CH3 in the ADC_CHDR register */
#define ADC_CHDR_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH4_Pos)                  /* (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4(value)                   (ADC_CHDR_CH4_Msk & (_UINT32_(value) << ADC_CHDR_CH4_Pos)) /* Assigment of value for CH4 in the ADC_CHDR register */
#define ADC_CHDR_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH5_Pos)                  /* (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5(value)                   (ADC_CHDR_CH5_Msk & (_UINT32_(value) << ADC_CHDR_CH5_Pos)) /* Assigment of value for CH5 in the ADC_CHDR register */
#define ADC_CHDR_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH6_Pos)                  /* (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6(value)                   (ADC_CHDR_CH6_Msk & (_UINT32_(value) << ADC_CHDR_CH6_Pos)) /* Assigment of value for CH6 in the ADC_CHDR register */
#define ADC_CHDR_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH7_Pos)                  /* (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7(value)                   (ADC_CHDR_CH7_Msk & (_UINT32_(value) << ADC_CHDR_CH7_Pos)) /* Assigment of value for CH7 in the ADC_CHDR register */
#define ADC_CHDR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHDR Position) Channel 7 Disable */
#define ADC_CHDR_CH_Msk                       (_UINT32_(0xFF) << ADC_CHDR_CH_Pos)                  /* (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                    (ADC_CHDR_CH_Msk & (_UINT32_(value) << ADC_CHDR_CH_Pos)) 

/* -------- ADC_CHSR : (ADC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define ADC_CHSR_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH0_Pos)                  /* (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0(value)                   (ADC_CHSR_CH0_Msk & (_UINT32_(value) << ADC_CHSR_CH0_Pos)) /* Assigment of value for CH0 in the ADC_CHSR register */
#define ADC_CHSR_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH1_Pos)                  /* (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1(value)                   (ADC_CHSR_CH1_Msk & (_UINT32_(value) << ADC_CHSR_CH1_Pos)) /* Assigment of value for CH1 in the ADC_CHSR register */
#define ADC_CHSR_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH2_Pos)                  /* (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2(value)                   (ADC_CHSR_CH2_Msk & (_UINT32_(value) << ADC_CHSR_CH2_Pos)) /* Assigment of value for CH2 in the ADC_CHSR register */
#define ADC_CHSR_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH3_Pos)                  /* (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3(value)                   (ADC_CHSR_CH3_Msk & (_UINT32_(value) << ADC_CHSR_CH3_Pos)) /* Assigment of value for CH3 in the ADC_CHSR register */
#define ADC_CHSR_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH4_Pos)                  /* (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4(value)                   (ADC_CHSR_CH4_Msk & (_UINT32_(value) << ADC_CHSR_CH4_Pos)) /* Assigment of value for CH4 in the ADC_CHSR register */
#define ADC_CHSR_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH5_Pos)                  /* (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5(value)                   (ADC_CHSR_CH5_Msk & (_UINT32_(value) << ADC_CHSR_CH5_Pos)) /* Assigment of value for CH5 in the ADC_CHSR register */
#define ADC_CHSR_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH6_Pos)                  /* (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6(value)                   (ADC_CHSR_CH6_Msk & (_UINT32_(value) << ADC_CHSR_CH6_Pos)) /* Assigment of value for CH6 in the ADC_CHSR register */
#define ADC_CHSR_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH7_Pos)                  /* (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7(value)                   (ADC_CHSR_CH7_Msk & (_UINT32_(value) << ADC_CHSR_CH7_Pos)) /* Assigment of value for CH7 in the ADC_CHSR register */
#define ADC_CHSR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHSR Position) Channel 7 Status */
#define ADC_CHSR_CH_Msk                       (_UINT32_(0xFF) << ADC_CHSR_CH_Pos)                  /* (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                    (ADC_CHSR_CH_Msk & (_UINT32_(value) << ADC_CHSR_CH_Pos)) 

/* -------- ADC_LCDR : (ADC Offset: 0x20) ( R/ 32) Last Converted Data Register -------- */
#define ADC_LCDR_LDATA_Pos                    _UINT32_(0)                                          /* (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                    (_UINT32_(0xFFFF) << ADC_LCDR_LDATA_Pos)             /* (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)                 (ADC_LCDR_LDATA_Msk & (_UINT32_(value) << ADC_LCDR_LDATA_Pos)) /* Assigment of value for LDATA in the ADC_LCDR register */
#define ADC_LCDR_CHNBOSR_Pos                  _UINT32_(24)                                         /* (ADC_LCDR) Channel Number in Oversampling Mode Position */
#define ADC_LCDR_CHNBOSR_Msk                  (_UINT32_(0x1F) << ADC_LCDR_CHNBOSR_Pos)             /* (ADC_LCDR) Channel Number in Oversampling Mode Mask */
#define ADC_LCDR_CHNBOSR(value)               (ADC_LCDR_CHNBOSR_Msk & (_UINT32_(value) << ADC_LCDR_CHNBOSR_Pos)) /* Assigment of value for CHNBOSR in the ADC_LCDR register */
#define ADC_LCDR_Msk                          _UINT32_(0x1F00FFFF)                                 /* (ADC_LCDR) Register Mask  */

/* NO_OSR mode */
#define ADC_LCDR_NO_OSR_LDATA_Pos             _UINT32_(0)                                          /* (ADC_LCDR) Last Data Converted when No Oversampling Position */
#define ADC_LCDR_NO_OSR_LDATA_Msk             (_UINT32_(0xFFF) << ADC_LCDR_NO_OSR_LDATA_Pos)       /* (ADC_LCDR) Last Data Converted when No Oversampling Mask */
#define ADC_LCDR_NO_OSR_LDATA(value)          (ADC_LCDR_NO_OSR_LDATA_Msk & (_UINT32_(value) << ADC_LCDR_NO_OSR_LDATA_Pos))
#define ADC_LCDR_NO_OSR_CHNB_Pos              _UINT32_(12)                                         /* (ADC_LCDR) Channel Number when No Oversampling Position */
#define ADC_LCDR_NO_OSR_CHNB_Msk              (_UINT32_(0xF) << ADC_LCDR_NO_OSR_CHNB_Pos)          /* (ADC_LCDR) Channel Number when No Oversampling Mask */
#define ADC_LCDR_NO_OSR_CHNB(value)           (ADC_LCDR_NO_OSR_CHNB_Msk & (_UINT32_(value) << ADC_LCDR_NO_OSR_CHNB_Pos))
#define ADC_LCDR_NO_OSR_Msk                   _UINT32_(0x0000FFFF)                                  /* (ADC_LCDR_NO_OSR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define ADC_IER_RXRDY_Pos                     _UINT32_(0)                                          /* (ADC_IER) Receive Ready Interrupt Enable Position */
#define ADC_IER_RXRDY_Msk                     (_UINT32_(0x1) << ADC_IER_RXRDY_Pos)                 /* (ADC_IER) Receive Ready Interrupt Enable Mask */
#define ADC_IER_RXRDY(value)                  (ADC_IER_RXRDY_Msk & (_UINT32_(value) << ADC_IER_RXRDY_Pos)) /* Assigment of value for RXRDY in the ADC_IER register */
#define ADC_IER_RXEMPTY_Pos                   _UINT32_(1)                                          /* (ADC_IER) Receive FIFO Empty Interrupt Enable Position */
#define ADC_IER_RXEMPTY_Msk                   (_UINT32_(0x1) << ADC_IER_RXEMPTY_Pos)               /* (ADC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define ADC_IER_RXEMPTY(value)                (ADC_IER_RXEMPTY_Msk & (_UINT32_(value) << ADC_IER_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the ADC_IER register */
#define ADC_IER_RXFULL_Pos                    _UINT32_(2)                                          /* (ADC_IER) Receive FIFO Full Interrupt Enable Position */
#define ADC_IER_RXFULL_Msk                    (_UINT32_(0x1) << ADC_IER_RXFULL_Pos)                /* (ADC_IER) Receive FIFO Full Interrupt Enable Mask */
#define ADC_IER_RXFULL(value)                 (ADC_IER_RXFULL_Msk & (_UINT32_(value) << ADC_IER_RXFULL_Pos)) /* Assigment of value for RXFULL in the ADC_IER register */
#define ADC_IER_RXCHUNK_Pos                   _UINT32_(3)                                          /* (ADC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define ADC_IER_RXCHUNK_Msk                   (_UINT32_(0x1) << ADC_IER_RXCHUNK_Pos)               /* (ADC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define ADC_IER_RXCHUNK(value)                (ADC_IER_RXCHUNK_Msk & (_UINT32_(value) << ADC_IER_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the ADC_IER register */
#define ADC_IER_RXUDR_Pos                     _UINT32_(4)                                          /* (ADC_IER) Receive Under Flow Interrupt Enable Position */
#define ADC_IER_RXUDR_Msk                     (_UINT32_(0x1) << ADC_IER_RXUDR_Pos)                 /* (ADC_IER) Receive Under Flow Interrupt Enable Mask */
#define ADC_IER_RXUDR(value)                  (ADC_IER_RXUDR_Msk & (_UINT32_(value) << ADC_IER_RXUDR_Pos)) /* Assigment of value for RXUDR in the ADC_IER register */
#define ADC_IER_RXOVR_Pos                     _UINT32_(5)                                          /* (ADC_IER) Receive Over Flow Interrupt Enable Position */
#define ADC_IER_RXOVR_Msk                     (_UINT32_(0x1) << ADC_IER_RXOVR_Pos)                 /* (ADC_IER) Receive Over Flow Interrupt Enable Mask */
#define ADC_IER_RXOVR(value)                  (ADC_IER_RXOVR_Msk & (_UINT32_(value) << ADC_IER_RXOVR_Pos)) /* Assigment of value for RXOVR in the ADC_IER register */
#define ADC_IER_SMEV_Pos                      _UINT32_(6)                                          /* (ADC_IER) Supply Monitor Event Interrupt Enable Position */
#define ADC_IER_SMEV_Msk                      (_UINT32_(0x1) << ADC_IER_SMEV_Pos)                  /* (ADC_IER) Supply Monitor Event Interrupt Enable Mask */
#define ADC_IER_SMEV(value)                   (ADC_IER_SMEV_Msk & (_UINT32_(value) << ADC_IER_SMEV_Pos)) /* Assigment of value for SMEV in the ADC_IER register */
#define ADC_IER_EOS_Pos                       _UINT32_(18)                                         /* (ADC_IER) End Of Sequence Interrupt Enable Position */
#define ADC_IER_EOS_Msk                       (_UINT32_(0x1) << ADC_IER_EOS_Pos)                   /* (ADC_IER) End Of Sequence Interrupt Enable Mask */
#define ADC_IER_EOS(value)                    (ADC_IER_EOS_Msk & (_UINT32_(value) << ADC_IER_EOS_Pos)) /* Assigment of value for EOS in the ADC_IER register */
#define ADC_IER_TEMPCHG_Pos                   _UINT32_(19)                                         /* (ADC_IER) Temperature Change Interrupt Enable Position */
#define ADC_IER_TEMPCHG_Msk                   (_UINT32_(0x1) << ADC_IER_TEMPCHG_Pos)               /* (ADC_IER) Temperature Change Interrupt Enable Mask */
#define ADC_IER_TEMPCHG(value)                (ADC_IER_TEMPCHG_Msk & (_UINT32_(value) << ADC_IER_TEMPCHG_Pos)) /* Assigment of value for TEMPCHG in the ADC_IER register */
#define ADC_IER_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                      (_UINT32_(0x1) << ADC_IER_DRDY_Pos)                  /* (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY(value)                   (ADC_IER_DRDY_Msk & (_UINT32_(value) << ADC_IER_DRDY_Pos)) /* Assigment of value for DRDY in the ADC_IER register */
#define ADC_IER_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IER_GOVRE_Pos)                 /* (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE(value)                  (ADC_IER_GOVRE_Msk & (_UINT32_(value) << ADC_IER_GOVRE_Pos)) /* Assigment of value for GOVRE in the ADC_IER register */
#define ADC_IER_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                     (_UINT32_(0x1) << ADC_IER_COMPE_Pos)                 /* (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE(value)                  (ADC_IER_COMPE_Msk & (_UINT32_(value) << ADC_IER_COMPE_Pos)) /* Assigment of value for COMPE in the ADC_IER register */
#define ADC_IER_ENDRX_Pos                     _UINT32_(27)                                         /* (ADC_IER) End of Receive Transfer Interrupt Enable Position */
#define ADC_IER_ENDRX_Msk                     (_UINT32_(0x1) << ADC_IER_ENDRX_Pos)                 /* (ADC_IER) End of Receive Transfer Interrupt Enable Mask */
#define ADC_IER_ENDRX(value)                  (ADC_IER_ENDRX_Msk & (_UINT32_(value) << ADC_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the ADC_IER register */
#define ADC_IER_RXBUFF_Pos                    _UINT32_(28)                                         /* (ADC_IER) Receive Buffer Full Interrupt Enable Position */
#define ADC_IER_RXBUFF_Msk                    (_UINT32_(0x1) << ADC_IER_RXBUFF_Pos)                /* (ADC_IER) Receive Buffer Full Interrupt Enable Mask */
#define ADC_IER_RXBUFF(value)                 (ADC_IER_RXBUFF_Msk & (_UINT32_(value) << ADC_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the ADC_IER register */
#define ADC_IER_Msk                           _UINT32_(0x1F0C007F)                                 /* (ADC_IER) Register Mask  */


/* -------- ADC_IDR : (ADC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define ADC_IDR_RXRDY_Pos                     _UINT32_(0)                                          /* (ADC_IDR) Receive Ready Interrupt Disable Position */
#define ADC_IDR_RXRDY_Msk                     (_UINT32_(0x1) << ADC_IDR_RXRDY_Pos)                 /* (ADC_IDR) Receive Ready Interrupt Disable Mask */
#define ADC_IDR_RXRDY(value)                  (ADC_IDR_RXRDY_Msk & (_UINT32_(value) << ADC_IDR_RXRDY_Pos)) /* Assigment of value for RXRDY in the ADC_IDR register */
#define ADC_IDR_RXEMPTY_Pos                   _UINT32_(1)                                          /* (ADC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define ADC_IDR_RXEMPTY_Msk                   (_UINT32_(0x1) << ADC_IDR_RXEMPTY_Pos)               /* (ADC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define ADC_IDR_RXEMPTY(value)                (ADC_IDR_RXEMPTY_Msk & (_UINT32_(value) << ADC_IDR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the ADC_IDR register */
#define ADC_IDR_RXFULL_Pos                    _UINT32_(2)                                          /* (ADC_IDR) Receive FIFO Full Interrupt Disable Position */
#define ADC_IDR_RXFULL_Msk                    (_UINT32_(0x1) << ADC_IDR_RXFULL_Pos)                /* (ADC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define ADC_IDR_RXFULL(value)                 (ADC_IDR_RXFULL_Msk & (_UINT32_(value) << ADC_IDR_RXFULL_Pos)) /* Assigment of value for RXFULL in the ADC_IDR register */
#define ADC_IDR_RXCHUNK_Pos                   _UINT32_(3)                                          /* (ADC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define ADC_IDR_RXCHUNK_Msk                   (_UINT32_(0x1) << ADC_IDR_RXCHUNK_Pos)               /* (ADC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define ADC_IDR_RXCHUNK(value)                (ADC_IDR_RXCHUNK_Msk & (_UINT32_(value) << ADC_IDR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the ADC_IDR register */
#define ADC_IDR_RXUDR_Pos                     _UINT32_(4)                                          /* (ADC_IDR) Receive Under Flow Interrupt Disable Position */
#define ADC_IDR_RXUDR_Msk                     (_UINT32_(0x1) << ADC_IDR_RXUDR_Pos)                 /* (ADC_IDR) Receive Under Flow Interrupt Disable Mask */
#define ADC_IDR_RXUDR(value)                  (ADC_IDR_RXUDR_Msk & (_UINT32_(value) << ADC_IDR_RXUDR_Pos)) /* Assigment of value for RXUDR in the ADC_IDR register */
#define ADC_IDR_RXOVR_Pos                     _UINT32_(5)                                          /* (ADC_IDR) Receive Over Flow Interrupt Disable Position */
#define ADC_IDR_RXOVR_Msk                     (_UINT32_(0x1) << ADC_IDR_RXOVR_Pos)                 /* (ADC_IDR) Receive Over Flow Interrupt Disable Mask */
#define ADC_IDR_RXOVR(value)                  (ADC_IDR_RXOVR_Msk & (_UINT32_(value) << ADC_IDR_RXOVR_Pos)) /* Assigment of value for RXOVR in the ADC_IDR register */
#define ADC_IDR_SMEV_Pos                      _UINT32_(6)                                          /* (ADC_IDR) Supply Monitor Event Interrupt Disable Position */
#define ADC_IDR_SMEV_Msk                      (_UINT32_(0x1) << ADC_IDR_SMEV_Pos)                  /* (ADC_IDR) Supply Monitor Event Interrupt Disable Mask */
#define ADC_IDR_SMEV(value)                   (ADC_IDR_SMEV_Msk & (_UINT32_(value) << ADC_IDR_SMEV_Pos)) /* Assigment of value for SMEV in the ADC_IDR register */
#define ADC_IDR_EOS_Pos                       _UINT32_(18)                                         /* (ADC_IDR) End Of Sequence Interrupt Disable Position */
#define ADC_IDR_EOS_Msk                       (_UINT32_(0x1) << ADC_IDR_EOS_Pos)                   /* (ADC_IDR) End Of Sequence Interrupt Disable Mask */
#define ADC_IDR_EOS(value)                    (ADC_IDR_EOS_Msk & (_UINT32_(value) << ADC_IDR_EOS_Pos)) /* Assigment of value for EOS in the ADC_IDR register */
#define ADC_IDR_TEMPCHG_Pos                   _UINT32_(19)                                         /* (ADC_IDR) Temperature Change Interrupt Disable Position */
#define ADC_IDR_TEMPCHG_Msk                   (_UINT32_(0x1) << ADC_IDR_TEMPCHG_Pos)               /* (ADC_IDR) Temperature Change Interrupt Disable Mask */
#define ADC_IDR_TEMPCHG(value)                (ADC_IDR_TEMPCHG_Msk & (_UINT32_(value) << ADC_IDR_TEMPCHG_Pos)) /* Assigment of value for TEMPCHG in the ADC_IDR register */
#define ADC_IDR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                      (_UINT32_(0x1) << ADC_IDR_DRDY_Pos)                  /* (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY(value)                   (ADC_IDR_DRDY_Msk & (_UINT32_(value) << ADC_IDR_DRDY_Pos)) /* Assigment of value for DRDY in the ADC_IDR register */
#define ADC_IDR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IDR_GOVRE_Pos)                 /* (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE(value)                  (ADC_IDR_GOVRE_Msk & (_UINT32_(value) << ADC_IDR_GOVRE_Pos)) /* Assigment of value for GOVRE in the ADC_IDR register */
#define ADC_IDR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                     (_UINT32_(0x1) << ADC_IDR_COMPE_Pos)                 /* (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE(value)                  (ADC_IDR_COMPE_Msk & (_UINT32_(value) << ADC_IDR_COMPE_Pos)) /* Assigment of value for COMPE in the ADC_IDR register */
#define ADC_IDR_ENDRX_Pos                     _UINT32_(27)                                         /* (ADC_IDR) End of Receive Transfer Interrupt Disable Position */
#define ADC_IDR_ENDRX_Msk                     (_UINT32_(0x1) << ADC_IDR_ENDRX_Pos)                 /* (ADC_IDR) End of Receive Transfer Interrupt Disable Mask */
#define ADC_IDR_ENDRX(value)                  (ADC_IDR_ENDRX_Msk & (_UINT32_(value) << ADC_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the ADC_IDR register */
#define ADC_IDR_RXBUFF_Pos                    _UINT32_(28)                                         /* (ADC_IDR) Receive Buffer Full Interrupt Disable Position */
#define ADC_IDR_RXBUFF_Msk                    (_UINT32_(0x1) << ADC_IDR_RXBUFF_Pos)                /* (ADC_IDR) Receive Buffer Full Interrupt Disable Mask */
#define ADC_IDR_RXBUFF(value)                 (ADC_IDR_RXBUFF_Msk & (_UINT32_(value) << ADC_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the ADC_IDR register */
#define ADC_IDR_Msk                           _UINT32_(0x1F0C007F)                                 /* (ADC_IDR) Register Mask  */


/* -------- ADC_IMR : (ADC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define ADC_IMR_RXRDY_Pos                     _UINT32_(0)                                          /* (ADC_IMR) Receive Ready Interrupt Mask Position */
#define ADC_IMR_RXRDY_Msk                     (_UINT32_(0x1) << ADC_IMR_RXRDY_Pos)                 /* (ADC_IMR) Receive Ready Interrupt Mask Mask */
#define ADC_IMR_RXRDY(value)                  (ADC_IMR_RXRDY_Msk & (_UINT32_(value) << ADC_IMR_RXRDY_Pos)) /* Assigment of value for RXRDY in the ADC_IMR register */
#define ADC_IMR_RXEMPTY_Pos                   _UINT32_(1)                                          /* (ADC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define ADC_IMR_RXEMPTY_Msk                   (_UINT32_(0x1) << ADC_IMR_RXEMPTY_Pos)               /* (ADC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define ADC_IMR_RXEMPTY(value)                (ADC_IMR_RXEMPTY_Msk & (_UINT32_(value) << ADC_IMR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the ADC_IMR register */
#define ADC_IMR_RXFULL_Pos                    _UINT32_(2)                                          /* (ADC_IMR) Receive FIFO Full Interrupt Mask Position */
#define ADC_IMR_RXFULL_Msk                    (_UINT32_(0x1) << ADC_IMR_RXFULL_Pos)                /* (ADC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define ADC_IMR_RXFULL(value)                 (ADC_IMR_RXFULL_Msk & (_UINT32_(value) << ADC_IMR_RXFULL_Pos)) /* Assigment of value for RXFULL in the ADC_IMR register */
#define ADC_IMR_RXCHUNK_Pos                   _UINT32_(3)                                          /* (ADC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define ADC_IMR_RXCHUNK_Msk                   (_UINT32_(0x1) << ADC_IMR_RXCHUNK_Pos)               /* (ADC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define ADC_IMR_RXCHUNK(value)                (ADC_IMR_RXCHUNK_Msk & (_UINT32_(value) << ADC_IMR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the ADC_IMR register */
#define ADC_IMR_RXUDR_Pos                     _UINT32_(4)                                          /* (ADC_IMR) Receive Under Flow Interrupt Mask Position */
#define ADC_IMR_RXUDR_Msk                     (_UINT32_(0x1) << ADC_IMR_RXUDR_Pos)                 /* (ADC_IMR) Receive Under Flow Interrupt Mask Mask */
#define ADC_IMR_RXUDR(value)                  (ADC_IMR_RXUDR_Msk & (_UINT32_(value) << ADC_IMR_RXUDR_Pos)) /* Assigment of value for RXUDR in the ADC_IMR register */
#define ADC_IMR_RXOVR_Pos                     _UINT32_(5)                                          /* (ADC_IMR) Receive Over Flow Interrupt Mask Position */
#define ADC_IMR_RXOVR_Msk                     (_UINT32_(0x1) << ADC_IMR_RXOVR_Pos)                 /* (ADC_IMR) Receive Over Flow Interrupt Mask Mask */
#define ADC_IMR_RXOVR(value)                  (ADC_IMR_RXOVR_Msk & (_UINT32_(value) << ADC_IMR_RXOVR_Pos)) /* Assigment of value for RXOVR in the ADC_IMR register */
#define ADC_IMR_SMEV_Pos                      _UINT32_(6)                                          /* (ADC_IMR) Supply Monitor Event Interrupt Mask Position */
#define ADC_IMR_SMEV_Msk                      (_UINT32_(0x1) << ADC_IMR_SMEV_Pos)                  /* (ADC_IMR) Supply Monitor Event Interrupt Mask Mask */
#define ADC_IMR_SMEV(value)                   (ADC_IMR_SMEV_Msk & (_UINT32_(value) << ADC_IMR_SMEV_Pos)) /* Assigment of value for SMEV in the ADC_IMR register */
#define ADC_IMR_EOS_Pos                       _UINT32_(18)                                         /* (ADC_IMR) End Of Sequence Interrupt Mask Position */
#define ADC_IMR_EOS_Msk                       (_UINT32_(0x1) << ADC_IMR_EOS_Pos)                   /* (ADC_IMR) End Of Sequence Interrupt Mask Mask */
#define ADC_IMR_EOS(value)                    (ADC_IMR_EOS_Msk & (_UINT32_(value) << ADC_IMR_EOS_Pos)) /* Assigment of value for EOS in the ADC_IMR register */
#define ADC_IMR_TEMPCHG_Pos                   _UINT32_(19)                                         /* (ADC_IMR) Temperature Change Interrupt Mask Position */
#define ADC_IMR_TEMPCHG_Msk                   (_UINT32_(0x1) << ADC_IMR_TEMPCHG_Pos)               /* (ADC_IMR) Temperature Change Interrupt Mask Mask */
#define ADC_IMR_TEMPCHG(value)                (ADC_IMR_TEMPCHG_Msk & (_UINT32_(value) << ADC_IMR_TEMPCHG_Pos)) /* Assigment of value for TEMPCHG in the ADC_IMR register */
#define ADC_IMR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                      (_UINT32_(0x1) << ADC_IMR_DRDY_Pos)                  /* (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY(value)                   (ADC_IMR_DRDY_Msk & (_UINT32_(value) << ADC_IMR_DRDY_Pos)) /* Assigment of value for DRDY in the ADC_IMR register */
#define ADC_IMR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IMR_GOVRE_Pos)                 /* (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE(value)                  (ADC_IMR_GOVRE_Msk & (_UINT32_(value) << ADC_IMR_GOVRE_Pos)) /* Assigment of value for GOVRE in the ADC_IMR register */
#define ADC_IMR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                     (_UINT32_(0x1) << ADC_IMR_COMPE_Pos)                 /* (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE(value)                  (ADC_IMR_COMPE_Msk & (_UINT32_(value) << ADC_IMR_COMPE_Pos)) /* Assigment of value for COMPE in the ADC_IMR register */
#define ADC_IMR_ENDRX_Pos                     _UINT32_(27)                                         /* (ADC_IMR) End of Receive Transfer Interrupt Mask Position */
#define ADC_IMR_ENDRX_Msk                     (_UINT32_(0x1) << ADC_IMR_ENDRX_Pos)                 /* (ADC_IMR) End of Receive Transfer Interrupt Mask Mask */
#define ADC_IMR_ENDRX(value)                  (ADC_IMR_ENDRX_Msk & (_UINT32_(value) << ADC_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the ADC_IMR register */
#define ADC_IMR_RXBUFF_Pos                    _UINT32_(28)                                         /* (ADC_IMR) Receive Buffer Full Interrupt Mask Position */
#define ADC_IMR_RXBUFF_Msk                    (_UINT32_(0x1) << ADC_IMR_RXBUFF_Pos)                /* (ADC_IMR) Receive Buffer Full Interrupt Mask Mask */
#define ADC_IMR_RXBUFF(value)                 (ADC_IMR_RXBUFF_Msk & (_UINT32_(value) << ADC_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the ADC_IMR register */
#define ADC_IMR_Msk                           _UINT32_(0x1F0C007F)                                 /* (ADC_IMR) Register Mask  */


/* -------- ADC_ISR : (ADC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define ADC_ISR_RXRDY_Pos                     _UINT32_(0)                                          /* (ADC_ISR) Receive Ready (cleared on read) Position */
#define ADC_ISR_RXRDY_Msk                     (_UINT32_(0x1) << ADC_ISR_RXRDY_Pos)                 /* (ADC_ISR) Receive Ready (cleared on read) Mask */
#define ADC_ISR_RXRDY(value)                  (ADC_ISR_RXRDY_Msk & (_UINT32_(value) << ADC_ISR_RXRDY_Pos)) /* Assigment of value for RXRDY in the ADC_ISR register */
#define ADC_ISR_RXEMPTY_Pos                   _UINT32_(1)                                          /* (ADC_ISR) Receive FIFO Empty (cleared on read) Position */
#define ADC_ISR_RXEMPTY_Msk                   (_UINT32_(0x1) << ADC_ISR_RXEMPTY_Pos)               /* (ADC_ISR) Receive FIFO Empty (cleared on read) Mask */
#define ADC_ISR_RXEMPTY(value)                (ADC_ISR_RXEMPTY_Msk & (_UINT32_(value) << ADC_ISR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the ADC_ISR register */
#define ADC_ISR_RXFULL_Pos                    _UINT32_(2)                                          /* (ADC_ISR) Receive FIFO Full (cleared on read) Position */
#define ADC_ISR_RXFULL_Msk                    (_UINT32_(0x1) << ADC_ISR_RXFULL_Pos)                /* (ADC_ISR) Receive FIFO Full (cleared on read) Mask */
#define ADC_ISR_RXFULL(value)                 (ADC_ISR_RXFULL_Msk & (_UINT32_(value) << ADC_ISR_RXFULL_Pos)) /* Assigment of value for RXFULL in the ADC_ISR register */
#define ADC_ISR_RXCHUNK_Pos                   _UINT32_(3)                                          /* (ADC_ISR) Receive FIFO Chunk (cleared on read) Position */
#define ADC_ISR_RXCHUNK_Msk                   (_UINT32_(0x1) << ADC_ISR_RXCHUNK_Pos)               /* (ADC_ISR) Receive FIFO Chunk (cleared on read) Mask */
#define ADC_ISR_RXCHUNK(value)                (ADC_ISR_RXCHUNK_Msk & (_UINT32_(value) << ADC_ISR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the ADC_ISR register */
#define ADC_ISR_RXUDR_Pos                     _UINT32_(4)                                          /* (ADC_ISR) Receive Under Flow (cleared on read) Position */
#define ADC_ISR_RXUDR_Msk                     (_UINT32_(0x1) << ADC_ISR_RXUDR_Pos)                 /* (ADC_ISR) Receive Under Flow (cleared on read) Mask */
#define ADC_ISR_RXUDR(value)                  (ADC_ISR_RXUDR_Msk & (_UINT32_(value) << ADC_ISR_RXUDR_Pos)) /* Assigment of value for RXUDR in the ADC_ISR register */
#define ADC_ISR_RXOVR_Pos                     _UINT32_(5)                                          /* (ADC_ISR) Receive Over Flow (cleared on read) Position */
#define ADC_ISR_RXOVR_Msk                     (_UINT32_(0x1) << ADC_ISR_RXOVR_Pos)                 /* (ADC_ISR) Receive Over Flow (cleared on read) Mask */
#define ADC_ISR_RXOVR(value)                  (ADC_ISR_RXOVR_Msk & (_UINT32_(value) << ADC_ISR_RXOVR_Pos)) /* Assigment of value for RXOVR in the ADC_ISR register */
#define ADC_ISR_SMEV_Pos                      _UINT32_(6)                                          /* (ADC_ISR) Supply Monitor Event (cleared on read) Position */
#define ADC_ISR_SMEV_Msk                      (_UINT32_(0x1) << ADC_ISR_SMEV_Pos)                  /* (ADC_ISR) Supply Monitor Event (cleared on read) Mask */
#define ADC_ISR_SMEV(value)                   (ADC_ISR_SMEV_Msk & (_UINT32_(value) << ADC_ISR_SMEV_Pos)) /* Assigment of value for SMEV in the ADC_ISR register */
#define ADC_ISR_EOS_Pos                       _UINT32_(18)                                         /* (ADC_ISR) End Of Sequence (cleared on read) Position */
#define ADC_ISR_EOS_Msk                       (_UINT32_(0x1) << ADC_ISR_EOS_Pos)                   /* (ADC_ISR) End Of Sequence (cleared on read) Mask */
#define ADC_ISR_EOS(value)                    (ADC_ISR_EOS_Msk & (_UINT32_(value) << ADC_ISR_EOS_Pos)) /* Assigment of value for EOS in the ADC_ISR register */
#define ADC_ISR_TEMPCHG_Pos                   _UINT32_(19)                                         /* (ADC_ISR) Temperature Change (cleared on read) Position */
#define ADC_ISR_TEMPCHG_Msk                   (_UINT32_(0x1) << ADC_ISR_TEMPCHG_Pos)               /* (ADC_ISR) Temperature Change (cleared on read) Mask */
#define ADC_ISR_TEMPCHG(value)                (ADC_ISR_TEMPCHG_Msk & (_UINT32_(value) << ADC_ISR_TEMPCHG_Pos)) /* Assigment of value for TEMPCHG in the ADC_ISR register */
#define ADC_ISR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                      (_UINT32_(0x1) << ADC_ISR_DRDY_Pos)                  /* (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY(value)                   (ADC_ISR_DRDY_Msk & (_UINT32_(value) << ADC_ISR_DRDY_Pos)) /* Assigment of value for DRDY in the ADC_ISR register */
#define ADC_ISR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_ISR_GOVRE_Pos)                 /* (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE(value)                  (ADC_ISR_GOVRE_Msk & (_UINT32_(value) << ADC_ISR_GOVRE_Pos)) /* Assigment of value for GOVRE in the ADC_ISR register */
#define ADC_ISR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                     (_UINT32_(0x1) << ADC_ISR_COMPE_Pos)                 /* (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE(value)                  (ADC_ISR_COMPE_Msk & (_UINT32_(value) << ADC_ISR_COMPE_Pos)) /* Assigment of value for COMPE in the ADC_ISR register */
#define ADC_ISR_ENDRX_Pos                     _UINT32_(27)                                         /* (ADC_ISR) End of Receive Transfer (cleared by writing ADC_RCR or ADC_RNCR) Position */
#define ADC_ISR_ENDRX_Msk                     (_UINT32_(0x1) << ADC_ISR_ENDRX_Pos)                 /* (ADC_ISR) End of Receive Transfer (cleared by writing ADC_RCR or ADC_RNCR) Mask */
#define ADC_ISR_ENDRX(value)                  (ADC_ISR_ENDRX_Msk & (_UINT32_(value) << ADC_ISR_ENDRX_Pos)) /* Assigment of value for ENDRX in the ADC_ISR register */
#define ADC_ISR_RXBUFF_Pos                    _UINT32_(28)                                         /* (ADC_ISR) Receive Buffer Full (cleared by writing ADC_RCR or ADC_RNCR) Position */
#define ADC_ISR_RXBUFF_Msk                    (_UINT32_(0x1) << ADC_ISR_RXBUFF_Pos)                /* (ADC_ISR) Receive Buffer Full (cleared by writing ADC_RCR or ADC_RNCR) Mask */
#define ADC_ISR_RXBUFF(value)                 (ADC_ISR_RXBUFF_Msk & (_UINT32_(value) << ADC_ISR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the ADC_ISR register */
#define ADC_ISR_Msk                           _UINT32_(0x1F0C007F)                                 /* (ADC_ISR) Register Mask  */


/* -------- ADC_EOC_IER : (ADC Offset: 0x34) ( /W 32) End Of Conversion Interrupt Enable Register -------- */
#define ADC_EOC_IER_EOC0_Pos                  _UINT32_(0)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_EOC_IER_EOC0_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC0_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_EOC_IER_EOC0(value)               (ADC_EOC_IER_EOC0_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC0_Pos)) /* Assigment of value for EOC0 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC1_Pos                  _UINT32_(1)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_EOC_IER_EOC1_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC1_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_EOC_IER_EOC1(value)               (ADC_EOC_IER_EOC1_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC1_Pos)) /* Assigment of value for EOC1 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC2_Pos                  _UINT32_(2)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_EOC_IER_EOC2_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC2_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_EOC_IER_EOC2(value)               (ADC_EOC_IER_EOC2_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC2_Pos)) /* Assigment of value for EOC2 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC3_Pos                  _UINT32_(3)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_EOC_IER_EOC3_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC3_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_EOC_IER_EOC3(value)               (ADC_EOC_IER_EOC3_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC3_Pos)) /* Assigment of value for EOC3 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC4_Pos                  _UINT32_(4)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_EOC_IER_EOC4_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC4_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_EOC_IER_EOC4(value)               (ADC_EOC_IER_EOC4_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC4_Pos)) /* Assigment of value for EOC4 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC5_Pos                  _UINT32_(5)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_EOC_IER_EOC5_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC5_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_EOC_IER_EOC5(value)               (ADC_EOC_IER_EOC5_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC5_Pos)) /* Assigment of value for EOC5 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC6_Pos                  _UINT32_(6)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_EOC_IER_EOC6_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC6_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_EOC_IER_EOC6(value)               (ADC_EOC_IER_EOC6_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC6_Pos)) /* Assigment of value for EOC6 in the ADC_EOC_IER register */
#define ADC_EOC_IER_EOC7_Pos                  _UINT32_(7)                                          /* (ADC_EOC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_EOC_IER_EOC7_Msk                  (_UINT32_(0x1) << ADC_EOC_IER_EOC7_Pos)              /* (ADC_EOC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_EOC_IER_EOC7(value)               (ADC_EOC_IER_EOC7_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC7_Pos)) /* Assigment of value for EOC7 in the ADC_EOC_IER register */
#define ADC_EOC_IER_Msk                       _UINT32_(0x000000FF)                                 /* (ADC_EOC_IER) Register Mask  */

#define ADC_EOC_IER_EOC_Pos                   _UINT32_(0)                                          /* (ADC_EOC_IER Position) End of Conversion Interrupt Enable 7 */
#define ADC_EOC_IER_EOC_Msk                   (_UINT32_(0xFF) << ADC_EOC_IER_EOC_Pos)              /* (ADC_EOC_IER Mask) EOC */
#define ADC_EOC_IER_EOC(value)                (ADC_EOC_IER_EOC_Msk & (_UINT32_(value) << ADC_EOC_IER_EOC_Pos)) 

/* -------- ADC_EOC_IDR : (ADC Offset: 0x38) ( /W 32) End Of Conversion Interrupt Disable Register -------- */
#define ADC_EOC_IDR_EOC0_Pos                  _UINT32_(0)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_EOC_IDR_EOC0_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC0_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_EOC_IDR_EOC0(value)               (ADC_EOC_IDR_EOC0_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC0_Pos)) /* Assigment of value for EOC0 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC1_Pos                  _UINT32_(1)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_EOC_IDR_EOC1_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC1_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_EOC_IDR_EOC1(value)               (ADC_EOC_IDR_EOC1_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC1_Pos)) /* Assigment of value for EOC1 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC2_Pos                  _UINT32_(2)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_EOC_IDR_EOC2_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC2_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_EOC_IDR_EOC2(value)               (ADC_EOC_IDR_EOC2_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC2_Pos)) /* Assigment of value for EOC2 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC3_Pos                  _UINT32_(3)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_EOC_IDR_EOC3_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC3_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_EOC_IDR_EOC3(value)               (ADC_EOC_IDR_EOC3_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC3_Pos)) /* Assigment of value for EOC3 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC4_Pos                  _UINT32_(4)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_EOC_IDR_EOC4_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC4_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_EOC_IDR_EOC4(value)               (ADC_EOC_IDR_EOC4_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC4_Pos)) /* Assigment of value for EOC4 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC5_Pos                  _UINT32_(5)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_EOC_IDR_EOC5_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC5_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_EOC_IDR_EOC5(value)               (ADC_EOC_IDR_EOC5_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC5_Pos)) /* Assigment of value for EOC5 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC6_Pos                  _UINT32_(6)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_EOC_IDR_EOC6_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC6_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_EOC_IDR_EOC6(value)               (ADC_EOC_IDR_EOC6_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC6_Pos)) /* Assigment of value for EOC6 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_EOC7_Pos                  _UINT32_(7)                                          /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_EOC_IDR_EOC7_Msk                  (_UINT32_(0x1) << ADC_EOC_IDR_EOC7_Pos)              /* (ADC_EOC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_EOC_IDR_EOC7(value)               (ADC_EOC_IDR_EOC7_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC7_Pos)) /* Assigment of value for EOC7 in the ADC_EOC_IDR register */
#define ADC_EOC_IDR_Msk                       _UINT32_(0x000000FF)                                 /* (ADC_EOC_IDR) Register Mask  */

#define ADC_EOC_IDR_EOC_Pos                   _UINT32_(0)                                          /* (ADC_EOC_IDR Position) End of Conversion Interrupt Disable 7 */
#define ADC_EOC_IDR_EOC_Msk                   (_UINT32_(0xFF) << ADC_EOC_IDR_EOC_Pos)              /* (ADC_EOC_IDR Mask) EOC */
#define ADC_EOC_IDR_EOC(value)                (ADC_EOC_IDR_EOC_Msk & (_UINT32_(value) << ADC_EOC_IDR_EOC_Pos)) 

/* -------- ADC_EOC_IMR : (ADC Offset: 0x3C) ( R/ 32) End Of Conversion Interrupt Mask Register -------- */
#define ADC_EOC_IMR_EOC0_Pos                  _UINT32_(0)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_EOC_IMR_EOC0_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC0_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_EOC_IMR_EOC0(value)               (ADC_EOC_IMR_EOC0_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC0_Pos)) /* Assigment of value for EOC0 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC1_Pos                  _UINT32_(1)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_EOC_IMR_EOC1_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC1_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_EOC_IMR_EOC1(value)               (ADC_EOC_IMR_EOC1_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC1_Pos)) /* Assigment of value for EOC1 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC2_Pos                  _UINT32_(2)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_EOC_IMR_EOC2_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC2_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_EOC_IMR_EOC2(value)               (ADC_EOC_IMR_EOC2_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC2_Pos)) /* Assigment of value for EOC2 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC3_Pos                  _UINT32_(3)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_EOC_IMR_EOC3_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC3_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_EOC_IMR_EOC3(value)               (ADC_EOC_IMR_EOC3_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC3_Pos)) /* Assigment of value for EOC3 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC4_Pos                  _UINT32_(4)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_EOC_IMR_EOC4_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC4_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_EOC_IMR_EOC4(value)               (ADC_EOC_IMR_EOC4_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC4_Pos)) /* Assigment of value for EOC4 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC5_Pos                  _UINT32_(5)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_EOC_IMR_EOC5_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC5_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_EOC_IMR_EOC5(value)               (ADC_EOC_IMR_EOC5_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC5_Pos)) /* Assigment of value for EOC5 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC6_Pos                  _UINT32_(6)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_EOC_IMR_EOC6_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC6_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_EOC_IMR_EOC6(value)               (ADC_EOC_IMR_EOC6_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC6_Pos)) /* Assigment of value for EOC6 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_EOC7_Pos                  _UINT32_(7)                                          /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_EOC_IMR_EOC7_Msk                  (_UINT32_(0x1) << ADC_EOC_IMR_EOC7_Pos)              /* (ADC_EOC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_EOC_IMR_EOC7(value)               (ADC_EOC_IMR_EOC7_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC7_Pos)) /* Assigment of value for EOC7 in the ADC_EOC_IMR register */
#define ADC_EOC_IMR_Msk                       _UINT32_(0x000000FF)                                 /* (ADC_EOC_IMR) Register Mask  */

#define ADC_EOC_IMR_EOC_Pos                   _UINT32_(0)                                          /* (ADC_EOC_IMR Position) End of Conversion Interrupt Mask 7 */
#define ADC_EOC_IMR_EOC_Msk                   (_UINT32_(0xFF) << ADC_EOC_IMR_EOC_Pos)              /* (ADC_EOC_IMR Mask) EOC */
#define ADC_EOC_IMR_EOC(value)                (ADC_EOC_IMR_EOC_Msk & (_UINT32_(value) << ADC_EOC_IMR_EOC_Pos)) 

/* -------- ADC_EOC_ISR : (ADC Offset: 0x40) ( R/ 32) End Of Conversion Interrupt Status Register -------- */
#define ADC_EOC_ISR_EOC0_Pos                  _UINT32_(0)                                          /* (ADC_EOC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC0_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC0_Pos)              /* (ADC_EOC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC0(value)               (ADC_EOC_ISR_EOC0_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC0_Pos)) /* Assigment of value for EOC0 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC1_Pos                  _UINT32_(1)                                          /* (ADC_EOC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC1_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC1_Pos)              /* (ADC_EOC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC1(value)               (ADC_EOC_ISR_EOC1_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC1_Pos)) /* Assigment of value for EOC1 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC2_Pos                  _UINT32_(2)                                          /* (ADC_EOC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC2_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC2_Pos)              /* (ADC_EOC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC2(value)               (ADC_EOC_ISR_EOC2_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC2_Pos)) /* Assigment of value for EOC2 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC3_Pos                  _UINT32_(3)                                          /* (ADC_EOC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC3_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC3_Pos)              /* (ADC_EOC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC3(value)               (ADC_EOC_ISR_EOC3_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC3_Pos)) /* Assigment of value for EOC3 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC4_Pos                  _UINT32_(4)                                          /* (ADC_EOC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC4_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC4_Pos)              /* (ADC_EOC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC4(value)               (ADC_EOC_ISR_EOC4_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC4_Pos)) /* Assigment of value for EOC4 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC5_Pos                  _UINT32_(5)                                          /* (ADC_EOC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC5_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC5_Pos)              /* (ADC_EOC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC5(value)               (ADC_EOC_ISR_EOC5_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC5_Pos)) /* Assigment of value for EOC5 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC6_Pos                  _UINT32_(6)                                          /* (ADC_EOC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC6_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC6_Pos)              /* (ADC_EOC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC6(value)               (ADC_EOC_ISR_EOC6_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC6_Pos)) /* Assigment of value for EOC6 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_EOC7_Pos                  _UINT32_(7)                                          /* (ADC_EOC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_EOC_ISR_EOC7_Msk                  (_UINT32_(0x1) << ADC_EOC_ISR_EOC7_Pos)              /* (ADC_EOC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_EOC_ISR_EOC7(value)               (ADC_EOC_ISR_EOC7_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC7_Pos)) /* Assigment of value for EOC7 in the ADC_EOC_ISR register */
#define ADC_EOC_ISR_Msk                       _UINT32_(0x000000FF)                                 /* (ADC_EOC_ISR) Register Mask  */

#define ADC_EOC_ISR_EOC_Pos                   _UINT32_(0)                                          /* (ADC_EOC_ISR Position) End of Conversion 7 (automatically set / cleared) */
#define ADC_EOC_ISR_EOC_Msk                   (_UINT32_(0xFF) << ADC_EOC_ISR_EOC_Pos)              /* (ADC_EOC_ISR Mask) EOC */
#define ADC_EOC_ISR_EOC(value)                (ADC_EOC_ISR_EOC_Msk & (_UINT32_(value) << ADC_EOC_ISR_EOC_Pos)) 

/* -------- ADC_TEMPMR : (ADC Offset: 0x44) (R/W 32) Temperature Sensor Mode Register -------- */
#define ADC_TEMPMR_TEMPON_Pos                 _UINT32_(0)                                          /* (ADC_TEMPMR) Temperature Sensor On Position */
#define ADC_TEMPMR_TEMPON_Msk                 (_UINT32_(0x1) << ADC_TEMPMR_TEMPON_Pos)             /* (ADC_TEMPMR) Temperature Sensor On Mask */
#define ADC_TEMPMR_TEMPON(value)              (ADC_TEMPMR_TEMPON_Msk & (_UINT32_(value) << ADC_TEMPMR_TEMPON_Pos)) /* Assigment of value for TEMPON in the ADC_TEMPMR register */
#define ADC_TEMPMR_TEMPCMPMOD_Pos             _UINT32_(4)                                          /* (ADC_TEMPMR) Temperature Comparison Mode Position */
#define ADC_TEMPMR_TEMPCMPMOD_Msk             (_UINT32_(0x3) << ADC_TEMPMR_TEMPCMPMOD_Pos)         /* (ADC_TEMPMR) Temperature Comparison Mode Mask */
#define ADC_TEMPMR_TEMPCMPMOD(value)          (ADC_TEMPMR_TEMPCMPMOD_Msk & (_UINT32_(value) << ADC_TEMPMR_TEMPCMPMOD_Pos)) /* Assigment of value for TEMPCMPMOD in the ADC_TEMPMR register */
#define   ADC_TEMPMR_TEMPCMPMOD_LOW_Val       _UINT32_(0x0)                                        /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_HIGH_Val      _UINT32_(0x1)                                        /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_IN_Val        _UINT32_(0x2)                                        /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is in the comparison window.  */
#define   ADC_TEMPMR_TEMPCMPMOD_OUT_Val       _UINT32_(0x3)                                        /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is out of the comparison window.  */
#define ADC_TEMPMR_TEMPCMPMOD_LOW             (ADC_TEMPMR_TEMPCMPMOD_LOW_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is lower than the low threshold of the window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_HIGH            (ADC_TEMPMR_TEMPCMPMOD_HIGH_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is higher than the high threshold of the window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_IN              (ADC_TEMPMR_TEMPCMPMOD_IN_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is in the comparison window. Position  */
#define ADC_TEMPMR_TEMPCMPMOD_OUT             (ADC_TEMPMR_TEMPCMPMOD_OUT_Val << ADC_TEMPMR_TEMPCMPMOD_Pos) /* (ADC_TEMPMR) Generates the TEMPCHG flag in ADC_ISR when the converted data is out of the comparison window. Position  */
#define ADC_TEMPMR_Msk                        _UINT32_(0x00000031)                                 /* (ADC_TEMPMR) Register Mask  */


/* -------- ADC_TEMPCWR : (ADC Offset: 0x48) (R/W 32) Temperature Compare Window Register -------- */
#define ADC_TEMPCWR_TLOWTHRES_Pos             _UINT32_(0)                                          /* (ADC_TEMPCWR) Temperature Low Threshold Position */
#define ADC_TEMPCWR_TLOWTHRES_Msk             (_UINT32_(0xFFF) << ADC_TEMPCWR_TLOWTHRES_Pos)       /* (ADC_TEMPCWR) Temperature Low Threshold Mask */
#define ADC_TEMPCWR_TLOWTHRES(value)          (ADC_TEMPCWR_TLOWTHRES_Msk & (_UINT32_(value) << ADC_TEMPCWR_TLOWTHRES_Pos)) /* Assigment of value for TLOWTHRES in the ADC_TEMPCWR register */
#define ADC_TEMPCWR_THIGHTHRES_Pos            _UINT32_(16)                                         /* (ADC_TEMPCWR) Temperature High Threshold Position */
#define ADC_TEMPCWR_THIGHTHRES_Msk            (_UINT32_(0xFFF) << ADC_TEMPCWR_THIGHTHRES_Pos)      /* (ADC_TEMPCWR) Temperature High Threshold Mask */
#define ADC_TEMPCWR_THIGHTHRES(value)         (ADC_TEMPCWR_THIGHTHRES_Msk & (_UINT32_(value) << ADC_TEMPCWR_THIGHTHRES_Pos)) /* Assigment of value for THIGHTHRES in the ADC_TEMPCWR register */
#define ADC_TEMPCWR_Msk                       _UINT32_(0x0FFF0FFF)                                 /* (ADC_TEMPCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x4C) ( R/ 32) Overrun Status Register -------- */
#define ADC_OVER_OVRE0_Pos                    _UINT32_(0)                                          /* (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE0_Pos)                /* (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0(value)                 (ADC_OVER_OVRE0_Msk & (_UINT32_(value) << ADC_OVER_OVRE0_Pos)) /* Assigment of value for OVRE0 in the ADC_OVER register */
#define ADC_OVER_OVRE1_Pos                    _UINT32_(1)                                          /* (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE1_Pos)                /* (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1(value)                 (ADC_OVER_OVRE1_Msk & (_UINT32_(value) << ADC_OVER_OVRE1_Pos)) /* Assigment of value for OVRE1 in the ADC_OVER register */
#define ADC_OVER_OVRE2_Pos                    _UINT32_(2)                                          /* (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE2_Pos)                /* (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2(value)                 (ADC_OVER_OVRE2_Msk & (_UINT32_(value) << ADC_OVER_OVRE2_Pos)) /* Assigment of value for OVRE2 in the ADC_OVER register */
#define ADC_OVER_OVRE3_Pos                    _UINT32_(3)                                          /* (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE3_Pos)                /* (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3(value)                 (ADC_OVER_OVRE3_Msk & (_UINT32_(value) << ADC_OVER_OVRE3_Pos)) /* Assigment of value for OVRE3 in the ADC_OVER register */
#define ADC_OVER_OVRE4_Pos                    _UINT32_(4)                                          /* (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE4_Pos)                /* (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4(value)                 (ADC_OVER_OVRE4_Msk & (_UINT32_(value) << ADC_OVER_OVRE4_Pos)) /* Assigment of value for OVRE4 in the ADC_OVER register */
#define ADC_OVER_OVRE5_Pos                    _UINT32_(5)                                          /* (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE5_Pos)                /* (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5(value)                 (ADC_OVER_OVRE5_Msk & (_UINT32_(value) << ADC_OVER_OVRE5_Pos)) /* Assigment of value for OVRE5 in the ADC_OVER register */
#define ADC_OVER_OVRE6_Pos                    _UINT32_(6)                                          /* (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE6_Pos)                /* (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6(value)                 (ADC_OVER_OVRE6_Msk & (_UINT32_(value) << ADC_OVER_OVRE6_Pos)) /* Assigment of value for OVRE6 in the ADC_OVER register */
#define ADC_OVER_OVRE7_Pos                    _UINT32_(7)                                          /* (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE7_Pos)                /* (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7(value)                 (ADC_OVER_OVRE7_Msk & (_UINT32_(value) << ADC_OVER_OVRE7_Pos)) /* Assigment of value for OVRE7 in the ADC_OVER register */
#define ADC_OVER_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                     _UINT32_(0)                                          /* (ADC_OVER Position) Overrun Error 7 */
#define ADC_OVER_OVRE_Msk                     (_UINT32_(0xFF) << ADC_OVER_OVRE_Pos)                /* (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                  (ADC_OVER_OVRE_Msk & (_UINT32_(value) << ADC_OVER_OVRE_Pos)) 

/* -------- ADC_EMR : (ADC Offset: 0x50) (R/W 32) Extended Mode Register -------- */
#define ADC_EMR_CMPMODE_Pos                   _UINT32_(0)                                          /* (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                   (_UINT32_(0x3) << ADC_EMR_CMPMODE_Pos)               /* (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)                (ADC_EMR_CMPMODE_Msk & (_UINT32_(value) << ADC_EMR_CMPMODE_Pos)) /* Assigment of value for CMPMODE in the ADC_EMR register */
#define   ADC_EMR_CMPMODE_LOW_Val             _UINT32_(0x0)                                        /* (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_HIGH_Val            _UINT32_(0x1)                                        /* (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_IN_Val              _UINT32_(0x2)                                        /* (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode.  */
#define   ADC_EMR_CMPMODE_OUT_Val             _UINT32_(0x3)                                        /* (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode.  */
#define ADC_EMR_CMPMODE_LOW                   (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)     /* (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_HIGH                  (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)    /* (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_IN                    (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)      /* (ADC_EMR) When the converted data is in the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPMODE_OUT                   (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)     /* (ADC_EMR) When the converted data is out of the comparison window, generates the COMPE flag in ADC_ISR or, in Partial Wake-up mode, defines the conditions to exit the system from Wait mode. Position  */
#define ADC_EMR_CMPTYPE_Pos                   _UINT32_(2)                                          /* (ADC_EMR) Comparison Type Position */
#define ADC_EMR_CMPTYPE_Msk                   (_UINT32_(0x1) << ADC_EMR_CMPTYPE_Pos)               /* (ADC_EMR) Comparison Type Mask */
#define ADC_EMR_CMPTYPE(value)                (ADC_EMR_CMPTYPE_Msk & (_UINT32_(value) << ADC_EMR_CMPTYPE_Pos)) /* Assigment of value for CMPTYPE in the ADC_EMR register */
#define   ADC_EMR_CMPTYPE_FLAG_ONLY_Val       _UINT32_(0x0)                                        /* (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag.  */
#define   ADC_EMR_CMPTYPE_START_CONDITION_Val _UINT32_(0x1)                                        /* (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set.  */
#define ADC_EMR_CMPTYPE_FLAG_ONLY             (ADC_EMR_CMPTYPE_FLAG_ONLY_Val << ADC_EMR_CMPTYPE_Pos) /* (ADC_EMR) Any conversion is performed and comparison function drives the COMPE flag. Position  */
#define ADC_EMR_CMPTYPE_START_CONDITION       (ADC_EMR_CMPTYPE_START_CONDITION_Val << ADC_EMR_CMPTYPE_Pos) /* (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set. Position  */
#define ADC_EMR_CMPSEL_Pos                    _UINT32_(4)                                          /* (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                    (_UINT32_(0x1F) << ADC_EMR_CMPSEL_Pos)               /* (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)                 (ADC_EMR_CMPSEL_Msk & (_UINT32_(value) << ADC_EMR_CMPSEL_Pos)) /* Assigment of value for CMPSEL in the ADC_EMR register */
#define ADC_EMR_CMPALL_Pos                    _UINT32_(9)                                          /* (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                    (_UINT32_(0x1) << ADC_EMR_CMPALL_Pos)                /* (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL(value)                 (ADC_EMR_CMPALL_Msk & (_UINT32_(value) << ADC_EMR_CMPALL_Pos)) /* Assigment of value for CMPALL in the ADC_EMR register */
#define ADC_EMR_CMPFILTER_Pos                 _UINT32_(12)                                         /* (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk                 (_UINT32_(0x3) << ADC_EMR_CMPFILTER_Pos)             /* (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)              (ADC_EMR_CMPFILTER_Msk & (_UINT32_(value) << ADC_EMR_CMPFILTER_Pos)) /* Assigment of value for CMPFILTER in the ADC_EMR register */
#define ADC_EMR_OSR_Pos                       _UINT32_(16)                                         /* (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                       (_UINT32_(0x7) << ADC_EMR_OSR_Pos)                   /* (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                    (ADC_EMR_OSR_Msk & (_UINT32_(value) << ADC_EMR_OSR_Pos)) /* Assigment of value for OSR in the ADC_EMR register */
#define   ADC_EMR_OSR_NO_AVERAGE_Val          _UINT32_(0x0)                                        /* (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val                _UINT32_(0x1)                                        /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val               _UINT32_(0x2)                                        /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define   ADC_EMR_OSR_OSR64_Val               _UINT32_(0x3)                                        /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 64  */
#define   ADC_EMR_OSR_OSR256_Val              _UINT32_(0x4)                                        /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 256.  */
#define ADC_EMR_OSR_NO_AVERAGE                (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)      /* (ADC_EMR) No averaging. ADC sample rate is maximum. Position  */
#define ADC_EMR_OSR_OSR4                      (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)            /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position  */
#define ADC_EMR_OSR_OSR16                     (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)           /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position  */
#define ADC_EMR_OSR_OSR64                     (ADC_EMR_OSR_OSR64_Val << ADC_EMR_OSR_Pos)           /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 64 Position  */
#define ADC_EMR_OSR_OSR256                    (ADC_EMR_OSR_OSR256_Val << ADC_EMR_OSR_Pos)          /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 256. Position  */
#define ADC_EMR_ASTE_Pos                      _UINT32_(20)                                         /* (ADC_EMR) Averaging on Single Trigger Event Position */
#define ADC_EMR_ASTE_Msk                      (_UINT32_(0x1) << ADC_EMR_ASTE_Pos)                  /* (ADC_EMR) Averaging on Single Trigger Event Mask */
#define ADC_EMR_ASTE(value)                   (ADC_EMR_ASTE_Msk & (_UINT32_(value) << ADC_EMR_ASTE_Pos)) /* Assigment of value for ASTE in the ADC_EMR register */
#define   ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val _UINT32_(0x0)                                        /* (ADC_EMR) The average requests several trigger events.  */
#define   ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val _UINT32_(0x1)                                        /* (ADC_EMR) The average requests only one trigger event.  */
#define ADC_EMR_ASTE_MULTI_TRIG_AVERAGE       (ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /* (ADC_EMR) The average requests several trigger events. Position  */
#define ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE      (ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /* (ADC_EMR) The average requests only one trigger event. Position  */
#define ADC_EMR_SRCCLK_Pos                    _UINT32_(21)                                         /* (ADC_EMR) External Clock Selection Position */
#define ADC_EMR_SRCCLK_Msk                    (_UINT32_(0x1) << ADC_EMR_SRCCLK_Pos)                /* (ADC_EMR) External Clock Selection Mask */
#define ADC_EMR_SRCCLK(value)                 (ADC_EMR_SRCCLK_Msk & (_UINT32_(value) << ADC_EMR_SRCCLK_Pos)) /* Assigment of value for SRCCLK in the ADC_EMR register */
#define   ADC_EMR_SRCCLK_PERIPH_CLK_Val       _UINT32_(0x0)                                        /* (ADC_EMR) The peripheral clock is the source for the ADC prescaler.  */
#define   ADC_EMR_SRCCLK_GCLK_Val             _UINT32_(0x1)                                        /* (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock.  */
#define ADC_EMR_SRCCLK_PERIPH_CLK             (ADC_EMR_SRCCLK_PERIPH_CLK_Val << ADC_EMR_SRCCLK_Pos) /* (ADC_EMR) The peripheral clock is the source for the ADC prescaler. Position  */
#define ADC_EMR_SRCCLK_GCLK                   (ADC_EMR_SRCCLK_GCLK_Val << ADC_EMR_SRCCLK_Pos)      /* (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock. Position  */
#define ADC_EMR_TRACKX_Pos                    _UINT32_(22)                                         /* (ADC_EMR) Tracking Time x4, x8 or x16 Position */
#define ADC_EMR_TRACKX_Msk                    (_UINT32_(0x3) << ADC_EMR_TRACKX_Pos)                /* (ADC_EMR) Tracking Time x4, x8 or x16 Mask */
#define ADC_EMR_TRACKX(value)                 (ADC_EMR_TRACKX_Msk & (_UINT32_(value) << ADC_EMR_TRACKX_Pos)) /* Assigment of value for TRACKX in the ADC_EMR register */
#define   ADC_EMR_TRACKX_TRACKTIMX1_Val       _UINT32_(0x0)                                        /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 1.  */
#define   ADC_EMR_TRACKX_TRACKTIMX4_Val       _UINT32_(0x1)                                        /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 4.  */
#define   ADC_EMR_TRACKX_TRACKTIMX8_Val       _UINT32_(0x2)                                        /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 8  */
#define   ADC_EMR_TRACKX_TRACKTIMX16_Val      _UINT32_(0x3)                                        /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 16.  */
#define ADC_EMR_TRACKX_TRACKTIMX1             (ADC_EMR_TRACKX_TRACKTIMX1_Val << ADC_EMR_TRACKX_Pos) /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 1. Position  */
#define ADC_EMR_TRACKX_TRACKTIMX4             (ADC_EMR_TRACKX_TRACKTIMX4_Val << ADC_EMR_TRACKX_Pos) /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 4. Position  */
#define ADC_EMR_TRACKX_TRACKTIMX8             (ADC_EMR_TRACKX_TRACKTIMX8_Val << ADC_EMR_TRACKX_Pos) /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 8 Position  */
#define ADC_EMR_TRACKX_TRACKTIMX16            (ADC_EMR_TRACKX_TRACKTIMX16_Val << ADC_EMR_TRACKX_Pos) /* (ADC_EMR) ADC_MR.TRACKTIM effect is multiplied by 16. Position  */
#define ADC_EMR_TAG_Pos                       _UINT32_(24)                                         /* (ADC_EMR) ADC_LCDR Tag Position */
#define ADC_EMR_TAG_Msk                       (_UINT32_(0x1) << ADC_EMR_TAG_Pos)                   /* (ADC_EMR) ADC_LCDR Tag Mask */
#define ADC_EMR_TAG(value)                    (ADC_EMR_TAG_Msk & (_UINT32_(value) << ADC_EMR_TAG_Pos)) /* Assigment of value for TAG in the ADC_EMR register */
#define ADC_EMR_SIGNMODE_Pos                  _UINT32_(25)                                         /* (ADC_EMR) Sign Mode Position */
#define ADC_EMR_SIGNMODE_Msk                  (_UINT32_(0x3) << ADC_EMR_SIGNMODE_Pos)              /* (ADC_EMR) Sign Mode Mask */
#define ADC_EMR_SIGNMODE(value)               (ADC_EMR_SIGNMODE_Msk & (_UINT32_(value) << ADC_EMR_SIGNMODE_Pos)) /* Assigment of value for SIGNMODE in the ADC_EMR register */
#define   ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val _UINT32_(0x0)                                        /* (ADC_EMR) Single-ended channels: unsigned conversions Differential channels: signed conversions  */
#define   ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val _UINT32_(0x1)                                        /* (ADC_EMR) Single-ended channels: signed conversions Differential channels: unsigned conversions  */
#define   ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val   _UINT32_(0x2)                                        /* (ADC_EMR) All channels: unsigned conversions  */
#define   ADC_EMR_SIGNMODE_ALL_SIGNED_Val     _UINT32_(0x3)                                        /* (ADC_EMR) All channels: signed conversions  */
#define ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN      (ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) Single-ended channels: unsigned conversions Differential channels: signed conversions Position  */
#define ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG      (ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) Single-ended channels: signed conversions Differential channels: unsigned conversions Position  */
#define ADC_EMR_SIGNMODE_ALL_UNSIGNED         (ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) All channels: unsigned conversions Position  */
#define ADC_EMR_SIGNMODE_ALL_SIGNED           (ADC_EMR_SIGNMODE_ALL_SIGNED_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) All channels: signed conversions Position  */
#define ADC_EMR_ADCMODE_Pos                   _UINT32_(28)                                         /* (ADC_EMR) ADC Running Mode Position */
#define ADC_EMR_ADCMODE_Msk                   (_UINT32_(0x3) << ADC_EMR_ADCMODE_Pos)               /* (ADC_EMR) ADC Running Mode Mask */
#define ADC_EMR_ADCMODE(value)                (ADC_EMR_ADCMODE_Msk & (_UINT32_(value) << ADC_EMR_ADCMODE_Pos)) /* Assigment of value for ADCMODE in the ADC_EMR register */
#define   ADC_EMR_ADCMODE_NORMAL_Val          _UINT32_(0x0)                                        /* (ADC_EMR) Normal mode of operation.  */
#define   ADC_EMR_ADCMODE_OFFSET_ERROR_Val    _UINT32_(0x1)                                        /* (ADC_EMR) Offset Error mode to measure the offset error. See Table 6-6 "ADC Running Modes".  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val _UINT32_(0x2)                                        /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes".  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val  _UINT32_(0x3)                                        /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes".  */
#define ADC_EMR_ADCMODE_NORMAL                (ADC_EMR_ADCMODE_NORMAL_Val << ADC_EMR_ADCMODE_Pos)  /* (ADC_EMR) Normal mode of operation. Position  */
#define ADC_EMR_ADCMODE_OFFSET_ERROR          (ADC_EMR_ADCMODE_OFFSET_ERROR_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Offset Error mode to measure the offset error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_HIGH       (ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_ADCMODE_GAIN_ERROR_LOW        (ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 6-6 "ADC Running Modes". Position  */
#define ADC_EMR_Msk                           _UINT32_(0x37F733F7)                                 /* (ADC_EMR) Register Mask  */


/* -------- ADC_CWR : (ADC Offset: 0x54) (R/W 32) Compare Window Register -------- */
#define ADC_CWR_LOWTHRES_Pos                  _UINT32_(0)                                          /* (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                  (_UINT32_(0xFFFF) << ADC_CWR_LOWTHRES_Pos)           /* (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)               (ADC_CWR_LOWTHRES_Msk & (_UINT32_(value) << ADC_CWR_LOWTHRES_Pos)) /* Assigment of value for LOWTHRES in the ADC_CWR register */
#define ADC_CWR_HIGHTHRES_Pos                 _UINT32_(16)                                         /* (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk                 (_UINT32_(0xFFFF) << ADC_CWR_HIGHTHRES_Pos)          /* (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)              (ADC_CWR_HIGHTHRES_Msk & (_UINT32_(value) << ADC_CWR_HIGHTHRES_Pos)) /* Assigment of value for HIGHTHRES in the ADC_CWR register */
#define ADC_CWR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_CWR) Register Mask  */


/* -------- ADC_CCR : (ADC Offset: 0x5C) (R/W 32) Channel Configuration Register -------- */
#define ADC_CCR_DIFF0_Pos                     _UINT32_(0)                                          /* (ADC_CCR) Differential Inputs for Channel 0 Position */
#define ADC_CCR_DIFF0_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF0_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 0 Mask */
#define ADC_CCR_DIFF0(value)                  (ADC_CCR_DIFF0_Msk & (_UINT32_(value) << ADC_CCR_DIFF0_Pos)) /* Assigment of value for DIFF0 in the ADC_CCR register */
#define ADC_CCR_DIFF1_Pos                     _UINT32_(1)                                          /* (ADC_CCR) Differential Inputs for Channel 1 Position */
#define ADC_CCR_DIFF1_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF1_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 1 Mask */
#define ADC_CCR_DIFF1(value)                  (ADC_CCR_DIFF1_Msk & (_UINT32_(value) << ADC_CCR_DIFF1_Pos)) /* Assigment of value for DIFF1 in the ADC_CCR register */
#define ADC_CCR_DIFF2_Pos                     _UINT32_(2)                                          /* (ADC_CCR) Differential Inputs for Channel 2 Position */
#define ADC_CCR_DIFF2_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF2_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 2 Mask */
#define ADC_CCR_DIFF2(value)                  (ADC_CCR_DIFF2_Msk & (_UINT32_(value) << ADC_CCR_DIFF2_Pos)) /* Assigment of value for DIFF2 in the ADC_CCR register */
#define ADC_CCR_DIFF3_Pos                     _UINT32_(3)                                          /* (ADC_CCR) Differential Inputs for Channel 3 Position */
#define ADC_CCR_DIFF3_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF3_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 3 Mask */
#define ADC_CCR_DIFF3(value)                  (ADC_CCR_DIFF3_Msk & (_UINT32_(value) << ADC_CCR_DIFF3_Pos)) /* Assigment of value for DIFF3 in the ADC_CCR register */
#define ADC_CCR_DIFF4_Pos                     _UINT32_(4)                                          /* (ADC_CCR) Differential Inputs for Channel 4 Position */
#define ADC_CCR_DIFF4_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF4_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 4 Mask */
#define ADC_CCR_DIFF4(value)                  (ADC_CCR_DIFF4_Msk & (_UINT32_(value) << ADC_CCR_DIFF4_Pos)) /* Assigment of value for DIFF4 in the ADC_CCR register */
#define ADC_CCR_DIFF5_Pos                     _UINT32_(5)                                          /* (ADC_CCR) Differential Inputs for Channel 5 Position */
#define ADC_CCR_DIFF5_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF5_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 5 Mask */
#define ADC_CCR_DIFF5(value)                  (ADC_CCR_DIFF5_Msk & (_UINT32_(value) << ADC_CCR_DIFF5_Pos)) /* Assigment of value for DIFF5 in the ADC_CCR register */
#define ADC_CCR_DIFF6_Pos                     _UINT32_(6)                                          /* (ADC_CCR) Differential Inputs for Channel 6 Position */
#define ADC_CCR_DIFF6_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF6_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 6 Mask */
#define ADC_CCR_DIFF6(value)                  (ADC_CCR_DIFF6_Msk & (_UINT32_(value) << ADC_CCR_DIFF6_Pos)) /* Assigment of value for DIFF6 in the ADC_CCR register */
#define ADC_CCR_DIFF7_Pos                     _UINT32_(7)                                          /* (ADC_CCR) Differential Inputs for Channel 7 Position */
#define ADC_CCR_DIFF7_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF7_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 7 Mask */
#define ADC_CCR_DIFF7(value)                  (ADC_CCR_DIFF7_Msk & (_UINT32_(value) << ADC_CCR_DIFF7_Pos)) /* Assigment of value for DIFF7 in the ADC_CCR register */
#define ADC_CCR_Msk                           _UINT32_(0x000000FF)                                 /* (ADC_CCR) Register Mask  */

#define ADC_CCR_DIFF_Pos                      _UINT32_(0)                                          /* (ADC_CCR Position) Differential Inputs for Channel 7 */
#define ADC_CCR_DIFF_Msk                      (_UINT32_(0xFF) << ADC_CCR_DIFF_Pos)                 /* (ADC_CCR Mask) DIFF */
#define ADC_CCR_DIFF(value)                   (ADC_CCR_DIFF_Msk & (_UINT32_(value) << ADC_CCR_DIFF_Pos)) 

/* -------- ADC_CDR : (ADC Offset: 0x60) ( R/ 32) Channel Data Register -------- */
#define ADC_CDR_DATA_Pos                      _UINT32_(0)                                          /* (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                      (_UINT32_(0xFFFF) << ADC_CDR_DATA_Pos)               /* (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                   (ADC_CDR_DATA_Msk & (_UINT32_(value) << ADC_CDR_DATA_Pos)) /* Assigment of value for DATA in the ADC_CDR register */
#define ADC_CDR_Msk                           _UINT32_(0x0000FFFF)                                 /* (ADC_CDR) Register Mask  */


/* -------- ADC_ACR : (ADC Offset: 0xE0) (R/W 32) Analog Control Register -------- */
#define ADC_ACR_ZBAT_Pos                      _UINT32_(2)                                          /* (ADC_ACR) VBAT Resistive Load Selection Position */
#define ADC_ACR_ZBAT_Msk                      (_UINT32_(0x1) << ADC_ACR_ZBAT_Pos)                  /* (ADC_ACR) VBAT Resistive Load Selection Mask */
#define ADC_ACR_ZBAT(value)                   (ADC_ACR_ZBAT_Msk & (_UINT32_(value) << ADC_ACR_ZBAT_Pos)) /* Assigment of value for ZBAT in the ADC_ACR register */
#define ADC_ACR_INTVREFEN_Pos                 _UINT32_(20)                                         /* (ADC_ACR) ADC Internal Positive Voltage Reference Enable Position */
#define ADC_ACR_INTVREFEN_Msk                 (_UINT32_(0x1) << ADC_ACR_INTVREFEN_Pos)             /* (ADC_ACR) ADC Internal Positive Voltage Reference Enable Mask */
#define ADC_ACR_INTVREFEN(value)              (ADC_ACR_INTVREFEN_Msk & (_UINT32_(value) << ADC_ACR_INTVREFEN_Pos)) /* Assigment of value for INTVREFEN in the ADC_ACR register */
#define ADC_ACR_SMEN_Pos                      _UINT32_(21)                                         /* (ADC_ACR) Supply Monitor Enable Position */
#define ADC_ACR_SMEN_Msk                      (_UINT32_(0x1) << ADC_ACR_SMEN_Pos)                  /* (ADC_ACR) Supply Monitor Enable Mask */
#define ADC_ACR_SMEN(value)                   (ADC_ACR_SMEN_Msk & (_UINT32_(value) << ADC_ACR_SMEN_Pos)) /* Assigment of value for SMEN in the ADC_ACR register */
#define ADC_ACR_SMVT_Pos                      _UINT32_(22)                                         /* (ADC_ACR) Supply Monitor Voltage Threshold Position */
#define ADC_ACR_SMVT_Msk                      (_UINT32_(0x1) << ADC_ACR_SMVT_Pos)                  /* (ADC_ACR) Supply Monitor Voltage Threshold Mask */
#define ADC_ACR_SMVT(value)                   (ADC_ACR_SMVT_Msk & (_UINT32_(value) << ADC_ACR_SMVT_Pos)) /* Assigment of value for SMVT in the ADC_ACR register */
#define ADC_ACR_Msk                           _UINT32_(0x00700004)                                 /* (ADC_ACR) Register Mask  */


/* -------- ADC_FMR : (ADC Offset: 0xE4) (R/W 32) FIFO Mode Register -------- */
#define ADC_FMR_ENFIFO_Pos                    _UINT32_(0)                                          /* (ADC_FMR) Enable FIFO Position */
#define ADC_FMR_ENFIFO_Msk                    (_UINT32_(0x1) << ADC_FMR_ENFIFO_Pos)                /* (ADC_FMR) Enable FIFO Mask */
#define ADC_FMR_ENFIFO(value)                 (ADC_FMR_ENFIFO_Msk & (_UINT32_(value) << ADC_FMR_ENFIFO_Pos)) /* Assigment of value for ENFIFO in the ADC_FMR register */
#define   ADC_FMR_ENFIFO_0_Val                _UINT32_(0x0)                                        /* (ADC_FMR) FIFO is disabled.  */
#define   ADC_FMR_ENFIFO_1_Val                _UINT32_(0x1)                                        /* (ADC_FMR) FIFO is enabled.  */
#define ADC_FMR_ENFIFO_0                      (ADC_FMR_ENFIFO_0_Val << ADC_FMR_ENFIFO_Pos)         /* (ADC_FMR) FIFO is disabled. Position  */
#define ADC_FMR_ENFIFO_1                      (ADC_FMR_ENFIFO_1_Val << ADC_FMR_ENFIFO_Pos)         /* (ADC_FMR) FIFO is enabled. Position  */
#define ADC_FMR_ENLEVEL_Pos                   _UINT32_(1)                                          /* (ADC_FMR) Enable Level Position */
#define ADC_FMR_ENLEVEL_Msk                   (_UINT32_(0x1) << ADC_FMR_ENLEVEL_Pos)               /* (ADC_FMR) Enable Level Mask */
#define ADC_FMR_ENLEVEL(value)                (ADC_FMR_ENLEVEL_Msk & (_UINT32_(value) << ADC_FMR_ENLEVEL_Pos)) /* Assigment of value for ENLEVEL in the ADC_FMR register */
#define   ADC_FMR_ENLEVEL_0_Val               _UINT32_(0x0)                                        /* (ADC_FMR) Request to DMA is generated as soon as one data is written in FIFO when FIFO is enabled. CHUNK is not used.  */
#define   ADC_FMR_ENLEVEL_1_Val               _UINT32_(0x1)                                        /* (ADC_FMR) Request to DMA is generated as soon as the number of written elements in the FIFO is greater than or equal to CHUNK.  */
#define ADC_FMR_ENLEVEL_0                     (ADC_FMR_ENLEVEL_0_Val << ADC_FMR_ENLEVEL_Pos)       /* (ADC_FMR) Request to DMA is generated as soon as one data is written in FIFO when FIFO is enabled. CHUNK is not used. Position  */
#define ADC_FMR_ENLEVEL_1                     (ADC_FMR_ENLEVEL_1_Val << ADC_FMR_ENLEVEL_Pos)       /* (ADC_FMR) Request to DMA is generated as soon as the number of written elements in the FIFO is greater than or equal to CHUNK. Position  */
#define ADC_FMR_CHUNK_Pos                     _UINT32_(4)                                          /* (ADC_FMR) Chunk Size Position */
#define ADC_FMR_CHUNK_Msk                     (_UINT32_(0xF) << ADC_FMR_CHUNK_Pos)                 /* (ADC_FMR) Chunk Size Mask */
#define ADC_FMR_CHUNK(value)                  (ADC_FMR_CHUNK_Msk & (_UINT32_(value) << ADC_FMR_CHUNK_Pos)) /* Assigment of value for CHUNK in the ADC_FMR register */
#define ADC_FMR_FIFOCNT_Pos                   _UINT32_(16)                                         /* (ADC_FMR) FIFO Count (read-only) Position */
#define ADC_FMR_FIFOCNT_Msk                   (_UINT32_(0xFF) << ADC_FMR_FIFOCNT_Pos)              /* (ADC_FMR) FIFO Count (read-only) Mask */
#define ADC_FMR_FIFOCNT(value)                (ADC_FMR_FIFOCNT_Msk & (_UINT32_(value) << ADC_FMR_FIFOCNT_Pos)) /* Assigment of value for FIFOCNT in the ADC_FMR register */
#define ADC_FMR_Msk                           _UINT32_(0x00FF00F3)                                 /* (ADC_FMR) Register Mask  */


/* -------- ADC_RPR : (ADC Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define ADC_RPR_RXPTR_Pos                     _UINT32_(0)                                          /* (ADC_RPR) Receive Pointer Register Position */
#define ADC_RPR_RXPTR_Msk                     (_UINT32_(0xFFFFFFFF) << ADC_RPR_RXPTR_Pos)          /* (ADC_RPR) Receive Pointer Register Mask */
#define ADC_RPR_RXPTR(value)                  (ADC_RPR_RXPTR_Msk & (_UINT32_(value) << ADC_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the ADC_RPR register */
#define ADC_RPR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_RPR) Register Mask  */


/* -------- ADC_RCR : (ADC Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define ADC_RCR_RXCTR_Pos                     _UINT32_(0)                                          /* (ADC_RCR) Receive Counter Register Position */
#define ADC_RCR_RXCTR_Msk                     (_UINT32_(0xFFFF) << ADC_RCR_RXCTR_Pos)              /* (ADC_RCR) Receive Counter Register Mask */
#define ADC_RCR_RXCTR(value)                  (ADC_RCR_RXCTR_Msk & (_UINT32_(value) << ADC_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the ADC_RCR register */
#define ADC_RCR_Msk                           _UINT32_(0x0000FFFF)                                 /* (ADC_RCR) Register Mask  */


/* -------- ADC_RNPR : (ADC Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define ADC_RNPR_RXNPTR_Pos                   _UINT32_(0)                                          /* (ADC_RNPR) Receive Next Pointer Position */
#define ADC_RNPR_RXNPTR_Msk                   (_UINT32_(0xFFFFFFFF) << ADC_RNPR_RXNPTR_Pos)        /* (ADC_RNPR) Receive Next Pointer Mask */
#define ADC_RNPR_RXNPTR(value)                (ADC_RNPR_RXNPTR_Msk & (_UINT32_(value) << ADC_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the ADC_RNPR register */
#define ADC_RNPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (ADC_RNPR) Register Mask  */


/* -------- ADC_RNCR : (ADC Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define ADC_RNCR_RXNCTR_Pos                   _UINT32_(0)                                          /* (ADC_RNCR) Receive Next Counter Position */
#define ADC_RNCR_RXNCTR_Msk                   (_UINT32_(0xFFFF) << ADC_RNCR_RXNCTR_Pos)            /* (ADC_RNCR) Receive Next Counter Mask */
#define ADC_RNCR_RXNCTR(value)                (ADC_RNCR_RXNCTR_Msk & (_UINT32_(value) << ADC_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the ADC_RNCR register */
#define ADC_RNCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (ADC_RNCR) Register Mask  */


/* -------- ADC_PTCR : (ADC Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define ADC_PTCR_RXTEN_Pos                    _UINT32_(0)                                          /* (ADC_PTCR) Receiver Transfer Enable Position */
#define ADC_PTCR_RXTEN_Msk                    (_UINT32_(0x1) << ADC_PTCR_RXTEN_Pos)                /* (ADC_PTCR) Receiver Transfer Enable Mask */
#define ADC_PTCR_RXTEN(value)                 (ADC_PTCR_RXTEN_Msk & (_UINT32_(value) << ADC_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the ADC_PTCR register */
#define ADC_PTCR_RXTDIS_Pos                   _UINT32_(1)                                          /* (ADC_PTCR) Receiver Transfer Disable Position */
#define ADC_PTCR_RXTDIS_Msk                   (_UINT32_(0x1) << ADC_PTCR_RXTDIS_Pos)               /* (ADC_PTCR) Receiver Transfer Disable Mask */
#define ADC_PTCR_RXTDIS(value)                (ADC_PTCR_RXTDIS_Msk & (_UINT32_(value) << ADC_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the ADC_PTCR register */
#define ADC_PTCR_TXTEN_Pos                    _UINT32_(8)                                          /* (ADC_PTCR) Transmitter Transfer Enable Position */
#define ADC_PTCR_TXTEN_Msk                    (_UINT32_(0x1) << ADC_PTCR_TXTEN_Pos)                /* (ADC_PTCR) Transmitter Transfer Enable Mask */
#define ADC_PTCR_TXTEN(value)                 (ADC_PTCR_TXTEN_Msk & (_UINT32_(value) << ADC_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the ADC_PTCR register */
#define ADC_PTCR_TXTDIS_Pos                   _UINT32_(9)                                          /* (ADC_PTCR) Transmitter Transfer Disable Position */
#define ADC_PTCR_TXTDIS_Msk                   (_UINT32_(0x1) << ADC_PTCR_TXTDIS_Pos)               /* (ADC_PTCR) Transmitter Transfer Disable Mask */
#define ADC_PTCR_TXTDIS(value)                (ADC_PTCR_TXTDIS_Msk & (_UINT32_(value) << ADC_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the ADC_PTCR register */
#define ADC_PTCR_RXCBEN_Pos                   _UINT32_(16)                                         /* (ADC_PTCR) Receiver Circular Buffer Enable Position */
#define ADC_PTCR_RXCBEN_Msk                   (_UINT32_(0x1) << ADC_PTCR_RXCBEN_Pos)               /* (ADC_PTCR) Receiver Circular Buffer Enable Mask */
#define ADC_PTCR_RXCBEN(value)                (ADC_PTCR_RXCBEN_Msk & (_UINT32_(value) << ADC_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the ADC_PTCR register */
#define ADC_PTCR_RXCBDIS_Pos                  _UINT32_(17)                                         /* (ADC_PTCR) Receiver Circular Buffer Disable Position */
#define ADC_PTCR_RXCBDIS_Msk                  (_UINT32_(0x1) << ADC_PTCR_RXCBDIS_Pos)              /* (ADC_PTCR) Receiver Circular Buffer Disable Mask */
#define ADC_PTCR_RXCBDIS(value)               (ADC_PTCR_RXCBDIS_Msk & (_UINT32_(value) << ADC_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the ADC_PTCR register */
#define ADC_PTCR_TXCBEN_Pos                   _UINT32_(18)                                         /* (ADC_PTCR) Transmitter Circular Buffer Enable Position */
#define ADC_PTCR_TXCBEN_Msk                   (_UINT32_(0x1) << ADC_PTCR_TXCBEN_Pos)               /* (ADC_PTCR) Transmitter Circular Buffer Enable Mask */
#define ADC_PTCR_TXCBEN(value)                (ADC_PTCR_TXCBEN_Msk & (_UINT32_(value) << ADC_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the ADC_PTCR register */
#define ADC_PTCR_TXCBDIS_Pos                  _UINT32_(19)                                         /* (ADC_PTCR) Transmitter Circular Buffer Disable Position */
#define ADC_PTCR_TXCBDIS_Msk                  (_UINT32_(0x1) << ADC_PTCR_TXCBDIS_Pos)              /* (ADC_PTCR) Transmitter Circular Buffer Disable Mask */
#define ADC_PTCR_TXCBDIS(value)               (ADC_PTCR_TXCBDIS_Msk & (_UINT32_(value) << ADC_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the ADC_PTCR register */
#define ADC_PTCR_ERRCLR_Pos                   _UINT32_(24)                                         /* (ADC_PTCR) Transfer Bus Error Clear Position */
#define ADC_PTCR_ERRCLR_Msk                   (_UINT32_(0x1) << ADC_PTCR_ERRCLR_Pos)               /* (ADC_PTCR) Transfer Bus Error Clear Mask */
#define ADC_PTCR_ERRCLR(value)                (ADC_PTCR_ERRCLR_Msk & (_UINT32_(value) << ADC_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the ADC_PTCR register */
#define ADC_PTCR_Msk                          _UINT32_(0x010F0303)                                 /* (ADC_PTCR) Register Mask  */


/* -------- ADC_PTSR : (ADC Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define ADC_PTSR_RXTEN_Pos                    _UINT32_(0)                                          /* (ADC_PTSR) Receiver Transfer Enable Position */
#define ADC_PTSR_RXTEN_Msk                    (_UINT32_(0x1) << ADC_PTSR_RXTEN_Pos)                /* (ADC_PTSR) Receiver Transfer Enable Mask */
#define ADC_PTSR_RXTEN(value)                 (ADC_PTSR_RXTEN_Msk & (_UINT32_(value) << ADC_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the ADC_PTSR register */
#define ADC_PTSR_TXTEN_Pos                    _UINT32_(8)                                          /* (ADC_PTSR) Transmitter Transfer Enable Position */
#define ADC_PTSR_TXTEN_Msk                    (_UINT32_(0x1) << ADC_PTSR_TXTEN_Pos)                /* (ADC_PTSR) Transmitter Transfer Enable Mask */
#define ADC_PTSR_TXTEN(value)                 (ADC_PTSR_TXTEN_Msk & (_UINT32_(value) << ADC_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the ADC_PTSR register */
#define ADC_PTSR_RXCBEN_Pos                   _UINT32_(16)                                         /* (ADC_PTSR) Receiver Circular Buffer Enable Position */
#define ADC_PTSR_RXCBEN_Msk                   (_UINT32_(0x1) << ADC_PTSR_RXCBEN_Pos)               /* (ADC_PTSR) Receiver Circular Buffer Enable Mask */
#define ADC_PTSR_RXCBEN(value)                (ADC_PTSR_RXCBEN_Msk & (_UINT32_(value) << ADC_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the ADC_PTSR register */
#define ADC_PTSR_TXCBEN_Pos                   _UINT32_(18)                                         /* (ADC_PTSR) Transmitter Circular Buffer Enable Position */
#define ADC_PTSR_TXCBEN_Msk                   (_UINT32_(0x1) << ADC_PTSR_TXCBEN_Pos)               /* (ADC_PTSR) Transmitter Circular Buffer Enable Mask */
#define ADC_PTSR_TXCBEN(value)                (ADC_PTSR_TXCBEN_Msk & (_UINT32_(value) << ADC_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the ADC_PTSR register */
#define ADC_PTSR_ERR_Pos                      _UINT32_(24)                                         /* (ADC_PTSR) Transfer Bus Error Position */
#define ADC_PTSR_ERR_Msk                      (_UINT32_(0x1) << ADC_PTSR_ERR_Pos)                  /* (ADC_PTSR) Transfer Bus Error Mask */
#define ADC_PTSR_ERR(value)                   (ADC_PTSR_ERR_Msk & (_UINT32_(value) << ADC_PTSR_ERR_Pos)) /* Assigment of value for ERR in the ADC_PTSR register */
#define ADC_PTSR_Msk                          _UINT32_(0x01050101)                                 /* (ADC_PTSR) Register Mask  */


/* -------- ADC_PWPMR : (ADC Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define ADC_PWPMR_WPPTREN_Pos                 _UINT32_(0)                                          /* (ADC_PWPMR) Write Protection Pointer Registers Enable Position */
#define ADC_PWPMR_WPPTREN_Msk                 (_UINT32_(0x1) << ADC_PWPMR_WPPTREN_Pos)             /* (ADC_PWPMR) Write Protection Pointer Registers Enable Mask */
#define ADC_PWPMR_WPPTREN(value)              (ADC_PWPMR_WPPTREN_Msk & (_UINT32_(value) << ADC_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the ADC_PWPMR register */
#define ADC_PWPMR_WPCTREN_Pos                 _UINT32_(1)                                          /* (ADC_PWPMR) Write Protection Counter Registers Enable Position */
#define ADC_PWPMR_WPCTREN_Msk                 (_UINT32_(0x1) << ADC_PWPMR_WPCTREN_Pos)             /* (ADC_PWPMR) Write Protection Counter Registers Enable Mask */
#define ADC_PWPMR_WPCTREN(value)              (ADC_PWPMR_WPCTREN_Msk & (_UINT32_(value) << ADC_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the ADC_PWPMR register */
#define ADC_PWPMR_WPCREN_Pos                  _UINT32_(2)                                          /* (ADC_PWPMR) Write Protection Control Register Enable Position */
#define ADC_PWPMR_WPCREN_Msk                  (_UINT32_(0x1) << ADC_PWPMR_WPCREN_Pos)              /* (ADC_PWPMR) Write Protection Control Register Enable Mask */
#define ADC_PWPMR_WPCREN(value)               (ADC_PWPMR_WPCREN_Msk & (_UINT32_(value) << ADC_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the ADC_PWPMR register */
#define ADC_PWPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (ADC_PWPMR) Write Protection Key Position */
#define ADC_PWPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << ADC_PWPMR_WPKEY_Pos)          /* (ADC_PWPMR) Write Protection Key Mask */
#define ADC_PWPMR_WPKEY(value)                (ADC_PWPMR_WPKEY_Msk & (_UINT32_(value) << ADC_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the ADC_PWPMR register */
#define   ADC_PWPMR_WPKEY_PASSWD_Val          _UINT32_(0x504443)                                   /* (ADC_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define ADC_PWPMR_WPKEY_PASSWD                (ADC_PWPMR_WPKEY_PASSWD_Val << ADC_PWPMR_WPKEY_Pos)  /* (ADC_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define ADC_PWPMR_Msk                         _UINT32_(0xFFFFFF07)                                 /* (ADC_PWPMR) Register Mask  */


/* -------- ADC_TRGR : (ADC Offset: 0x130) (R/W 32) Trigger Register -------- */
#define ADC_TRGR_TRGMOD_Pos                   _UINT32_(0)                                          /* (ADC_TRGR) Trigger Mode Position */
#define ADC_TRGR_TRGMOD_Msk                   (_UINT32_(0x7) << ADC_TRGR_TRGMOD_Pos)               /* (ADC_TRGR) Trigger Mode Mask */
#define ADC_TRGR_TRGMOD(value)                (ADC_TRGR_TRGMOD_Msk & (_UINT32_(value) << ADC_TRGR_TRGMOD_Pos)) /* Assigment of value for TRGMOD in the ADC_TRGR register */
#define   ADC_TRGR_TRGMOD_NO_TRIGGER_Val      _UINT32_(0x0)                                        /* (ADC_TRGR) No hardware trigger, only software trigger can start conversions  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val   _UINT32_(0x1)                                        /* (ADC_TRGR) Rising edge of the selected trigger event, defined in ADC_MR.TRGSEL  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val   _UINT32_(0x2)                                        /* (ADC_TRGR) Falling edge of the selected trigger event  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val    _UINT32_(0x3)                                        /* (ADC_TRGR) Any edge of the selected trigger event  */
#define   ADC_TRGR_TRGMOD_PERIOD_TRIG_Val     _UINT32_(0x5)                                        /* (ADC_TRGR) ADC internal periodic trigger (see TRGPER)  */
#define   ADC_TRGR_TRGMOD_CONTINUOUS_Val      _UINT32_(0x6)                                        /* (ADC_TRGR) Continuous mode, free run mode  */
#define ADC_TRGR_TRGMOD_NO_TRIGGER            (ADC_TRGR_TRGMOD_NO_TRIGGER_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) No hardware trigger, only software trigger can start conversions Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_RISE         (ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Rising edge of the selected trigger event, defined in ADC_MR.TRGSEL Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_FALL         (ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Falling edge of the selected trigger event Position  */
#define ADC_TRGR_TRGMOD_EXT_TRIG_ANY          (ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Any edge of the selected trigger event Position  */
#define ADC_TRGR_TRGMOD_PERIOD_TRIG           (ADC_TRGR_TRGMOD_PERIOD_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) ADC internal periodic trigger (see TRGPER) Position  */
#define ADC_TRGR_TRGMOD_CONTINUOUS            (ADC_TRGR_TRGMOD_CONTINUOUS_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Continuous mode, free run mode Position  */
#define ADC_TRGR_TRGPER_Pos                   _UINT32_(8)                                          /* (ADC_TRGR) Trigger Period Position */
#define ADC_TRGR_TRGPER_Msk                   (_UINT32_(0xFFFFFF) << ADC_TRGR_TRGPER_Pos)          /* (ADC_TRGR) Trigger Period Mask */
#define ADC_TRGR_TRGPER(value)                (ADC_TRGR_TRGPER_Msk & (_UINT32_(value) << ADC_TRGR_TRGPER_Pos)) /* Assigment of value for TRGPER in the ADC_TRGR register */
#define ADC_TRGR_Msk                          _UINT32_(0xFFFFFF07)                                 /* (ADC_TRGR) Register Mask  */


/* -------- ADC_COSR : (ADC Offset: 0x134) (R/W 32) Correction Select Register -------- */
#define ADC_COSR_CSEL_Pos                     _UINT32_(0)                                          /* (ADC_COSR) Channel Correction Select Position */
#define ADC_COSR_CSEL_Msk                     (_UINT32_(0x1F) << ADC_COSR_CSEL_Pos)                /* (ADC_COSR) Channel Correction Select Mask */
#define ADC_COSR_CSEL(value)                  (ADC_COSR_CSEL_Msk & (_UINT32_(value) << ADC_COSR_CSEL_Pos)) /* Assigment of value for CSEL in the ADC_COSR register */
#define ADC_COSR_Msk                          _UINT32_(0x0000001F)                                 /* (ADC_COSR) Register Mask  */


/* -------- ADC_CVR : (ADC Offset: 0x138) (R/W 32) Correction Values Register -------- */
#define ADC_CVR_OFFSETCORR_Pos                _UINT32_(0)                                          /* (ADC_CVR) Offset Correction Position */
#define ADC_CVR_OFFSETCORR_Msk                (_UINT32_(0xFFFF) << ADC_CVR_OFFSETCORR_Pos)         /* (ADC_CVR) Offset Correction Mask */
#define ADC_CVR_OFFSETCORR(value)             (ADC_CVR_OFFSETCORR_Msk & (_UINT32_(value) << ADC_CVR_OFFSETCORR_Pos)) /* Assigment of value for OFFSETCORR in the ADC_CVR register */
#define ADC_CVR_GAINCORR_Pos                  _UINT32_(16)                                         /* (ADC_CVR) Gain Correction Position */
#define ADC_CVR_GAINCORR_Msk                  (_UINT32_(0xFFFF) << ADC_CVR_GAINCORR_Pos)           /* (ADC_CVR) Gain Correction Mask */
#define ADC_CVR_GAINCORR(value)               (ADC_CVR_GAINCORR_Msk & (_UINT32_(value) << ADC_CVR_GAINCORR_Pos)) /* Assigment of value for GAINCORR in the ADC_CVR register */
#define ADC_CVR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_CVR) Register Mask  */


/* -------- ADC_CECR : (ADC Offset: 0x13C) (R/W 32) Channel Error Correction Register -------- */
#define ADC_CECR_ECORR0_Pos                   _UINT32_(0)                                          /* (ADC_CECR) Error Correction Enable for Channel 0 Position */
#define ADC_CECR_ECORR0_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR0_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 0 Mask */
#define ADC_CECR_ECORR0(value)                (ADC_CECR_ECORR0_Msk & (_UINT32_(value) << ADC_CECR_ECORR0_Pos)) /* Assigment of value for ECORR0 in the ADC_CECR register */
#define ADC_CECR_ECORR1_Pos                   _UINT32_(1)                                          /* (ADC_CECR) Error Correction Enable for Channel 1 Position */
#define ADC_CECR_ECORR1_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR1_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 1 Mask */
#define ADC_CECR_ECORR1(value)                (ADC_CECR_ECORR1_Msk & (_UINT32_(value) << ADC_CECR_ECORR1_Pos)) /* Assigment of value for ECORR1 in the ADC_CECR register */
#define ADC_CECR_ECORR2_Pos                   _UINT32_(2)                                          /* (ADC_CECR) Error Correction Enable for Channel 2 Position */
#define ADC_CECR_ECORR2_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR2_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 2 Mask */
#define ADC_CECR_ECORR2(value)                (ADC_CECR_ECORR2_Msk & (_UINT32_(value) << ADC_CECR_ECORR2_Pos)) /* Assigment of value for ECORR2 in the ADC_CECR register */
#define ADC_CECR_ECORR3_Pos                   _UINT32_(3)                                          /* (ADC_CECR) Error Correction Enable for Channel 3 Position */
#define ADC_CECR_ECORR3_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR3_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 3 Mask */
#define ADC_CECR_ECORR3(value)                (ADC_CECR_ECORR3_Msk & (_UINT32_(value) << ADC_CECR_ECORR3_Pos)) /* Assigment of value for ECORR3 in the ADC_CECR register */
#define ADC_CECR_ECORR4_Pos                   _UINT32_(4)                                          /* (ADC_CECR) Error Correction Enable for Channel 4 Position */
#define ADC_CECR_ECORR4_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR4_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 4 Mask */
#define ADC_CECR_ECORR4(value)                (ADC_CECR_ECORR4_Msk & (_UINT32_(value) << ADC_CECR_ECORR4_Pos)) /* Assigment of value for ECORR4 in the ADC_CECR register */
#define ADC_CECR_ECORR5_Pos                   _UINT32_(5)                                          /* (ADC_CECR) Error Correction Enable for Channel 5 Position */
#define ADC_CECR_ECORR5_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR5_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 5 Mask */
#define ADC_CECR_ECORR5(value)                (ADC_CECR_ECORR5_Msk & (_UINT32_(value) << ADC_CECR_ECORR5_Pos)) /* Assigment of value for ECORR5 in the ADC_CECR register */
#define ADC_CECR_ECORR6_Pos                   _UINT32_(6)                                          /* (ADC_CECR) Error Correction Enable for Channel 6 Position */
#define ADC_CECR_ECORR6_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR6_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 6 Mask */
#define ADC_CECR_ECORR6(value)                (ADC_CECR_ECORR6_Msk & (_UINT32_(value) << ADC_CECR_ECORR6_Pos)) /* Assigment of value for ECORR6 in the ADC_CECR register */
#define ADC_CECR_ECORR7_Pos                   _UINT32_(7)                                          /* (ADC_CECR) Error Correction Enable for Channel 7 Position */
#define ADC_CECR_ECORR7_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR7_Pos)               /* (ADC_CECR) Error Correction Enable for Channel 7 Mask */
#define ADC_CECR_ECORR7(value)                (ADC_CECR_ECORR7_Msk & (_UINT32_(value) << ADC_CECR_ECORR7_Pos)) /* Assigment of value for ECORR7 in the ADC_CECR register */
#define ADC_CECR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CECR) Register Mask  */

#define ADC_CECR_ECORR_Pos                    _UINT32_(0)                                          /* (ADC_CECR Position) Error Correction Enable for Channel 7 */
#define ADC_CECR_ECORR_Msk                    (_UINT32_(0xFF) << ADC_CECR_ECORR_Pos)               /* (ADC_CECR Mask) ECORR */
#define ADC_CECR_ECORR(value)                 (ADC_CECR_ECORR_Msk & (_UINT32_(value) << ADC_CECR_ECORR_Pos)) 

/* -------- ADC_SR : (ADC Offset: 0x144) ( R/ 32) Status Register -------- */
#define ADC_SR_VADCSM_Pos                     _UINT32_(0)                                          /* (ADC_SR) VDD ADC Supply Monitor Output Position */
#define ADC_SR_VADCSM_Msk                     (_UINT32_(0x1) << ADC_SR_VADCSM_Pos)                 /* (ADC_SR) VDD ADC Supply Monitor Output Mask */
#define ADC_SR_VADCSM(value)                  (ADC_SR_VADCSM_Msk & (_UINT32_(value) << ADC_SR_VADCSM_Pos)) /* Assigment of value for VADCSM in the ADC_SR register */
#define ADC_SR_Msk                            _UINT32_(0x00000001)                                 /* (ADC_SR) Register Mask  */


/* -------- ADC_WPMR : (ADC Offset: 0x14C) (R/W 32) Write Protection Mode Register -------- */
#define ADC_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                     (_UINT32_(0x1) << ADC_WPMR_WPEN_Pos)                 /* (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN(value)                  (ADC_WPMR_WPEN_Msk & (_UINT32_(value) << ADC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the ADC_WPMR register */
#define ADC_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (ADC_WPMR) Write Protection Interrupt Enable Position */
#define ADC_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << ADC_WPMR_WPITEN_Pos)               /* (ADC_WPMR) Write Protection Interrupt Enable Mask */
#define ADC_WPMR_WPITEN(value)                (ADC_WPMR_WPITEN_Msk & (_UINT32_(value) << ADC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the ADC_WPMR register */
#define ADC_WPMR_WPCREN_Pos                   _UINT32_(2)                                          /* (ADC_WPMR) Write Protection Control Register Enable Position */
#define ADC_WPMR_WPCREN_Msk                   (_UINT32_(0x1) << ADC_WPMR_WPCREN_Pos)               /* (ADC_WPMR) Write Protection Control Register Enable Mask */
#define ADC_WPMR_WPCREN(value)                (ADC_WPMR_WPCREN_Msk & (_UINT32_(value) << ADC_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the ADC_WPMR register */
#define ADC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)           /* (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)                 (ADC_WPMR_WPKEY_Msk & (_UINT32_(value) << ADC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the ADC_WPMR register */
#define   ADC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x414443)                                   /* (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define ADC_WPMR_WPKEY_PASSWD                 (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)    /* (ADC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define ADC_WPMR_Msk                          _UINT32_(0xFFFFFF07)                                 /* (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0x150) ( R/ 32) Write Protection Status Register -------- */
#define ADC_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                     (_UINT32_(0x1) << ADC_WPSR_WPVS_Pos)                 /* (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS(value)                  (ADC_WPSR_WPVS_Msk & (_UINT32_(value) << ADC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the ADC_WPSR register */
#define ADC_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (ADC_WPSR) Write Protection Violation Source Position */
#define ADC_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << ADC_WPSR_WPVSRC_Pos)            /* (ADC_WPSR) Write Protection Violation Source Mask */
#define ADC_WPSR_WPVSRC(value)                (ADC_WPSR_WPVSRC_Msk & (_UINT32_(value) << ADC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the ADC_WPSR register */
#define ADC_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (ADC_WPSR) Register Mask  */


/** \brief ADC register offsets definitions */
#define ADC_CR_REG_OFST                _UINT32_(0x00)      /* (ADC_CR) Control Register Offset */
#define ADC_MR_REG_OFST                _UINT32_(0x04)      /* (ADC_MR) Mode Register Offset */
#define ADC_SEQR1_REG_OFST             _UINT32_(0x08)      /* (ADC_SEQR1) Channel Sequence Register 1 Offset */
#define ADC_CHER_REG_OFST              _UINT32_(0x10)      /* (ADC_CHER) Channel Enable Register Offset */
#define ADC_CHDR_REG_OFST              _UINT32_(0x14)      /* (ADC_CHDR) Channel Disable Register Offset */
#define ADC_CHSR_REG_OFST              _UINT32_(0x18)      /* (ADC_CHSR) Channel Status Register Offset */
#define ADC_LCDR_REG_OFST              _UINT32_(0x20)      /* (ADC_LCDR) Last Converted Data Register Offset */
#define ADC_IER_REG_OFST               _UINT32_(0x24)      /* (ADC_IER) Interrupt Enable Register Offset */
#define ADC_IDR_REG_OFST               _UINT32_(0x28)      /* (ADC_IDR) Interrupt Disable Register Offset */
#define ADC_IMR_REG_OFST               _UINT32_(0x2C)      /* (ADC_IMR) Interrupt Mask Register Offset */
#define ADC_ISR_REG_OFST               _UINT32_(0x30)      /* (ADC_ISR) Interrupt Status Register Offset */
#define ADC_EOC_IER_REG_OFST           _UINT32_(0x34)      /* (ADC_EOC_IER) End Of Conversion Interrupt Enable Register Offset */
#define ADC_EOC_IDR_REG_OFST           _UINT32_(0x38)      /* (ADC_EOC_IDR) End Of Conversion Interrupt Disable Register Offset */
#define ADC_EOC_IMR_REG_OFST           _UINT32_(0x3C)      /* (ADC_EOC_IMR) End Of Conversion Interrupt Mask Register Offset */
#define ADC_EOC_ISR_REG_OFST           _UINT32_(0x40)      /* (ADC_EOC_ISR) End Of Conversion Interrupt Status Register Offset */
#define ADC_TEMPMR_REG_OFST            _UINT32_(0x44)      /* (ADC_TEMPMR) Temperature Sensor Mode Register Offset */
#define ADC_TEMPCWR_REG_OFST           _UINT32_(0x48)      /* (ADC_TEMPCWR) Temperature Compare Window Register Offset */
#define ADC_OVER_REG_OFST              _UINT32_(0x4C)      /* (ADC_OVER) Overrun Status Register Offset */
#define ADC_EMR_REG_OFST               _UINT32_(0x50)      /* (ADC_EMR) Extended Mode Register Offset */
#define ADC_CWR_REG_OFST               _UINT32_(0x54)      /* (ADC_CWR) Compare Window Register Offset */
#define ADC_CCR_REG_OFST               _UINT32_(0x5C)      /* (ADC_CCR) Channel Configuration Register Offset */
#define ADC_CDR_REG_OFST               _UINT32_(0x60)      /* (ADC_CDR) Channel Data Register Offset */
#define ADC_CDR0_REG_OFST              _UINT32_(0x60)      /* (ADC_CDR0) Channel Data Register Offset */
#define ADC_CDR1_REG_OFST              _UINT32_(0x64)      /* (ADC_CDR1) Channel Data Register Offset */
#define ADC_CDR2_REG_OFST              _UINT32_(0x68)      /* (ADC_CDR2) Channel Data Register Offset */
#define ADC_CDR3_REG_OFST              _UINT32_(0x6C)      /* (ADC_CDR3) Channel Data Register Offset */
#define ADC_CDR4_REG_OFST              _UINT32_(0x70)      /* (ADC_CDR4) Channel Data Register Offset */
#define ADC_CDR5_REG_OFST              _UINT32_(0x74)      /* (ADC_CDR5) Channel Data Register Offset */
#define ADC_CDR6_REG_OFST              _UINT32_(0x78)      /* (ADC_CDR6) Channel Data Register Offset */
#define ADC_CDR7_REG_OFST              _UINT32_(0x7C)      /* (ADC_CDR7) Channel Data Register Offset */
#define ADC_ACR_REG_OFST               _UINT32_(0xE0)      /* (ADC_ACR) Analog Control Register Offset */
#define ADC_FMR_REG_OFST               _UINT32_(0xE4)      /* (ADC_FMR) FIFO Mode Register Offset */
#define ADC_RPR_REG_OFST               _UINT32_(0x100)     /* (ADC_RPR) Receive Pointer Register Offset */
#define ADC_RCR_REG_OFST               _UINT32_(0x104)     /* (ADC_RCR) Receive Counter Register Offset */
#define ADC_RNPR_REG_OFST              _UINT32_(0x110)     /* (ADC_RNPR) Receive Next Pointer Register Offset */
#define ADC_RNCR_REG_OFST              _UINT32_(0x114)     /* (ADC_RNCR) Receive Next Counter Register Offset */
#define ADC_PTCR_REG_OFST              _UINT32_(0x120)     /* (ADC_PTCR) Transfer Control Register Offset */
#define ADC_PTSR_REG_OFST              _UINT32_(0x124)     /* (ADC_PTSR) Transfer Status Register Offset */
#define ADC_PWPMR_REG_OFST             _UINT32_(0x128)     /* (ADC_PWPMR) Write Protection Mode Register Offset */
#define ADC_TRGR_REG_OFST              _UINT32_(0x130)     /* (ADC_TRGR) Trigger Register Offset */
#define ADC_COSR_REG_OFST              _UINT32_(0x134)     /* (ADC_COSR) Correction Select Register Offset */
#define ADC_CVR_REG_OFST               _UINT32_(0x138)     /* (ADC_CVR) Correction Values Register Offset */
#define ADC_CECR_REG_OFST              _UINT32_(0x13C)     /* (ADC_CECR) Channel Error Correction Register Offset */
#define ADC_SR_REG_OFST                _UINT32_(0x144)     /* (ADC_SR) Status Register Offset */
#define ADC_WPMR_REG_OFST              _UINT32_(0x14C)     /* (ADC_WPMR) Write Protection Mode Register Offset */
#define ADC_WPSR_REG_OFST              _UINT32_(0x150)     /* (ADC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ADC register API structure */
typedef struct
{
  __O   uint32_t                       ADC_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ADC_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ADC_SEQR1;          /**< Offset: 0x08 (R/W  32) Channel Sequence Register 1 */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       ADC_CHER;           /**< Offset: 0x10 ( /W  32) Channel Enable Register */
  __O   uint32_t                       ADC_CHDR;           /**< Offset: 0x14 ( /W  32) Channel Disable Register */
  __I   uint32_t                       ADC_CHSR;           /**< Offset: 0x18 (R/   32) Channel Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __I   uint32_t                       ADC_LCDR;           /**< Offset: 0x20 (R/   32) Last Converted Data Register */
  __O   uint32_t                       ADC_IER;            /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ADC_IDR;            /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ADC_IMR;            /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ADC_ISR;            /**< Offset: 0x30 (R/   32) Interrupt Status Register */
  __O   uint32_t                       ADC_EOC_IER;        /**< Offset: 0x34 ( /W  32) End Of Conversion Interrupt Enable Register */
  __O   uint32_t                       ADC_EOC_IDR;        /**< Offset: 0x38 ( /W  32) End Of Conversion Interrupt Disable Register */
  __I   uint32_t                       ADC_EOC_IMR;        /**< Offset: 0x3C (R/   32) End Of Conversion Interrupt Mask Register */
  __I   uint32_t                       ADC_EOC_ISR;        /**< Offset: 0x40 (R/   32) End Of Conversion Interrupt Status Register */
  __IO  uint32_t                       ADC_TEMPMR;         /**< Offset: 0x44 (R/W  32) Temperature Sensor Mode Register */
  __IO  uint32_t                       ADC_TEMPCWR;        /**< Offset: 0x48 (R/W  32) Temperature Compare Window Register */
  __I   uint32_t                       ADC_OVER;           /**< Offset: 0x4C (R/   32) Overrun Status Register */
  __IO  uint32_t                       ADC_EMR;            /**< Offset: 0x50 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       ADC_CWR;            /**< Offset: 0x54 (R/W  32) Compare Window Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       ADC_CCR;            /**< Offset: 0x5C (R/W  32) Channel Configuration Register */
  __I   uint32_t                       ADC_CDR[8];         /**< Offset: 0x60 (R/   32) Channel Data Register */
  __I   uint8_t                        Reserved4[0x60];
  __IO  uint32_t                       ADC_ACR;            /**< Offset: 0xE0 (R/W  32) Analog Control Register */
  __IO  uint32_t                       ADC_FMR;            /**< Offset: 0xE4 (R/W  32) FIFO Mode Register */
  __I   uint8_t                        Reserved5[0x18];
  __IO  uint32_t                       ADC_RPR;            /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       ADC_RCR;            /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       ADC_RNPR;           /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       ADC_RNCR;           /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __I   uint8_t                        Reserved7[0x08];
  __O   uint32_t                       ADC_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       ADC_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       ADC_PWPMR;          /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       ADC_TRGR;           /**< Offset: 0x130 (R/W  32) Trigger Register */
  __IO  uint32_t                       ADC_COSR;           /**< Offset: 0x134 (R/W  32) Correction Select Register */
  __IO  uint32_t                       ADC_CVR;            /**< Offset: 0x138 (R/W  32) Correction Values Register */
  __IO  uint32_t                       ADC_CECR;           /**< Offset: 0x13C (R/W  32) Channel Error Correction Register */
  __I   uint8_t                        Reserved9[0x04];
  __I   uint32_t                       ADC_SR;             /**< Offset: 0x144 (R/   32) Status Register */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint32_t                       ADC_WPMR;           /**< Offset: 0x14C (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ADC_WPSR;           /**< Offset: 0x150 (R/   32) Write Protection Status Register */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_ADC_COMPONENT_H_ */
