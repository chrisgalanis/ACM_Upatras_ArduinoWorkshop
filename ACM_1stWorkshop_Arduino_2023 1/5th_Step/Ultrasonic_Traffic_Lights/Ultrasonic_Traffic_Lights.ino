#include <acm_traffic_lights.h>

int  pin_Ped_red = 8;
int  pin_Ped_green = 9;

int  pin_red = 11;
int  pin_yellow = 12;
int  pin_green = 13;

int trig_pin = 7;
int echo_pin = 6;


void setup() {
  Serial.begin(9600); // Initialize serial communication

  ultrasonic_input_pin(echo_pin);
  ultrasonic_output_pin(trig_pin);
}

void loop() {
  led_mode(pin_Ped_red,1);
  led_delay(1);
  led_mode(pin_green, 1);

  int distance = ultrasonic_delay_time(trig_pin,echo_pin,1);
  Serial.println(distance);
  if (distance <= 10)
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
