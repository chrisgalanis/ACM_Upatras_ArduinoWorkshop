#include <acm_traffic_lights.h>

int  pin_Ped_red = 8;
int  pin_Ped_green = 9;

int  pin_red = 11;
int  pin_yellow = 12;
int  pin_green = 13;

int pin_button = 2;
int buttonState = 0;

void setup() 
{
  led_pin(pin_Ped_red);
  led_pin(pin_Ped_green);
  led_pin(pin_red);
  led_pin(pin_yellow);
  led_pin(pin_green);

  button_pin(pin_button);
}

void loop() 
{
  led_mode(pin_Ped_red,1);
  led_delay(1);
  led_mode(pin_green, 1);
  
  buttonState = button_delay(pin_button, 5);
  Serial.println(buttonState);
  if (buttonState == 1)
  {
    led_mode(pin_green,0);
    led_mode(pin_Ped_red,0);
    led_mode(pin_yellow,1);
    led_delay(1);
    led_mode(pin_yellow,0);
    led_mode(pin_Ped_green,1);
    led_mode(pin_red,1);
    led_delay(7);
    led_mode(pin_Ped_red,0);
    led_mode(pin_red,0);
    led_mode(pin_Ped_green,0);
  }
}