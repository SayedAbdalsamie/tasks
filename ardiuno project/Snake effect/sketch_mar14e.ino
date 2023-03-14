int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9};
int snakeLength = 4;
int snakePosition = 0;
int direction = 1;

void setup() {
  for(int i=0; i<8; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<8; i++) {
    digitalWrite(ledPin[i], LOW);
  }
  for(int i=0; i<snakeLength; i++) {
    int ledIndex = snakePosition + i;
    if(ledIndex >= 0 && ledIndex < 8) {
      digitalWrite(ledPin[ledIndex], HIGH);
    }
  }
  snakePosition += direction;
  if(snakePosition == 8-snakeLength) {
    direction = -1;
  }
  else if(snakePosition == 0) {
    direction = 1;
  }
  delay(200);
}

