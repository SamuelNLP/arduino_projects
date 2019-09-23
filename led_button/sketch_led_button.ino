// set pin numbers
const int ledPin = 2;
const int buttonPin = 4;

// buttonState
bool buttonState = false;
bool buttonCycle = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    buttonCycle = !buttonCycle;
    delay(500);
  }

  if (buttonCycle == true) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
