/**
 * @file main.cpp
 * @author Nikolay Shevyrev -> Alexey Sizyakin
 * @brief 
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h" 
#include "rcu.h"
#include "gpio.h"
#include "delay.h" 
#include "system_gd32f30x.h"


/* Private function prototypes -----------------------------------------------*/
//void SystemClock_Config(void);


/**
 * @brief Main function
 * 
 * @param[in]   none
 * @param[out]  none
 * @return      none
 */
int main(void)
{	
	SystemInit();

	dbg_periph_enable(DBG_TIMER0_HOLD);
	
	Delay(500); // StartUp Delay = 1000 ms
	
    /* configure systick */
    rcu_config();
    gpio_config();
	
	while(1){
		gpio_bit_reset(LED_4_PORT, GPIO_PIN_1); 
		gpio_bit_set(LED_1_PORT, GPIO_PIN_4);
		Delay(25); // StartUp Delay = 1000 ms
		
		gpio_bit_reset(LED_1_PORT, GPIO_PIN_4);
		gpio_bit_set(LED_2_PORT, GPIO_PIN_5);
		Delay(25); // StartUp Delay = 1000 ms
		
		gpio_bit_reset(LED_2_PORT, GPIO_PIN_5);
		gpio_bit_set(LED_3_PORT, GPIO_PIN_0);
		Delay(25); // StartUp Delay = 1000 ms
		
		gpio_bit_reset(LED_3_PORT, GPIO_PIN_0);
		gpio_bit_set(LED_4_PORT, GPIO_PIN_1);
		Delay(25); // StartUp Delay = 1000 ms
	}
    

}







