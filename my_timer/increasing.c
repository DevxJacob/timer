#include "increasing.h"
#include "pin_set.h"
#include "display_set_numbers.h"
#include <avr/io.h>

 int digits_array [10] = {64,121,36,48,25,18,2,120,0,16};
 int  units = 0;
 int decimals = 0;

void increase_number(void){
        if(units < 9 ){
            if(decimals < 6){
                ++units;
                PORTD = digits_array[units];
            }
            else decimals = 0; 
        }
        else{
            units = 0;
            decimals++;
            display_set_numbers(&units);
        }
}