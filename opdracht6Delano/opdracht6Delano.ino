/*
  Huiswerk Opdacht 6
  Delano Koster 5035007

*/

int ledRed = 11;
int ledYel = 12;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize leds as an output.
  pinMode(ledRed, OUTPUT);
  pinMode(ledYel, OUTPUT);

  //initialize serial.
  Serial.begin(9600);

  digitalWrite(LED_BUILTIN, LOW);

}

void loop() {
  opdrachtC();
}


// function to make leds alternate
void opdrachtB () {
  digitalWrite(ledRed, HIGH);
  delay(500);
  digitalWrite(ledRed, LOW);
  
  digitalWrite(ledYel, HIGH);
  delay(500);
  digitalWrite(ledYel, LOW);
}


// function to make leds alternate faster
void opdrachtC () {
  digitalWrite(ledRed, HIGH);
  delay(250);
  digitalWrite(ledRed, LOW);
  
  digitalWrite(ledYel, HIGH);
  delay(250);
  digitalWrite(ledYel, LOW);
}


// function to make red led blink 4 times in one second, and yellow led 2 times in one second
void opdrachtD () {
  digitalWrite(ledRed, HIGH);
  delay(125);
  digitalWrite(ledRed, LOW);
  delay(125);

  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYel, HIGH);
  delay(125);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYel, LOW);
  delay(125);
}