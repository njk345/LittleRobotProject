#include <Ultrasonic.h>

#define trigPin 13
#define echoPin 12

void setup() {
  Serial.begin(9600);
}

void loop() {
  Ultrasonic sonar(trigPin, echoPin);

  long distance = sonar.getDistCM();
  
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
