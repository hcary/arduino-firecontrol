
// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 0;     // the number of the pushbutton pin
const int buttonPin2 = 1;
const int buttonPin3 = 2;
const int buttonPin4 = 3;
const int buttonPin5 = 4;

const int ledPin1 =  5;      // the number of the LED pin
const int ledPin2 =  6;
const int ledPin3 =  7;
const int ledPin4 =  8;
const int ledPin5 =  9;

const int relayPin1 = 10;
const int relayPin2 = 11;
const int relayPin3 = 12;
const int relayPin4 = 13;

const int buttons[] = {0, 1, 2, 3, 4}
const int leds[] = {5, 6, 7, 8, 9}
const int relays[] = {10, 11, 12, 13}

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


void setup() {


  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);

   for (int i=0; i <= 4; i++){
      pinMode(buttons[i], INPUT);
      pinMode(leds[i], OUTPUT);
   }

   for (int i=0; i <= 3; i++){
      pinMode(relays[i], OUTPUT);
   }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState1 = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin);
  buttonState3 = digitalRead(buttonPin);
  buttonState4 = digitalRead(buttonPin);
  buttonState5 = digitalRead(buttonPin);

  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    if (buttonState5 == HIGH) {
      digitalWrite(relayPin1, HIGH);
    }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

   for (int i=0; i <= 4; i++){
      statusCheck(i);
   }
   
}

void statusCheck( pin ) {

  if (buttons[pin] == HIGH) {
    digitalWrite(leds[pin], HIGH);
    if (buttons[4] == HIGH) {
      digitalWrite(relays[pin], HIGH);
    }
  } else {
    for (int i=0; i <= 4; i++){
      digitalWrite(leds[i], LOW);
    }    
    
  }
    

}

