#include "pin_set.h"
#include <avr/io.h>

void pin_set(void){
    DDRA = BUZ_PIN;
    PORTA |= SW_PIN_STOP_COUNTDOWN;
    DDRB = UNITS_PIN | DECIMALS_PIN; //set dir out
    PORTB = ~UNITS_PIN ;
    PORTC |= SW_PIN_INCREASE | SW_PIN_DECREASE | SW_PIN_START_COUNTDOWN | SW_PIN_TURN_BUZ_OFF;
    DDRD = SEGMENT_PINS;
}