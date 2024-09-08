/* 
Huiswerk Opdacht 11
Delano Koster 5035007

08-09-24
*/

bool done = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if (done == false) {  // makes sure this function only runs once
    for (int i = 0; i < 100; i++) {
      if (i % 2 == 0) { // checks if i is even
        delay(50);  // makes sure the text is readable
        Serial.print(i);
        Serial.println(" i is even");
      } else {
        delay(50);
        Serial.print(i);
        Serial.println(" i is oneven");
      }
      done = true;
    }
  }
}
