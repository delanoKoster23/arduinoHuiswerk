/*Huiswerk Opdacht 15
Delano Koster 5035007

11-09-24
*/

const int servoPin = 5;
const int sonicTrig = 11;
const int sonicEcho = 12;

long duration = 0;
int distance = 0;

void setup()
{
  pinMode(sonicTrig, OUTPUT);
  pinMode(sonicEcho, INPUT);
  pinMode(servoPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  USSensor();

  int value = map(distance, 0, 330, 0, 255);
  Serial.println(value);
  analogWrite(servoPin, value);
}


int USSensor() {
  digitalWrite(sonicTrig, LOW);
  delayMicroseconds(2);

  digitalWrite(sonicTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sonicTrig, LOW);

  duration = pulseIn(sonicEcho, HIGH);
  distance = duration * 34 / 2000;
  Serial.println(distance);
  delay(250);
  return distance;
}