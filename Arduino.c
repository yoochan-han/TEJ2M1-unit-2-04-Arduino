/*
  blink program with breadboard

  created on Feb 2025
  by yoochan Han
*/

int blinkTime = 1000; //set variable to 1000
int PIN_11 = 11;
int PIN_12 = 12;
int PIN_13 = 13;

void setup()
{
  pinMode(PIN_11, OUTPUT);
  pinMode(PIN_12, OUTPUT);
  pinMode(PIN_13, OUTPUT);
}

void loop()
{ 
  //red, green, blue, then red-green, green-blue, blue-red and finally red-green-blue
  digitalWrite(PIN_11, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, LOW);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, LOW);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, LOW);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, HIGH);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, LOW);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, HIGH);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, HIGH);
  delay(1000); // Wait for a second
  digitalWrite(PIN_11, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, HIGH);
  delay(1000); // Wait for a second
}
