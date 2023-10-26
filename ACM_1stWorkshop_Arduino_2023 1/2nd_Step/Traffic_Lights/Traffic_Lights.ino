#include <acm_traffic_lights.h>

int pin_red = /*pin_number*/;
/* pin_green */
/* pin_yellow */

void setup() {
  led_pin(pin_red);
  /* PIN of green in Arduino Board */
  /* PIN of yellow in Arduino Board */
}

void loop() {
 
  //Traffic Light in Road A
  //Green Light for Cars -> Turn On for 5 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  //Red Light for Cars -> Turn On for 7 seconds
  led_mode(pin_red,/*0 or 1*/);
  led_delay(/*time in seconds*/);
  led_mode(pin_red,/*0 or 1*/);
  led_delay(/*time in seconds*/);

  /*
    MODE for Green LED
    MODE for Yellow LED
  */
}
