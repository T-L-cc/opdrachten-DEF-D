// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin
const int ledPin = 13;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status
bool state = LOW; // variable for checking if this is a new push on the button 

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(A0);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH){
      Serial.println(sensorValue);
      digitalWrite(13,HIGH);
      delay(2000);
      digitalWrite(13,LOW); 
    }
    delay(150);
}