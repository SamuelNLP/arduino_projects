// set pin numbers
// digital pins
const int ledRedPin = 4;
const int ledYellowPin = 2;
const int ledGreenPin = 3;

// analog pins
const int photoResistorPin = 0;

// state
int light = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);

  digitalWrite(ledRedPin, LOW);
  digitalWrite(ledYellowPin, LOW);
  digitalWrite(ledGreenPin, LOW);
}

void loop() {
  light = analogRead(photoResistorPin);
  Serial.println(light);

  if (light < 100) {
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledGreenPin, LOW);
  } else if (light < 200) {
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
  } else {
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledGreenPin, HIGH);
  }
}
