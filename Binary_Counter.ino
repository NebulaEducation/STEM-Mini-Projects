int button = 3;
int blue = 4;
int yellow = 5;
int orange = 6;
int red = 7;
int counter = 0;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  val = digitalRead(button);
  if(val == LOW){
    if(counter < 15){
      counter++;
      delay(500);
      if(counter == 0){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, LOW);
          digitalWrite(red, LOW);
        }
      if(counter == 1){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, LOW);
          digitalWrite(red, LOW);
        }
        if(counter == 2){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, LOW);
          digitalWrite(red, LOW);
        }
        if(counter == 3){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, LOW);
          digitalWrite(red, LOW);
        }
        if(counter == 4){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, HIGH);
          digitalWrite(red, LOW);
        }
        if(counter == 5){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, HIGH);
          digitalWrite(red, LOW);
        }
        if(counter == 6){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, HIGH);
          digitalWrite(red, LOW);
        }
        if(counter == 7){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, HIGH);
          digitalWrite(red, LOW);
        }
        if(counter == 8){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, LOW);
          digitalWrite(red, HIGH);
        }
        if(counter == 9){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, LOW);
          digitalWrite(red, HIGH);
        }
        if(counter == 10){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, LOW);
          digitalWrite(red, HIGH);
        }
        if(counter == 11){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, LOW);
          digitalWrite(red, HIGH);
        }
        if(counter == 12){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, HIGH);
          digitalWrite(red, HIGH);
        }
        if(counter == 13){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, LOW);
          digitalWrite(orange, HIGH);
          digitalWrite(red, HIGH);
        }
        if(counter == 14){
          digitalWrite(blue, LOW);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, HIGH);
          digitalWrite(red, HIGH);
        }
        if(counter == 15){
          digitalWrite(blue, HIGH);
          digitalWrite(yellow, HIGH);
          digitalWrite(orange, HIGH);
          digitalWrite(red, HIGH);
        }
      }
   else{
      counter = -1;
    }
       }
}
