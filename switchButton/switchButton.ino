#define ledPin 3
#define buttonPin 2

int ledState=LOW;
int buttonState;
int previousButtonState=LOW;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
}

void loop(){
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH && previousButtonState==LOW){
    ledState= !ledState;
    digitalWrite(ledPin,ledState);}
  previousButtonState=buttonState;
  delay(10);}

