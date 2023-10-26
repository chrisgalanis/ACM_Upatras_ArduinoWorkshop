#include <acm_traffic_lights.h>

int pin_button = 2;
int buttonState = 0;
void setup() {
   Serial.begin(9600); // Serial Monitor gets 9600 bits per second 
   button_pin(pin_button);
   led_pin(13);

}

void loop() {
  buttonState = button_delay(pin_button, 1);
  Serial.println(buttonState);

  if(buttonState == 1){
    led_mode(13,1);
    led_delay(1);
    led_mode(13,0);
  }   

}
