#include "nrf.h"
#include "nrf_gpio.h"
#include "system_nrf52.h"
#include "nrf_delay.h"

int main(void)
{			
    nrf_gpio_cfg_output(23);
    for(;;){	
        nrf_gpio_pin_clear(23);
        nrf_delay_ms(1000);
        nrf_gpio_pin_set(23);
        nrf_delay_ms(1000);
    }
}


