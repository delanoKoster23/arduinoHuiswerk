/*Huiswerk Opdacht 14
Delano Koster 5035007

10-09-24
*/

const int analogIn0 = A0;
const int servoPin = 5;

void setup() {
  pinMode(analogIn0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(analogIn0);

  int value = map(potValue, 0, 1023, 0, 255);;
  Serial.println(value);
  analogWrite(servoPin, value);
}
