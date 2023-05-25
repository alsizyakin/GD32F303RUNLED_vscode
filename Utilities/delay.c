
#include <stdint.h> 
#include "delay.h"

void Delay(uint32_t ms){
	
        volatile uint32_t nCount;
				nCount=72000000;
	
        nCount=(nCount/10000)*ms;
        for (; nCount!=0; nCount--);
}


void DelayMC(uint32_t mc){
	
        volatile uint32_t nCount;
				nCount=72000000;
	
        nCount=(nCount/10000000)*mc;
        for (; nCount!=0; nCount--);
}

/**
 * @brief Non_blocking delay constructor
 * 
 * @param me 
 * @param limit 
 * @param counter 
 */
void nonblocking_delay_ctor(nonblocking_delay * const me)
{
    me->counter = 0;
    me->limit = 0;
    me->state = DISABLE;
}

/**
 * @brief Start non_blocking delay
 * 
 * @param me 
 * @param input 
 * @return ErrStatus 
 */
ErrStatus nonblocking_delay_start(nonblocking_delay * const me, uint32_t input)
{
    if(me->state == ENABLE)
    {
			return ERROR;
		}

		me->limit = input;
		me->counter = 0;
		me->state = ENABLE;

		return SUCCESS;
}

/**
 * @brief Stop non-blocking delay
 * 
 * @param me 
 */
void nonblocking_delay_stop(nonblocking_delay * const me)
{
    me->limit = 0;
		me->counter = 0;
		me->state = DISABLE;
}

/**
 * @brief Increment non-blocking delay counter
 * 
 * @param me 
 */
void nonblocking_delay_tick(nonblocking_delay * const me)
{
    if(me->state == DISABLE)
    {
			return;
		}

		if((++me->counter) >= me->limit)
    {
			me->state = DISABLE;
			me->limit = 0;
			me->counter = 0;
		}
}

/**
 * @brief Get non-blocking delay status
 * 
 * @param me 
 * @return ControlStatus 
 */
ControlStatus nonblocking_delay_get_state(nonblocking_delay * const me)
{
    return me->state;
}

/* Non-blocking delay operations */