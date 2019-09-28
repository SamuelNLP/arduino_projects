#include <string.h>
#include <math.h>
using namespace std;

#define MAX_STRING_SIZE 10

// set pin numbers
const int ledYellowPin = 2;
const int ledRedPin = 7;
const int buttonPin = 4;

// led colors
const char colors[2][MAX_STRING_SIZE] = {"yellow", "red"};

// buttonState
bool buttonState = false;
int ledCycle = 0;
char ledOn[] = "yellow";

void setup() {
  Serial.begin(9600);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    ledCycle = abs(ledCycle - 1);
    strcpy(ledOn, colors[ledCycle]);
    delay(500);
  }

  if (strcmp(ledOn, "yellow")) {
    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledRedPin, LOW);
  } else {
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
  }
}
