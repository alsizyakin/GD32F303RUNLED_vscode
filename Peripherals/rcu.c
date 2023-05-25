/*!
    \file   rcu.cpp
    \brief  RCU initialization
*/

#include "main.h"
#include "rcu.h"

void rcu_config(void)
{
    /* gpios clockenable */
    rcu_periph_clock_enable(RCU_GPIOA);
    rcu_periph_clock_enable(RCU_GPIOB);
    rcu_periph_clock_enable(RCU_GPIOC);
    rcu_periph_clock_enable(RCU_GPIOD);
    
    rcu_periph_clock_enable(RCU_AF);
    
    /* timer0 clock enable */
    rcu_periph_clock_enable(RCU_TIMER0);

    /* adc0 clock enable */
    rcu_periph_clock_enable(RCU_ADC0);
    rcu_periph_clock_enable(RCU_ADC1);
    rcu_periph_clock_enable(RCU_ADC2);
    rcu_adc_clock_config(RCU_CKADC_CKAPB2_DIV6);

    /* i2c clock enable */
    rcu_periph_clock_enable(RCU_I2C0);

    /* dac clock enable */
    rcu_periph_clock_enable(RCU_DAC);

    /* usart2 clock enable */
    rcu_periph_clock_enable(RCU_USART2);

    /* dma0 clock enable */
    rcu_periph_clock_enable(RCU_DMA0);
}