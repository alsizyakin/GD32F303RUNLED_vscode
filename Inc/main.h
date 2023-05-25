/**
 * @file main.h
 * @author Nikolay Shevyrev
 * @brief Header file for main
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef MAIN_H
#define MAIN_H

#include "gd32f30x.h"


#ifdef __cplusplus
 extern "C" {
#endif

/*** Private functions ***/
void remote_control(void);
void update_measure(void);

/***** Private defines *****/
#define PWM_PERIOD  ((uint32_t)(SystemCoreClock/FPWM)/2-1)

#define ADC_CURRENT_WATCHDOG_HT (uint16_t) 0x0BE8
#define ADC_CURRENT_WATCHDOG_LT (uint16_t) 0x0418

/* PWM  Outputs */
#define PWM_TIMER   TIMER0
#define PWM_CH_U	TIMER_CH_2
#define PWM_CH_V	TIMER_CH_1
#define PWM_CH_W	TIMER_CH_0

#define PWM0_H_PIN  GPIO_PIN_10
#define PWM0_H_PORT GPIOA

#define PWM1_H_PIN  GPIO_PIN_9
#define PWM1_H_PORT GPIOA

#define PWM2_H_PIN  GPIO_PIN_8
#define PWM2_H_PORT GPIOA

#define PWM0_L_PIN  GPIO_PIN_15
#define PWM0_L_PORT GPIOB

#define PWM1_L_PIN  GPIO_PIN_14
#define PWM1_L_PORT GPIOB

#define PWM2_L_PIN  GPIO_PIN_13
#define PWM2_L_PORT GPIOB

/* ADC Inputs */
#define U_CURRENT_PIN           GPIO_PIN_0
#define U_CURRENT_PORT          GPIOC
#define U_CURRENT_ADC_CHANNEL   ADC_CHANNEL_10
#define U_CURRENT_ADC           ADC0
#define U_CURRENT_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_0

#define V_CURRENT_PIN           GPIO_PIN_1
#define V_CURRENT_PORT          GPIOC
#define V_CURRENT_ADC_CHANNEL   ADC_CHANNEL_11
#define V_CURRENT_ADC           ADC1
#define V_CURRENT_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_0

#define W_CURRENT_PIN           GPIO_PIN_2
#define W_CURRENT_PORT          GPIOC
#define W_CURRENT_ADC_CHANNEL   ADC_CHANNEL_12
#define W_CURRENT_ADC           ADC2
#define W_CURRENT_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_0

#define DC_VOLTAGE_PIN          GPIO_PIN_3
#define DC_VOLTAGE_PORT         GPIOC
#define DC_VOLTAGE_ADC_CHANNEL  ADC_CHANNEL_13
#define DC_VOLTAGE_ADC          ADC0
#define DC_VOLTAGE_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_1

#define TEMP_PIN                GPIO_PIN_1
#define TEMP_PORT               GPIOA
#define TEMP_ADC_CHANNEL        ADC_CHANNEL_1
#define TEMP_ADC                ADC1
#define TEMP_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_1

#define PRESSURE_PIN            GPIO_PIN_0
#define PRESSURE_PORT           GPIOA
#define PRESSURE_ADC_CHANNEL    ADC_CHANNEL_0
#define PRESSURE_ADC            ADC2
#define PRESSURE_ADC_INSERTED_CHANNEL  ADC_INSERTED_CHANNEL_1


/* DAC outputs */
#define DAC0_PIN    GPIO_PIN_4
#define DAC0_PORT   GPIOA

#define DAC1_PIN    GPIO_PIN_5
#define DAC1_PORT   GPIOA

/* LEDs */
#define LED_1_PIN   GPIO_PIN_4
#define LED_1_PORT  GPIOC

#define LED_2_PIN   GPIO_PIN_5
#define LED_2_PORT  GPIOC

#define LED_3_PIN   GPIO_PIN_0
#define LED_3_PORT  GPIOB

#define LED_4_PIN   GPIO_PIN_1
#define LED_4_PORT  GPIOB

#define LED_OFF_ALL()   {                                               \
                            gpio_bit_reset(LED_1_PORT, LED_1_PIN);      \
                            gpio_bit_reset(LED_2_PORT, LED_2_PIN);      \
                            gpio_bit_reset(LED_3_PORT, LED_3_PIN);      \
                            gpio_bit_reset(LED_4_PORT, LED_4_PIN);      \
                        }

/* Keys */
#define KEY_1_PIN   GPIO_PIN_6
#define KEY_1_PORT  GPIOA

#define KEY_2_PIN   GPIO_PIN_7
#define KEY_2_PORT  GPIOA

#define KEY_1_EXTI_PORT_SOURCE  GPIO_PORT_SOURCE_GPIOA
#define KEY_1_EXTI_PIN_SOURCE   GPIO_EVENT_PIN_6
#define KEY_1_EXTI_LINE         EXTI_6

#define KEY_2_EXTI_PORT_SOURCE  GPIO_PORT_SOURCE_GPIOA
#define KEY_2_EXTI_PIN_SOURCE   GPIO_EVENT_PIN_7
#define KEY_2_EXTI_LINE         EXTI_7

/* Switches */
#define SW_1_PIN    GPIO_PIN_6
#define SW_1_PORT   GPIOC

#define SW_2_PIN    GPIO_PIN_7
#define SW_2_PORT   GPIOC

#define SW_3_PIN    GPIO_PIN_8
#define SW_3_PORT   GPIOC

#define SW_4_PIN    GPIO_PIN_9
#define SW_4_PORT   GPIOC

/* Other IOs */
#define VFO_PIN     GPIO_PIN_2
#define VFO_PORT    GPIOA

#define VFO_EXTI_PORT_SOURCE  GPIO_PORT_SOURCE_GPIOA
#define VFO_EXTI_PIN_SOURCE   GPIO_EVENT_PIN_2
#define VFO_EXTI_LINE         EXTI_0

#define RELAY_PIN   GPIO_PIN_3
#define RELAY_PORT  GPIOA

#define RELAY_CLOSE()   gpio_bit_set(RELAY_PORT, RELAY_PIN);
#define RELAY_OPEN()    gpio_bit_reset(RELAY_PORT, RELAY_PIN);

/* I2C0 EEPROM IOs */
#define EEPROM_SCL_PIN    GPIO_PIN_6
#define EEPROM_SCL_PORT   GPIOB

#define EEPROM_SDA_PIN    GPIO_PIN_7
#define EEPROM_SDA_PORT   GPIOB

#define I2C0_SPEED           ((uint32_t)400000)

#define M24C02_ADDRESS  0xA0 
#define M24C02_PAGE_SIZE    16
#define M24C02_PAGE_NUMBER  16
#define M24C02_MEMORY_SIZE  256

/* USART2 IOs */
#define USART2_TX_PIN   GPIO_PIN_10
#define USART2_TX_PORT  GPIOB

#define USART2_RX_PIN   GPIO_PIN_11
#define USART2_RX_PORT  GPIOB

/* DMA Channels for USART */
#define DMA_USART_TX        DMA0
#define DMA_USART_RX        DMA0

#define DMA_USART_TX_CH     DMA_CH1
#define DMA_USART_RX_CH     DMA_CH2    

/* I2C1 IOs */
#define I2C1_SCL_PIN   GPIO_PIN_10
#define I2C1_SCL_PORT  GPIOB

#define I2C1_SDA_PIN   GPIO_PIN_11
#define I2C1_SDA_PORT  GPIOB

/* SPI2 IOs */
#define SPI2_SCK_PIN    GPIO_PIN_10
#define SPI2_SCK_PORT   GPIOC

#define SPI2_MISO_PIN    GPIO_PIN_11
#define SPI2_MISO_PORT   GPIOC

#define SPI2_MOSI_PIN    GPIO_PIN_12
#define SPI2_MOSI_PORT   GPIOC

#define SPI2_CS_PIN    GPIO_PIN_2
#define SPI2_CS_PORT   GPIOD

/* Debug pins */
#define DBG_PIN_1    GPIO_PIN_10
#define DBG_PIN_2    GPIO_PIN_11
#define DBG_PIN_3    GPIO_PIN_12
#define DBG_PORT     GPIOC


#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */
