int led[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int d = 500;
void setup() {
  for(int i=0; i<8; i++) {
    pinMode(led[i], OUTPUT); 
  }
}

void loop() {
  for(int i=0; i<=3; i++) {
    digitalWrite(led[i], HIGH); 
    digitalWrite(led[7-i], HIGH); 
    delay(d);  
    digitalWrite(led[i], LOW); 
    digitalWrite(led[7-i], LOW); 
  }
  delay(d); 
}

