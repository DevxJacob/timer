#include "main.h"
#include "pin_set.h"
#include "switch_control.h"
#include "increasing.h"
#include <avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>


int main(void){

      pin_set();
      sei();
      while(1){
            switch_control();
      }
}
ISR(TIMER0_COMP_vect){
      
}
