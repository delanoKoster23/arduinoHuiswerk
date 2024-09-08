// Huiswerk Opdacht 10
// Delano Koster 5035007

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;

// sets te speed at which the leds swoop, lower is faster.
int delayLed = 150;

void setup() {
  // set pin 8/13 to output.
  DDRB = 0x3E;

  // start serial
  Serial.begin(9600);
}

void loop() {
  opdrachtB();
}

// function that makes leds swoop from pin 8 to 13. Use of digitalWrite.
void opdrachtA() {
  digitalWrite(led1, HIGH);
  delay(delayLed);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(delayLed);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(delayLed);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(delayLed);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
  delay(delayLed);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
  delay(delayLed);
  digitalWrite(led6, LOW);
}

// function that makes leds swoop from pin 8 to 13. Use of DDRB and hexadecimals
void opdrachtB() {
  PORTB = 0x000001;
  delay(delayLed);
  PORTB = 0x00;

  PORTB = 0x2;
  delay(delayLed);
  PORTB = 0x00;

  PORTB = 0x4;
  delay(delayLed);
  PORTB = 0x00;

  PORTB = 0x8;
  delay(delayLed);
  PORTB = 0x00;

  PORTB = 0x10;
  delay(delayLed);
  PORTB = 0x00;

  PORTB = 0x20;
  delay(delayLed);
  PORTB = 0x00;
}
