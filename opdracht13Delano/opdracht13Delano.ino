/* 
Huiswerk Opdacht 13
Delano Koster 5035007

08-09-24
*/

const int analogIn0 = A0;
const int ledPin = 5;

void setup() {
  pinMode(analogIn0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(analogIn0);
  Serial.println(potValue);
  digitalWrite(ledPin, HIGH);
  delay(potValue);
  digitalWrite(ledPin, LOW);
  delay(potValue);
}
