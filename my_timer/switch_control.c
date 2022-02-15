#include "pin_set.h"
#include "switch_control.h"
#include "increasing.h"
#include "decreasing.h"
#include "display_set_numbers.h"
#include "countdown.h"
#include <avr/io.h>
#include<util/delay.h>

void switch_control (void){
    display_set_numbers(&units);
    if(!(SW_PIN_INCREASE & PINC)) _delay_ms(80);
    if(!(SW_PIN_INCREASE & PINC)) increase_number();
    if(!(SW_PIN_DECREASE & PINC)) _delay_ms(80);
    if(!(SW_PIN_DECREASE & PINC)) decrease_number();
    if(!(SW_PIN_START_COUNTDOWN & PINC)) _delay_ms(80);
    if(!(SW_PIN_START_COUNTDOWN & PINC)) countdown();
}
