/*
    ChibiOS - Copyright (C) 2006-2014 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for ETH module board.
 */

/*
 * Board identifier.
 */
#define BOARD_ETH_MODULE
#define BOARD_NAME                  "ETH module"

/*
 * Ethernet PHY type.
 */
#define BOARD_PHY_ID                MII_LAN8710A_ID
#define BOARD_PHY_RMII

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                24000000
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330

/*
 * MCU type as defined in the ST header.
 */
#ifndef STM32F407xx // CL defined
#define STM32F407xx
#endif

/*
 * GPIO port assignments.
 */
#define LED_GPIO                    GPIOE
#define SD_LED_GPIO                 GPIOA
#define SERIAL_DRIVER				SD1

#define LED							GPIOE_LED

/*
 * IO pins assignments.
 */
#define GPIOA_PIN0                  0
#define GPIOA_ETH_RMII_REF_CLK      1
#define GPIOA_ETH_RMII_MDIO         2
#define GPIOA_PIN3                  3
#define GPIOA_SD_LED                4
#define GPIOA_PIN5                  5
#define GPIOA_PIN6                  6
#define GPIOA_ETH_RMII_CRS_DV       7
#define GPIOA_PIN8                  8
#define GPIOA_PIN9                  9
#define GPIOA_PIN10                 10
#define GPIOA_OTG_FS_DM             11
#define GPIOA_OTG_FS_DP             12
#define GPIOA_JTAG_TMS              13
#define GPIOA_JTAG_TCK              14
#define GPIOA_JTAG_TDI              15

#define GPIOB_PIN0                  0
#define GPIOB_PIN1                  1
#define GPIOB_PIN2                  2
#define GPIOB_JTAG_TDO              3
#define GPIOB_JTAG_TRST             4
#define GPIOB_PIN5                  5
#define GPIOB_UART_TX               6
#define GPIOB_UART_RX               7
#define GPIOB_PIN8                  8
#define GPIOB_PIN9                  9
#define GPIOB_PIN10                 10
#define GPIOB_ETH_RMII_TXEN         11
#define GPIOB_ETH_RMII_TXD0         12
#define GPIOB_ETH_RMII_TXD1         13
#define GPIOB_PIN14                 14
#define GPIOB_PIN15                 15

#define GPIOC_PIN0                  0
#define GPIOC_ETH_RMII_MDC          1
#define GPIOC_PIN2                  2
#define GPIOC_ETH_PWRDN             3
#define GPIOC_ETH_RMII_RXD0         4
#define GPIOC_ETH_RMII_RXD1         5
#define GPIOC_PIN6                  6
#define GPIOC_PIN7                  7
#define GPIOC_SD_D0                 8
#define GPIOC_SD_D1                 9
#define GPIOC_SD_D2                 10
#define GPIOC_SD_D3                 11
#define GPIOC_SD_CLK                12
#define GPIOC_PIN13                 13
#define GPIOC_PIN14                 14
#define GPIOC_PIN15                 15

#define GPIOD_CAN_RX                0
#define GPIOD_CAN_TX                1
#define GPIOD_SD_CMD                2
#define GPIOD_PIN3                  3
#define GPIOD_PIN4                  4
#define GPIOD_PIN5                  5
#define GPIOD_PIN6                  6
#define GPIOD_PIN7                  7
#define GPIOD_PIN8                  8
#define GPIOD_PIN9                  9
#define GPIOD_ETH_RST               10
#define GPIOD_PIN11                 11
#define GPIOD_PIN12                 12
#define GPIOD_ETH_PHYAD0            13
#define GPIOD_PIN14                 14
#define GPIOD_PIN15                 15

#define GPIOE_PIN0                  0
#define GPIOE_PIN1                  1
#define GPIOE_PIN2                  2
#define GPIOE_PIN3                  3
#define GPIOE_PIN4                  4
#define GPIOE_PIN5                  5
#define GPIOE_LED                   6
#define GPIOE_PIN7                  7
#define GPIOE_PIN8                  8
#define GPIOE_PIN9                  9
#define GPIOE_PIN10                 10
#define GPIOE_PIN11                 11
#define GPIOE_PIN12                 12
#define GPIOE_PIN13                 13
#define GPIOE_PIN14                 14
#define GPIOE_PIN15                 15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_PIN7                  7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_PIN5                  5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_PIN11                 11
#define GPIOG_PIN12                 12
#define GPIOG_PIN13                 13
#define GPIOG_PIN14                 14
#define GPIOG_PIN15                 15

#define GPIOH_OSC_IN                0
#define GPIOH_PIN1                  1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - PIN0                      (input pullup).
 * PA1  - ETH_RMII_REF_CLK          (alternate 11).
 * PA2  - ETH_RMII_MDIO             (alternate 11).
 * PA3  - PIN3                      (input pullup).
 * PA4  - SD_LED                    (output pushpull maximum).
 * PA5  - PIN5                      (input pullup).
 * PA6  - PIN6                      (input pullup).
 * PA7  - ETH_RMII_CRS_DV           (alternate 11).
 * PA8  - PIN8                      (input pullup).
 * PA9  - PIN9                      (input pullup).
 * PA10 - PIN10                     (input pullup).
 * PA11 - OTG_FS_DM                 (alternate 10).
 * PA12 - OTG_FS_DP                 (alternate 10).
 * PA13 - JTAG_TMS                  (alternate 0).
 * PA14 - JTAG_TCK                  (alternate 0).
 * PA15 - JTAG_TDI                  (alternate 0).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_PIN0) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_MODE_INPUT(GPIOA_PIN3) |           \
                                     PIN_MODE_OUTPUT(GPIOA_SD_LED) |        \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_MODE_INPUT(GPIOA_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN10) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TMS) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SD_LED) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DP) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TMS) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(GPIOA_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_MDIO) | \
                                     PIN_OSPEED_100M(GPIOA_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOA_SD_LED) |        \
                                     PIN_OSPEED_100M(GPIOA_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OSPEED_100M(GPIOA_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DM) |     \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DP) |     \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TMS) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TCK) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TDI))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_SD_LED) |     \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_PUPDR_PULLUP(GPIOA_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TMS) |   \
                                     PIN_PUPDR_PULLDOWN(GPIOA_JTAG_TCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TDI))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_REF_CLK) | \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_MDIO) |    \
                                     PIN_ODR_HIGH(GPIOA_PIN3) |             \
                                     PIN_ODR_LOW(GPIOA_SD_LED) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_CRS_DV) |  \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DM) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DP) |        \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TMS) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TCK) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TDI))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_REF_CLK, 11) |\
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_MDIO, 11) | \
                                     PIN_AFIO_AF(GPIOA_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOA_SD_LED, 0) |         \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_CRS_DV, 11))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DM, 10) |     \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DP, 10) |     \
                                     PIN_AFIO_AF(GPIOA_JTAG_TMS, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TCK, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TDI, 0))

/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input pullup).
 * PB1  - PIN1                      (input pullup).
 * PB2  - PIN2                      (input pullup).
 * PB3  - JTAG_TDO                  (alternate 0).
 * PB4  - JTAG_TRST                 (alternate 0).
 * PB5  - PIN5                      (input pullup).
 * PB6  - UART_TX                   (alternate 7).
 * PB7  - UART_RX                   (alternate 7).
 * PB8  - PIN8                      (input pullup).
 * PB9  - PIN9                      (input pullup).
 * PB10 - PIN10                     (input pullup).
 * PB11 - ETH_RMII_TXEN             (alternate 11).
 * PB12 - ETH_RMII_TXD0             (alternate 11).
 * PB13 - ETH_RMII_TXD1             (alternate 11).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TDO) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TRST) |  \
                                     PIN_MODE_INPUT(GPIOB_PIN5) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_UART_TX) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_UART_RX) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN10) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_ETH_RMII_TXEN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_ETH_RMII_TXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOB_ETH_RMII_TXD1) |\
                                     PIN_MODE_INPUT(GPIOB_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TDO) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TRST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_TX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_RX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ETH_RMII_TXEN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_ETH_RMII_TXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_ETH_RMII_TXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TDO) |      \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TRST) |     \
                                     PIN_OSPEED_100M(GPIOB_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOB_UART_TX) |       \
                                     PIN_OSPEED_100M(GPIOB_UART_RX) |       \
                                     PIN_OSPEED_100M(GPIOB_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOB_ETH_RMII_TXEN) | \
                                     PIN_OSPEED_100M(GPIOB_ETH_RMII_TXD0) | \
                                     PIN_OSPEED_100M(GPIOB_ETH_RMII_TXD1) | \
                                     PIN_OSPEED_100M(GPIOB_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_JTAG_TDO) |   \
                                     PIN_PUPDR_PULLUP(GPIOB_JTAG_TRST) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_UART_TX) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_UART_RX) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_ETH_RMII_TXEN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_ETH_RMII_TXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOB_ETH_RMII_TXD1) |\
                                     PIN_PUPDR_PULLUP(GPIOB_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TDO) |         \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TRST) |        \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOB_UART_TX) |          \
                                     PIN_ODR_HIGH(GPIOB_UART_RX) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOB_ETH_RMII_TXEN) |    \
                                     PIN_ODR_HIGH(GPIOB_ETH_RMII_TXD0) |    \
                                     PIN_ODR_HIGH(GPIOB_ETH_RMII_TXD1) |    \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOB_JTAG_TDO, 0) |       \
                                     PIN_AFIO_AF(GPIOB_JTAG_TRST, 0) |      \
                                     PIN_AFIO_AF(GPIOB_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOB_UART_TX, 7) |        \
                                     PIN_AFIO_AF(GPIOB_UART_RX, 7))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOB_ETH_RMII_TXEN, 11) | \
                                     PIN_AFIO_AF(GPIOB_ETH_RMII_TXD0, 11) | \
                                     PIN_AFIO_AF(GPIOB_ETH_RMII_TXD1, 11) | \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input pullup).
 * PC1  - ETH_RMII_MDC              (alternate 11).
 * PC2  - PIN2                      (input pullup).
 * PC3  - ETH_PWRDN                 (output pushpull maximum).
 * PC4  - ETH_RMII_RXD0             (alternate 11).
 * PC5  - ETH_RMII_RXD1             (alternate 11).
 * PC6  - PIN6                      (input pullup).
 * PC7  - PIN7                      (input pullup).
 * PC8  - SD_D0                     (alternate 12).
 * PC9  - SD_D1                     (alternate 12).
 * PC10 - SD_D2                     (alternate 12).
 * PC11 - SD_D3                     (alternate 12).
 * PC12 - SD_CLK                    (alternate 12).
 * PC13 - PIN13                     (input pullup).
 * PC14 - PIN14                     (input pullup).
 * PC15 - PIN15                     (input pullup).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_MDC) |\
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_OUTPUT(GPIOC_ETH_PWRDN) |     \
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D0) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D1) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D2) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D3) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_CLK) |     \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_MDC) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_PWRDN) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D0) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D1) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D2) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D3) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_CLK) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_MDC) |  \
                                     PIN_OSPEED_100M(GPIOC_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOC_ETH_PWRDN) |     \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD0) | \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD1) | \
                                     PIN_OSPEED_100M(GPIOC_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOC_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOC_SD_D0) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D1) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D2) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D3) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_CLK) |        \
                                     PIN_OSPEED_100M(GPIOC_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOC_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_MDC) |\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_PWRDN) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_PUPDR_PULLUP(GPIOC_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D0) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D1) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D2) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D3) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_CLK) |     \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_MDC) |     \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_ETH_PWRDN) |        \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD0) |    \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD1) |    \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_SD_D0) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D1) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D2) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D3) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_CLK) |           \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_MDC, 11) |  \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOC_ETH_PWRDN, 0) |      \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD0, 11) | \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD1, 11) | \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_SD_D0, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D1, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D2, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D3, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_CLK, 12) |        \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0))

/*
 * GPIOD setup:
 *
 * PD0  - CAN_RX                    (alternate 9).
 * PD1  - CAN_TX                    (alternate 9).
 * PD2  - SD_CMD                    (alternate 12).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - ETH_RST                   (output pushpull maximum).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - ETH_PHYAD0                (output pushpull maximum).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_CAN_RX) |     \
                                     PIN_MODE_ALTERNATE(GPIOD_CAN_TX) |     \
                                     PIN_MODE_ALTERNATE(GPIOD_SD_CMD) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_OUTPUT(GPIOD_ETH_RST) |       \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_OUTPUT(GPIOD_ETH_PHYAD0) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_CAN_RX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_CAN_TX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_SD_CMD) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_ETH_RST) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_ETH_PHYAD0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_CAN_RX) |        \
                                     PIN_OSPEED_100M(GPIOD_CAN_TX) |        \
                                     PIN_OSPEED_100M(GPIOD_SD_CMD) |        \
                                     PIN_OSPEED_100M(GPIOD_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOD_ETH_RST) |       \
                                     PIN_OSPEED_100M(GPIOD_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOD_ETH_PHYAD0) |    \
                                     PIN_OSPEED_100M(GPIOD_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_CAN_RX) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_CAN_TX) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_SD_CMD) |     \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_ETH_RST) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_ETH_PHYAD0) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_CAN_RX) |           \
                                     PIN_ODR_HIGH(GPIOD_CAN_TX) |           \
                                     PIN_ODR_HIGH(GPIOD_SD_CMD) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_ETH_RST) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_LOW(GPIOD_ETH_PHYAD0) |        \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_CAN_RX, 9) |         \
                                     PIN_AFIO_AF(GPIOD_CAN_TX, 9) |         \
                                     PIN_AFIO_AF(GPIOD_SD_CMD, 12) |        \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOD_ETH_RST, 0) |        \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOD_ETH_PHYAD0, 0) |     \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - LED                       (output pushpull maximum).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_OUTPUT(GPIOE_LED) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_LED) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOE_LED) |           \
                                     PIN_OSPEED_100M(GPIOE_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN5) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_LED) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_LED) |              \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOE_LED, 0) |            \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pullup).
 * PF1  - PIN1                      (input pullup).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - PIN11                     (input pullup).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLUP(GPIOF_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pullup).
 * PG1  - PIN1                      (input pullup).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - PIN4                      (input pullup).
 * PG5  - PIN5                      (input pullup).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - PIN10                     (input pullup).
 * PG11 - PIN11                     (input pullup).
 * PG12 - PIN12                     (input pullup).
 * PG13 - PIN13                     (input pullup).
 * PG14 - PIN14                     (input pullup).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(GPIOG_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLUP(GPIOG_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - PIN1                      (input pullup).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_100M(GPIOH_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0) |         \
                                     PIN_AFIO_AF(GPIOH_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pullup).
 * PI1  - PIN1                      (input pullup).
 * PI2  - PIN2                      (input pullup).
 * PI3  - PIN3                      (input pullup).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - PIN8                      (input pullup).
 * PI9  - PIN9                      (input pullup).
 * PI10 - PIN10                     (input pullup).
 * PI11 - PIN11                     (input pullup).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_100M(GPIOI_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
