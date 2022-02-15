#include "main.h"
#include "pin_set.h"
#include "switch_control.h"
#include "increasing.h"
#include <avr/io.h>
#include<util/delay.h>

int main(void){

      pin_set();
      while(1){
            switch_control();
      }
}