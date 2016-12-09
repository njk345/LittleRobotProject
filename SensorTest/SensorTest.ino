int sensorPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int IRVal = analogRead(sensorPin);
  Serial.println(IRVal);
  delay(100);
}
