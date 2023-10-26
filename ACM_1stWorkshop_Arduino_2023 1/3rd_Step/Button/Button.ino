#include <acm_traffic_lights.h>

int pin_button = /*Pin Number*/;
int buttonState = 0;

void setup() {
   Serial.begin(9600); // Serial Monitor gets 9600 bits per second 
   button_pin(/* PIN on Arduino Board*/);

}

void loop() {
  buttonState = button_delay(/*PIN on Arduino Board*/, /* delay in seconds */);
  Serial.println(buttonState);
  
}
