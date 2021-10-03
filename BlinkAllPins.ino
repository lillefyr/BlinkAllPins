/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
  // initialize digital pin LED_BUILTIN as an output.
//  pinMode(LED_BUILTIN, OUTPUT);

  Serial.print("\nBlink all pins. Builtin= ");
  Serial.println(LED_BUILTIN);

  pinMode(22, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(05, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(04, OUTPUT);
  pinMode(00, OUTPUT);
  pinMode(02, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT); 
}

void blinkIt(int LED){
  
  Serial.println(LED);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);    
}

// the loop function runs over and over again forever
void loop() {                  // wait for a secondblinkIt(22);
  blinkIt(19);
  blinkIt(23);
  blinkIt(18);
  blinkIt(05);
  blinkIt(17);
  blinkIt(16);
  blinkIt(04);
  blinkIt(00);
  blinkIt(02);
  blinkIt(15);
  blinkIt(13);
  blinkIt(36);
  blinkIt(39);
  blinkIt(34);
  blinkIt(35);
  blinkIt(32);
  blinkIt(33);
  blinkIt(25);
  blinkIt(26);
  blinkIt(27);
  blinkIt(14);
  blinkIt(12);
}
