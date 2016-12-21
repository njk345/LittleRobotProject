#include <Motor.h>
#define DC_MOTOR_PIN 3

void setup() {

}

void loop() {
  Motor motor(DC_MOTOR_PIN);
  
  /* Gradually increase motor speed to full speed */
  for (int i = 0; i < 255; i += 5 ) {
    motor.setPower(i);
    delay(10);
  }
  /* Gradually decrease motor speed to half speed */
  for (int i = 255; i > 128; i -= 5 ) {
    motor.setPower(i);
    delay(10);
  }
  /* Stop the motor */
  motor.stop();
}
