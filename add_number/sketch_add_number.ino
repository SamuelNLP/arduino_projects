// set pin numbers of letters in anode digital tube
const int ledA = 4, ledB = 7, ledC = 8, ledD = 9, ledE = 10, ledF = 5, ledG = 6;
const int buttonPin = 3;

// initial number to display
int numberState = 0;
bool buttonState = false;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

  // set all pin letters
  for (int ledLetter = 4; ledLetter < 11; ledLetter++) {
    pinMode(ledLetter, OUTPUT);
  }

  reset();
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // if button is pressed change number
  if (buttonState == HIGH) {
    if (numberState == 9) {
      numberState = 0;
    } else {
      numberState++;
    }
    delay(500);

    lightNumber(numberState);
  }
}

// turn off all led letters
// NOTE: HIGH here means off
void reset() {
    for (int ledLetter = 4; ledLetter < 11; ledLetter++) {
    digitalWrite(ledLetter, HIGH);
  }
}

// switch to call appropriate number function
void lightNumber(int number) {
  switch (number) {
  case 0:
    zero();
    break;
  case 1:
    one();
    break;
  case 2:
    two();
    break;
  case 3:
    three();
    break;
  case 4:
    four();
    break;
  case 5:
    five();
    break;
  case 6:
    six();
    break;
  case 7:
    seven();
    break;
  case 8:
    eight();
    break;
  case 9:
    nine();
    break;
  default:
    reset();
  }
}

// number mapping functions from 0 to 9
void zero() {
  reset();

  int leds[] = {ledA, ledB, ledC, ledD, ledE, ledF};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void one() {
  reset();

  int leds[] = {ledB, ledC};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void two() {
  reset();

  int leds[] = {ledA, ledB, ledD, ledE, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void three() {
  reset();

  int leds[] = {ledA, ledB, ledC, ledD, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void four() {
  reset();

  int leds[] = {ledB, ledC, ledF, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void five() {
  reset();

  int leds[] = {ledA, ledC, ledD, ledF, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void six() {
  reset();

  int leds[] = {ledA, ledC, ledD, ledE, ledF, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void seven() {
  reset();

  int leds[] = {ledA, ledB, ledC};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void eight() {
  reset();

  int leds[] = {ledA, ledB, ledC, ledD, ledE, ledF, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

void nine() {
  reset();

  int leds[] = {ledA, ledB, ledC, ledF, ledG};
  int length = sizeof(leds) / sizeof(int);

  for (int index = 0; index < length; index++) {
    digitalWrite(leds[index], LOW);
  }
}

