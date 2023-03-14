int ledPin[] = {5, 4, 3, 2, 9, 8, 7, 6}; 
int d =500;
void setup() {
  for(int i=0; i<8; i++) {
    pinMode(ledPin[i], OUTPUT); 
  }
}

void loop() {
  for(int i=0; i<=3; i++) {
    digitalWrite(ledPin[i], HIGH); 
    digitalWrite(ledPin[7-i], HIGH); 
    delay(d); 
    digitalWrite(ledPin[i], LOW); 
    digitalWrite(ledPin[7-i], LOW); 
  }
  delay(d); 
}
