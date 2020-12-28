int tmpPin = A0;
int ledPin = 11;
int ledGround = 12;
int tmpIn = 0;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledGround, OUTPUT);
  digitalWrite(ledGround, LOW);
}

void loop() {
  float voltage = (analogRead(tmpIn)*(5.0/1024.0));
  float celcius = (voltage-0.5)*100;
  float fahrenheit = (celcius*9.0/5.0)+32.0;
  Serial.println(fahrenheit);

  if(fahrenheit < 70){
    digitalWrite(ledPin, HIGH);
    }
  else{
    digitalWrite(ledPin, LOW);
    }
  delay(1500);
}
