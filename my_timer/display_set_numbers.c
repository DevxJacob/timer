#include "pin_set.h"
#include "display_set_numbers.h"
#include <avr/io.h>
#include <util/delay.h>
#include "increasing.h"


void display_set_numbers( int * state){
      PORTB = ~ UNITS_PIN;
      PORTD = digits_array[*state];
      _delay_ms(5);
      PORTB = ~ DECIMALS_PIN;
      PORTD = digits_array[decimals];
      _delay_ms(5);
}