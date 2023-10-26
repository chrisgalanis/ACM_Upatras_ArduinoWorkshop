#include <acm_traffic_lights.h>

int  pin_red = 11;
int  pin_yellow = 12;
int  pin_green = 13;

void setup() 
{
  led_pin(pin_red);
  led_pin(pin_yellow);
  led_pin(pin_green);
}

void loop() 
{
  //Traffic Light in Road A
  //Green Light for Cars -> Turn On for 5 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  //Red Light for Cars -> Turn On for 7 seconds
  
  led_mode(pin_green,1); 
  led_delay(5);
  led_mode(pin_green,0);
  led_mode(pin_yellow,1);
  led_delay(2);
  led_mode(pin_yellow,0);
  led_mode(pin_red,1);
  led_delay(7);
  led_mode(pin_red,0);
}
