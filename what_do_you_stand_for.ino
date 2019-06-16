/*
 * What Do You Stand For? Patch
 * By Shannon Cherpak
 * 
 * This sketch turns three LEDs on or off based on the state of a switch. This is the code
 * used in the example video. 
 * 
 */
 
int led2 = 5;
int button = A5;
int buttonState;

void setup() {
  // put your setup code here, to run once:
  //LEDs
  pinMode(led2, OUTPUT);

  //push button
  pinMode(button, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read the button
  buttonState = digitalRead(button);
  
  //check to see if button is pressed
  if (buttonState == LOW) {

    //if pressed, turn on LED
    digitalWrite(led2, HIGH);
    Serial.println("The LED is on!");
  }
  else {

    // if not pressed, turn off LED
    digitalWrite(led2, LOW);
  
    Serial.println("The LED is on!");
  }
}
