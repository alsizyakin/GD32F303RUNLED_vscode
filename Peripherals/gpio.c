/*!
    \file   gpio.cpp
    \brief  GPIO initialization
*/ 

#include "gpio.h"
#include "main.h"

void gpio_config()
{
       /* LEDs */
    gpio_init(LED_1_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, LED_1_PIN);
    gpio_init(LED_2_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, LED_2_PIN);
    gpio_init(LED_3_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, LED_3_PIN);
    gpio_init(LED_4_PORT, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, LED_4_PIN);

    /* Keys */;
    gpio_init(KEY_1_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, KEY_1_PIN);
    gpio_init(KEY_2_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, KEY_2_PIN);

    /* Switches */
    gpio_init(SW_1_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, SW_1_PIN);
    gpio_init(SW_2_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, SW_2_PIN);
    gpio_init(SW_3_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, SW_3_PIN);
    gpio_init(SW_4_PORT, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, SW_4_PIN);
        
}

