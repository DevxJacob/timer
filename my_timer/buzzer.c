#include "buzzer.h"
#include "pin_set.h"
#include "display_set_numbers.h" 
#include "increasing.h"
#include <util/delay.h>
#include <avr/io.h>

void buzzer_on(void){
    int i, j, n = 1;
    while (n){
        for(int m = 0; m< 2; m++){
            PORTA = BUZ_PIN;
            for(j = 0;j < 25; ++j){
                if(!(SW_PIN_TURN_BUZ_OFF & PINC)) _delay_ms(80);
                if(!(SW_PIN_TURN_BUZ_OFF & PINC)) {n = 0; i = 100; j = 25;}
                display_set_numbers(&units);
            }
            PORTA = SW_PIN_STOP_COUNTDOWN;
            for(j = 0;j < 25; ++j){
                if(!(SW_PIN_TURN_BUZ_OFF & PINC)) _delay_ms(80);
                if(!(SW_PIN_TURN_BUZ_OFF & PINC)) {n = 0; i = 100; j = 25;}
                display_set_numbers(&units);
            }
        }
        for(i =  0;i < 100; ++i){
            if(!(SW_PIN_TURN_BUZ_OFF & PINC)) _delay_ms(80);
            if(!(SW_PIN_TURN_BUZ_OFF & PINC)) {n = 0; i = 100; j = 25;}
            display_set_numbers(&units);
        }
    }
}
