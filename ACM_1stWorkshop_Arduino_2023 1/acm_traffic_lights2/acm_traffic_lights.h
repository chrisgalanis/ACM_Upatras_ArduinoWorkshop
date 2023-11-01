
#ifndef ACM_TRAFFIC_LIGHTS_H
# define ACM_TRAFFIC_LIGHTS_H
# include "Arduino.h"
    void led_pin(int pin_num);
    void led_mode(int pin_num, int mode);
    void led_delay(int delay_time);
    int button_delay(int pin_button, int delay_time);
    void button_pin(int pin_num);

    void ultrasonic_output_pin(int trigpin);
    void ultrasonic_input_pin(int echopin);
    int  ultrasonic_delay_time(int trigpin, int echopin, int delay_time);
    //LED METHODS
    void led_pin(int pin_num)
    {
     pinMode(pin_num,OUTPUT);
    }
    //Even though the syntax is the same 
    //I am creating a new function which more suitable for the project
    // and begginer friendly
    void led_mode(int pin_num,int mode)
    {
      digitalWrite(pin_num, mode);
    }
    //Delay Time in Arduino by default is in milliseconds (ms)
    //I am making a delay function in seconds
    void led_delay(int delay_time)
    {
      delay(delay_time * 1000);
    }

    //BUTTON Methods
    void button_pin(int pin_num)
    {
      pinMode(pin_num,INPUT);
    }
    int button_delay(int pin_button, int delay_time)
    {
      int buttonState = 0;
      for(int i=0; i< delay_time * 100; i++)
      {
        delay(100);
        buttonState = digitalRead(pin_button);
        Serial.println(buttonState);
        if (buttonState == 1)
          return (buttonState);
      }
      return (0);
   }
   
   // ULTRASONIC Methods
   void ultrasonic_input_pin(int echopin)
   {
      pinMode(echopin,INPUT);
   }
   void ultrasonic_output_pin(int trigpin)
   {
      pinMode(trigpin,OUTPUT);
   }
   int  ultrasonic_delay_time(int trigpin, int echopin, int delay_time)
   {
      long duration;
      int distance;
      
      digitalWrite(trigpin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigpin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigpin, LOW);
    
      // Read the echo
      duration = pulseIn(echopin, HIGH);
      
      // Calculate the distance
      distance = duration * 0.034 / 2; // Speed of sound = 0.034 cm/μs

      // Print the distance
      Serial.print("Distance: ");
      Serial.print(distance);
      Serial.println(" cm");
      
      delay(delay_time * 1000); // Delay for a moment
      return (distance); 
   }
# endif
