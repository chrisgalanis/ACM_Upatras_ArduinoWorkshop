
#ifndef ACM_TRAFFIC_LIGHTS_H
# define ACM_TRAFFIC_LIGHTS_H

    void led_pin(int pin_num);
    void led_mode(int pin_num, int mode);
    void led_delay(int delay_time);

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

  int button_delay(int pin_button, int delay_time)
  {
    int buttonState = 0;

    for(int i=0; i<5; i++)
    {
      delay(delay_time * 1000);
      buttonState = digitalRead(pin_button);

      if (buttonState == 1)
        return (buttonState);
    }
    return (0);
  }
# endif
