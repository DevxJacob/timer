#include "pin_set.h"
#include "display_set_numbers.h"
#include "countdown.h"
#include "increasing.h"
#include "buzzer.h"
#include "switch_control.h"
#include<util/delay.h>
#include <avr/io.h>

void countdown (void){

    int i = decimals * 10 + units;
    int turn = 1;

    for( ;i > 0; i-- ){
        for( int j = 0;j < 100; ++j){
            if(!(SW_PIN_STOP_COUNTDOWN & PINA)) _delay_ms(80);
            if(!(SW_PIN_STOP_COUNTDOWN & PINA)) { i = 0; turn = 0; j = 0; }
            display_set_numbers(&units);
        }
        if (units > 0 && turn == 1){
            --units;
            display_set_numbers(&units);
        }
        else if( decimals > 0 && turn ==1){
            --decimals;
            units = 9;
             display_set_numbers(&units);
        }
    }
    if(turn) buzzer_on();
    display_set_numbers(&units);
}