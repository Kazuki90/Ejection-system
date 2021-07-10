#include <Servo.h>

Servo myservo;

int pos = 195;

int led_blu = 2;
int button_pin = 10;


void setup() {
  myservo.attach(1);
  myservo.write(195);
  pinMode(led_blu, OUTPUT);
  pinMode(button_pin,INPUT_PULLUP);
  
}

void loop() {
  if(digitalRead(button_pin) == LOW)
  {
      digitalWrite(led_blu, HIGH);
  {
    delay(15);
  }
  digitalWrite(led_blu, HIGH);
  {
    delay(15);
  }
 
  for(pos=195; pos>=100; pos-=1)
  {
    myservo.write(pos);
    delay(10);
  }
  for(pos = 100; pos <= 150; pos +=1)
  {
  myservo.write(pos);
  delay(10);
  }
  

}
else{
  digitalWrite(led_blu, LOW);
  myservo.write(195);
}
}
