/*Huiswerk Opdacht 15
Delano Koster 5035007

11-09-24
*/

#include <DistanceSensor.h>

const int servoPin = 5;
const int sonicTrig = 11;
const int sonicEcho = 12;

int distance = 0;

DistanceSensor USSensor(sonicTrig, sonicEcho);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int distance = USSensor.getCM();

  Serial.print(distance);

  int value = map(distance, 0, 330, 0, 255);
  Serial.println(value);
  analogWrite(servoPin, value);
}

