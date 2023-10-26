const int redLED = 4;    
const int yellowLED = 3; 
const int greenLED = 2;  
const int buttonPin=10;
int buttonState=0;


void setup() 
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode (buttonPin,INPUT_PULLUP);
  
}

void loop() 
{
  digitalWrite (redLED,HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(buttonPin, LOW);
  
  
  if (digitalRead(buttonPin) == LOW) 
  {
    digitalWrite(yellowLED,HIGH);
    digitalWrite(greenLED,LOW);
    digitalWrite(redLED,LOW);
    delay(3000);
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,HIGH);
    delay(3000);
    digitalWrite(greenLED,HIGH);
    digitalWrite(redLED,LOW);
    delay(3000);
  }
  else 
  {
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    delay(3000); 
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    delay(3000); 
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED, HIGH);
    delay(3000);
  }
}
