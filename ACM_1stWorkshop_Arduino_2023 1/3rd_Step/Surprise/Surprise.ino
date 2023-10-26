#include <acm_traffic_lights.h>
#include "Surprise.h";
int pin_button = 2;
int buttonState = 0;

void setup() {
   SerialSetup();
   button_pin(pin_button);
}



void loop() {
  buttonState = button_delay(pin_button, 1);
  Serial.println(buttonState);
  if(buttonState == 1)
  {
    while(true){
    led_on();
    }
  }
}
