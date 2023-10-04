#include "acm_traffic_lights.h"

traffic_light A;
traffic_light B;
  
void setup() 
{
  A.pin_red = 13;
  A.pin_yellow = 12;
  A.pin_green = 11;
  
  B.pin_red = 13;
  B.pin_yellow = 12;
  B.pin_green = 11;
 
 led_pin(A.pin_red);
 led_pin(A.pin_yellow);
 led_pin(A.pin_green);
 
}

void loop() 
{
  //Traffic Light in Road A
  //Green Light for Cars -> Turn On for 5 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  //Red Light for Cars -> Turn On for 7 seconds
  
  led_mode(A.pin_green,1); // Turn On Green Light
  led_delay(5); // 5 seconds
  led_mode(A.pin_green,0);
  led_mode(A.pin_yellow,1);
  led_delay(2);
  led_mode(A.pin_yellow,0);
  led_mode(A.pin_red,1);
  led_delay(7);
  led_mode(A.pin_red,0);


  //Traffic Light in Road B
  //Red Light for Cars -> Turn On for 7 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  //Yellow Light for Cars -> Turn On for 7 seconds
  
  led_mode(B.pin_red,1); // Turn On Green Light
  led_delay(7); // 7 seconds
  led_mode(B.pin_red,0);
  led_mode(B.pin_green,1);
  led_delay(5);
  led_mode(B.pin_red,0);
  led_mode(B.pin_yellow,1);
  led_delay(2);
  led_mode(B.pin_yellow,0);
}
