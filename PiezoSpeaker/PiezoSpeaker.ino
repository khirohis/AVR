/* Arduino tutorial - Buzzer / Piezo Speaker
   More info and circuit: http://www.ardumotive.com/how-to-use-a-buzzer-en.html
   Dev: Michalis Vasilakis // Date: 9/6/2015 // www.ardumotive.com */


const int buzzer = 9; //buzzer to arduino pin 9


void setup() {
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop(){ 
  tone(buzzer, 262);
  delay(1000);
  tone(buzzer, 294);
  delay(1000);
  tone(buzzer, 330);
  delay(1000);
  tone(buzzer, 349);
  delay(1000);
  tone(buzzer, 392);
  delay(1000);
  tone(buzzer, 440);
  delay(1000);
  tone(buzzer, 494);
  delay(1000);
  tone(buzzer, 523);
  delay(1000);

  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
}
