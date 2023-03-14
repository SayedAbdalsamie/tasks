int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int direction = 1; 

void setup() {
  for(int i=0; i<8; i++) {
    pinMode(ledPin[i], OUTPUT); 
  }
}

void loop() {
  for(int i=0; i<8; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(100); 
    digitalWrite(ledPin[i], LOW); 
  }
  if(direction == 1) { 
    for(int i=7; i>=0; i--) {
      digitalWrite(ledPin[i], HIGH); 
      delay(100); 
      digitalWrite(ledPin[i], LOW); 
    }
    direction = -1; 
  }
  else { 
    for(int i=0; i<8; i++) {
      digitalWrite(ledPin[i], HIGH); 
      delay(100);
      digitalWrite(ledPin[i], LOW); 
    }
    direction = 1; 
  }
  delay(500);
}

