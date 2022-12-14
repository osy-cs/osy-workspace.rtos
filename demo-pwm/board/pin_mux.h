/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTC6 (number 78), U8[11]/SW2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW2_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW2_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_SW2_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_SW2_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_SW2_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PORTA4 (number 38), SW3
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW3_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW3_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_SW3_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_SW3_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_SW3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtonsPins(void);

/*! @name PORTB21 (number 67), D12[3]/LEDRGB_BLUE
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_BLUE_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_BLUE_GPIO_PIN_MASK (1U << 21U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_BLUE_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_BLUE_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_LED_BLUE_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTB22 (number 68), D12[1]/LEDRGB_RED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_RED_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_RED_GPIO_PIN_MASK (1U << 22U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_RED_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_RED_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_LED_RED_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE26 (number 33), J2[1]/D12[4]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_GREEN_GPIO GPIOE                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_GREEN_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_LED_GREEN_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_GREEN_PIN 26U                   /*!<@brief PORT pin number */
#define BOARD_LED_GREEN_PIN_MASK (1U << 26U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 17U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTB16 (number 62), U7[4]/UART0_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTA18 (number 50), U13[16]/RMII_RXCLK
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_EXTAL0_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_EXTAL0_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_EXTAL0_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name EXTAL32 (number 29), Y3[2]/EXTAL32_RTC
  @{ */
/* @} */

/*! @name XTAL32 (number 28), Y3[1]/XTAL32_RTC
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void);

/*! @name PORTE25 (number 32), J2[18]/U8[6]/I2C0_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_SDA_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_SDA_PIN 25U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_SDA_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTE24 (number 31), J2[20]/U8[4]/I2C0_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_SCL_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_SCL_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_SCL_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTC6 (number 78), U8[11]/SW2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ACCEL_INT1_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define BOARD_ACCEL_INT1_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_INT1_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_INT1_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_INT1_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTC13 (number 85), U8[9]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ACCEL_INT2_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define BOARD_ACCEL_INT2_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_INT2_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_INT2_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_INT2_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void);

#define SOPT2_RMIISRC_EXTAL 0x00u /*!<@brief RMII clock source select: EXTAL clock */

/*! @name PORTB1 (number 54), U13[11]/RMII0_MDC
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_MDC_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_MDC_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_MDC_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTB0 (number 53), U13[10]/RMII0_MDIO
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_MDIO_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_MDIO_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_MDIO_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTA13 (number 43), U13[13]/RMII0_RXD_0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_RXD0_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_RXD0_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_RXD0_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTA12 (number 42), U13[12]/RMII0_RXD_1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_RXD1_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_RXD1_PIN 12U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_RXD1_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTA5 (number 39), U13[17]/RMII0_RXER
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_RXER_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_RXER_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_RXER_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTA16 (number 46), U13[20]/RMII0_TXD0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_TXD0_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_TXD0_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_TXD0_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTA17 (number 47), U13[21]/RMII0_TXD1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_TXD1_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_TXD1_PIN 17U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_TXD1_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTA15 (number 45), U13[19]/RMII0_TXEN
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_TXEN_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_TXEN_PIN 15U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_TXEN_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*! @name PORTA14 (number 44), U13[15]/RMII0_CRS_DV
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII0_CRS_DV_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII0_CRS_DV_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_RMII0_CRS_DV_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTA18 (number 50), U13[16]/RMII_RXCLK
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_RMII_RXCLK_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define BOARD_RMII_RXCLK_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_RMII_RXCLK_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitENETPins(void);

/*! @name PORTE0 (number 1), J15[P8]/SDHC0_D1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_D1_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_D1_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_D1_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE1 (number 2), J15[P7]/SDHC0_D0
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_D0_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_D0_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_D0_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE2 (number 3), J15[P5]/SDHC0_DCLK
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_DCLK_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_DCLK_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_DCLK_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTE3 (number 4), J15[P3]/SDHC0_CMD
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_CMD_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_CMD_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_CMD_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTE4 (number 5), J15[P2]/SDHC0_D3
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_D3_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_D3_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_D3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE5 (number 6), J15[P1]/SDHC0_D2
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC0_D2_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC0_D2_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_SDHC0_D2_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PORTE6 (number 7), J15[G1]/SD_CARD_DETECT
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SDHC_CD_GPIO GPIOE               /*!<@brief GPIO peripheral base pointer */
#define BOARD_SDHC_CD_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_SDHC_CD_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_SDHC_CD_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_SDHC_CD_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSDHCPins(void);

/*! @name USB0_DP (number 10), J22[3]/K64_MICRO_USB_DP
  @{ */
/* @} */

/*! @name USB0_DM (number 11), J22[2]/K64_MICRO_USB_DN
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSBPins(void);

/*! @name PORTA1 (number 35), J1[8]/J1[8]/PTA1
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTA1_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define LED_PTA1_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTA1_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define LED_PTA1_PIN 1U                   /*!<@brief PORT pin number */
#define LED_PTA1_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTA2 (number 36), J1[12]/J9[6]/TRACE_SWO/J1[12]/J9[6]/TRACE_SWO/PTA2
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTA2_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define LED_PTA2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTA2_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define LED_PTA2_PIN 2U                   /*!<@brief PORT pin number */
#define LED_PTA2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC0 (number 70), J1[11]/J1[11]/PTC0
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC0_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC0_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC0_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC0_PIN 0U                   /*!<@brief PORT pin number */
#define LED_PTC0_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC1 (number 71), J1[5]/J1[5]/PTC1
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC1_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC1_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC1_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC1_PIN 1U                   /*!<@brief PORT pin number */
#define LED_PTC1_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC2 (number 72), J1[14]/J1[14]/PTC2
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC2_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC2_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC2_PIN 2U                   /*!<@brief PORT pin number */
#define LED_PTC2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC3 (number 73), J1[16]/J1[16]/PTC3
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC3_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC3_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC3_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC3_PIN 3U                   /*!<@brief PORT pin number */
#define LED_PTC3_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC4 (number 76), J2[4]/J2[4]/PTC4
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC4_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC4_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC4_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC4_PIN 4U                   /*!<@brief PORT pin number */
#define LED_PTC4_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC5 (number 77), J1[15]/J1[15]/PTC5
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC5_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC5_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC5_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC5_PIN 5U                   /*!<@brief PORT pin number */
#define LED_PTC5_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC7 (number 79), J1[13]/J1[13]/PTC7
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC7_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC7_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC7_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC7_PIN 7U                   /*!<@brief PORT pin number */
#define LED_PTC7_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTC8 (number 80), J1[7]/J1[7]/PTC8
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTC8_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define LED_PTC8_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTC8_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define LED_PTC8_PIN 8U                   /*!<@brief PORT pin number */
#define LED_PTC8_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTB2 (number 55), J4[2]/J4[2]/PTB2
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB2_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LED_PTB2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB2_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LED_PTB2_PIN 2U                   /*!<@brief PORT pin number */
#define LED_PTB2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTB3 (number 56), J4[4]/J4[4]/PTB3
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB3_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LED_PTB3_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB3_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LED_PTB3_PIN 3U                   /*!<@brief PORT pin number */
#define LED_PTB3_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTB9 (number 57), J1[6]/J1[6]/PTB9
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB9_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define LED_PTB9_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB9_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define LED_PTB9_PIN 9U                   /*!<@brief PORT pin number */
#define LED_PTB9_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                          /* @} */

/*! @name PORTB10 (number 58), J4[6]/J4[6]/PTB10
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB10_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB10_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB10_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB10_PIN 10U                   /*!<@brief PORT pin number */
#define LED_PTB10_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB11 (number 59), J4[8]/J4[8]/PTB11
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB11_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB11_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB11_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB11_PIN 11U                   /*!<@brief PORT pin number */
#define LED_PTB11_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB18 (number 64), J1[1]/J1[1]/PTB18
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB18_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB18_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB18_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB18_PIN 18U                   /*!<@brief PORT pin number */
#define LED_PTB18_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB19 (number 65), J1[3]/J1[3]/PTB19
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB19_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB19_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB19_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB19_PIN 19U                   /*!<@brief PORT pin number */
#define LED_PTB19_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB20 (number 66), J6[3]/J4[9]/RF_WIFI_CE/J6[3]/J4[9]/RF_WIFI_CE/PTB20
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB20_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB20_GPIO_PIN_MASK (1U << 20U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB20_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB20_PIN 20U                   /*!<@brief PORT pin number */
#define LED_PTB20_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*! @name PORTB23 (number 69), J1[10]/J1[10]/PTB23
  @{ */

/* Symbols to be used with GPIO driver */
#define LED_PTB23_GPIO GPIOB                /*!<@brief GPIO peripheral base pointer */
#define LED_PTB23_GPIO_PIN_MASK (1U << 23U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LED_PTB23_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define LED_PTB23_PIN 23U                   /*!<@brief PORT pin number */
#define LED_PTB23_PIN_MASK (1U << 23U)      /*!<@brief PORT pin mask */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void KIT_LED(void);

/*! @name PORTC9 (number 81), J1[9]/J1[9]/PTC9
  @{ */

/* Symbols to be used with GPIO driver */
#define SW_PTC9_GPIO GPIOC               /*!<@brief GPIO peripheral base pointer */
#define SW_PTC9_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SW_PTC9_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define SW_PTC9_PIN 9U                   /*!<@brief PORT pin number */
#define SW_PTC9_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                         /* @} */

/*! @name PORTC10 (number 82), J4[12]/J4[12]/PTC10
  @{ */

/* Symbols to be used with GPIO driver */
#define SW_PTC10_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define SW_PTC10_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SW_PTC10_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define SW_PTC10_PIN 10U                   /*!<@brief PORT pin number */
#define SW_PTC10_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PORTC11 (number 83), J4[10]/J4[10]/PTC11
  @{ */

/* Symbols to be used with GPIO driver */
#define SW_PTC11_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define SW_PTC11_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SW_PTC11_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define SW_PTC11_PIN 11U                   /*!<@brief PORT pin number */
#define SW_PTC11_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PORTC12 (number 84), J2[2]/J2[2]/PTC12
  @{ */

/* Symbols to be used with GPIO driver */
#define SW_PTC12_GPIO GPIOC                /*!<@brief GPIO peripheral base pointer */
#define SW_PTC12_GPIO_PIN_MASK (1U << 12U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SW_PTC12_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define SW_PTC12_PIN 12U                   /*!<@brief PORT pin number */
#define SW_PTC12_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void KIT_SW(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
