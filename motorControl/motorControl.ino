#define DC_MOTOR_PIN 3

void setup() {
  /* Initialize DC motor control pin as digital output */
  pinMode( DC_MOTOR_PIN, OUTPUT );
}

void loop() {
  /* Gradually increase motor speed to full speed */
  for( int i = 0; i < 255; i+5 )
    analogWrite( DC_MOTOR_PIN, i );
  /* Gradually decrease motor speed to half speed */
  for( int i = 255; i > 128; i-5 )
    analogWrite( DC_MOTOR_PIN, i );
  /* Stop the motor */
  analogWrite( DC_MOTOR_PIN, 0 );  
  /* Do nothing */
  while( 1 );
}
