void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);  
  delay(500);
  digitalWrite(3, HIGH);  
  delay(500);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);  
  delay(500);
  digitalWrite(5, HIGH);  
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH); 
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
  
}
