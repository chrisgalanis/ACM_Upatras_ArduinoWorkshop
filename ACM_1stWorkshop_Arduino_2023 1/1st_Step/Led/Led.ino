#include <acm_traffic_lights.h>

int pin_red = 13;

void setup() {
  led_pin(pin_red);

}

void loop() {
  led_mode(pin_red,1);
  led_delay(1);
  led_mode(pin_red,0);
  led_delay(1);
}
