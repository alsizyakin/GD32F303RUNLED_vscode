#ifndef DELAY
#define DELAY

#include "main.h"

void Delay(uint32_t ms);   
void DelayMC(uint32_t mc);

/* Non-blocking delay attributes */
typedef struct
{
    uint32_t limit;
    uint32_t counter;
    ControlStatus state;
} nonblocking_delay;

/* Non-blocking delay operations */
void nonblocking_delay_ctor(nonblocking_delay * const me);

ErrStatus nonblocking_delay_start(nonblocking_delay * const me, uint32_t input);

void nonblocking_delay_stop(nonblocking_delay * const me);

void nonblocking_delay_tick(nonblocking_delay * const me);

ControlStatus nonblocking_delay_get_state(nonblocking_delay * const me);

#endif
