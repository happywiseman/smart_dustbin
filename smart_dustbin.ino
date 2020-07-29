#include<Servo.h>
Servo myservo;
int pos = 0;
int sensorPin = A0;
int sensorValue = 0; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {

 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
  delay(1);       
 if(sensorValue >= 290)
 {
    myservo.write(pos+180);
    delay(300);            
  }
else
  { 
    myservo.write(pos+90);           
  }                  
  delay(100);
  }
