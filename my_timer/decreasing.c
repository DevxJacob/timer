#include "decreasing.h"
#include "increasing.h"
#include "pin_set.h"
#include "display_set_numbers.h"
#include <avr/io.h>

void decrease_number(void){
    if (units > 0 ){
        --units;
        display_set_numbers(&units);
    }
    else if( decimals > 0 ){
        --decimals;
        units = 9;
        display_set_numbers(&units);
    }
    else if(units == 0 && decimals == 0){
        units = 0;
        decimals = 6;
        display_set_numbers(&units);
    }
}