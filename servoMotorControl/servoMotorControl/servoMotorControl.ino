#include <Servo.h>

Servo myservo;
Servo myservo2;

int pos = 0;
int pos2 = 0;
int sensorPin = 0;
int sensorVal = 0;

void setup() {
  myservo.attach(3);
  myservo2.attach(5);
  
  Serial.begin(9600);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  
  /*
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
  
  for (pos2 = 0; pos2 <= 180; pos2 += 1) {
    myservo2.write(pos2);
    delay(30);
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
    myservo.write(pos2);
    delay(30);
  }
  */
  
  delay(100); // Delay sensor read, will mess with servo delay?
}
