int led = 13; 
int d = 500;  

void setup() {
  pinMode(led, OUTPUT);  
}

void loop() {
  
  digitalWrite(led, HIGH);

  delay(d); 

  digitalWrite(led, LOW); 

  delay(d);

}

