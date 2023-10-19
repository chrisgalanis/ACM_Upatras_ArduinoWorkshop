#include "acm_traffic_lights.h"

int  pin_A_red;
int  pin_A_yellow;
int  pin_A_green;

int  pin_B_red;
int  pin_B_yellow;
int  pin_B_green;

int pin_button;
int buttonState;
int pin_Ped_green;
int pin_Ped_red;

void setup() 
{
  /* UNCOMMENT FOR STEP: 0 - 4 */
  pin_A_red = 11;
  pin_A_yellow = 12;
  pin_A_green = 13;
  
  led_pin(pin_A_red);
  led_pin(pin_A_yellow);
  led_pin(pin_A_green);
  
  /* UNCOMMENT FOR STEP: 2 */
  // pin_B_red = 7;
  // pin_B_yellow = 8;
  // pin_B_green = 9;

  // led_pin(pin_B_red);
  // led_pin(pin_B_yellow);
  // led_pin(pin_B_green);

  /* UNCOMMENT FOR STEP: 3 */
  pin_button = 6;
  buttonState = 0;

  pin_Ped_red = 7;
  pin_Ped_green = 9;
  led_pin(pin_Ped_red);
  led_pin(pin_Ped_green);
}

void loop() 
{
  /* STEP 0: 1 LED */

  led_mode( pin_A_red,1);
  led_delay(1);
  led_mode( pin_A_red,0);
  led_delay(1);

  /* STEP 1: ONE TRAFFIC LIGHT */

  //Traffic Light in Road A
  //Green Light for Cars -> Turn On for 5 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  //Red Light for Cars -> Turn On for 7 seconds
  
  led_mode(pin_A_green,1); 
  led_delay(5);
  led_mode(pin_A_green,0);
  led_mode(pin_A_yellow,1);
  led_delay(2);
  led_mode(pin_A_yellow,0);
  led_mode(pin_A_red,1);
  led_delay(7);
  led_mode(pin_A_red,0);

  /* STEP 2: TWO TRAFFIC LIGHTS */

  //Traffic Light in Road B
  //Red Light for Cars -> Turn On for 7 seconds
  //Green Light for Cars -> Turn On for 5 seconds
  //Yellow Light for Cars -> Turn On for 2 seconds
  
  //led_mode( pin_B_red,1); // Turn On Red Light
  //led_delay(7); // 7 seconds
  //led_mode( pin_B_red,0);
  //led_mode( pin_B_green,1);
  //led_delay(5);
  //led_mode( pin_B_red,0);
  //led_mode( pin_B_yellow,1);
  //led_delay(2);
  //led_mode( pin_B_yellow,0);


  /* STEP 3: TRAFFIC LIGHTS WITH BUTTON */

  led_mode(pin_A_green, 1);
  buttonState = button_delay(pin_button, 5);
  if (buttonState == 1)
  {
    led_mode(pin_A_green,0);
    led_mode(pin_A_yellow,1);
    led_delay(1);
    led_mode(pin_A_yellow,0);
    led_mode(pin_Ped_green,1);
    led_mode(pin_A_red,1);
    led_delay(7);
    led_mode(pin_A_red,0);
    led_mode(pin_Ped_green,0);
  }
  else
  {
    led_mode(pin_A_yellow,1);
    led_delay(2);
    led_mode(pin_A_yellow,0);
    led_mode(pin_A_red,1);
    led_delay(7);
    led_mode(pin_A_red,0);
  }
 
}
