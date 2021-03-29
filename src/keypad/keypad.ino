/*
[1][2][3]
[4][5][6]
[7][8][9]

*/

void setup()
{

  Serial.begin(9600); //This pipes to the serial monitor
  Serial.println("Initialize Serial Monitor");

  for (int i=2; i < 11 ;i++) {
  pinMode(i, INPUT);  // Set the button as an input
  digitalWrite(i, HIGH);  // Pull the button high
  }

}

void loop()
{

  for (int i=2; i < 11; i++) {
  if ( digitalRead(i) == LOW) {
  Serial.println(i);  // Print "Hello World" to the Serial Monitor
  //Serial1.println("Button Press:" + i);  // Print "Hello!" over hardware UART
  }
  }
 
}

