#include "DigiKeyboard.h"

#define KEY_TAB 43

int tab = 1; //Initialize at tab 1

void setup() {
  // Initialize the LED pin as input
  pinMode(0, INPUT);
}

void loop() {

  if (digitalRead(0) == HIGH) {
    // this is generally not necessary but with some older systems it seems to
    // prevent missing the first character after a delay:
    DigiKeyboard.sendKeyStroke(0);

    DigiKeyboard.sendKeyStroke( KEY_TAB, MOD_CONTROL_LEFT );
  }
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(125);

}

