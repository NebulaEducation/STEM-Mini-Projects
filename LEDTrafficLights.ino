/* 
LED Traffic Lights project
Nebula Education 2021
https://www.nebulaed.com
Nolan Tremelling
*/

int green = 2;  //green LED in digital pin 2
int yellow = 6; //yellow LED in digital pin 6
int red = 10;   //red LED in digital pin 10

void setup(){
  pinMode(green, OUTPUT);   //declares green pin as output
  pinMode(yellow, OUTPUT);  //declares yellow pin as output
  pinMode(red, OUTPUT);     //declares red pin as output
}

void loop(){
  digitalWrite(green, HIGH);  //turns green LED on
  digitalWrite(yellow, LOW); //turns yellow LED off
  digitalWrite(red, LOW);    //turns red LED off
  delay(2000);    //keeps light on for 2 seconds
  digitalWrite(green, LOW);  //turns green LED off
  digitalWrite(yellow, HIGH); //turns yellow LED on
  digitalWrite(red, LOW);    //turns red LED off
  delay(2000);    //keeps light on for 2 seconds
  digitalWrite(green, LOW);  //turns green LED off
  digitalWrite(yellow, LOW); //turns yellow LED off
  digitalWrite(red, HIGH);    //turns red LED on
  delay(2000);    //keeps light on for 2 seconds
}
