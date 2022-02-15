#ifndef ps_h
#define ps_h

#define SW_PIN_INCREASE (1<<PC0)
#define SW_PIN_DECREASE (1<<PC1)
#define SW_PIN_START_COUNTDOWN (1<<PC7)
#define SW_PIN_STOP_COUNTDOWN (1 << PA7)
#define SW_PIN_TURN_BUZ_OFF (1 << PC6)
#define BUZ_PIN (1<<PA0)
#define SEGMENT_PINS 0xff //port D
#define UNITS_PIN (1<<PB0)
#define DECIMALS_PIN (1<<PB1)

void pin_set(void);

#endif