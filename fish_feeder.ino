const int motorPin = 12;
const int buttonPin = 9;
const int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonValue = digitalRead(buttonPin);
  if (buttonValue == LOW){
    digitalWrite(13, HIGH);
  // delay(1000);
  } else {
  digitalWrite(13, LOW);
  // delay(1000);  
  }
  
}
