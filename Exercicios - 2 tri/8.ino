void setup()
{
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}


void loop()
{
  if (digitalRead(11)){
    
  digitalWrite(0, HIGH);
  delay(100); 
    digitalWrite(2, HIGH);
  delay(100); 
    digitalWrite(3, HIGH);
  delay(100); 
    digitalWrite(4, HIGH);
  delay(100); 
    digitalWrite(5, HIGH);
  delay(100); 
    digitalWrite(6, HIGH);
  delay(100); 
    digitalWrite(7, HIGH);
  delay(100); 
    digitalWrite(8, HIGH);
  delay(100); 
    digitalWrite(9, HIGH);
  delay(100); 
    digitalWrite(10, HIGH);
  delay(100); 
    digitalWrite(0, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  delay(100); 
  }
  
  else if (digitalRead (12)){
    
   digitalWrite(0, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
  delay(300);
    digitalWrite(0, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    delay(300);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    delay (300);
    digitalWrite(0, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
  delay(300);
    digitalWrite(0, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    delay(300);
  }
  
  
  else if (digitalRead (13)){
  digitalWrite(0, HIGH);
  delay(100); 
    digitalWrite(2, HIGH);
  delay(100); 
    digitalWrite(3, HIGH);
  delay(100); 
    digitalWrite(4, HIGH);
  delay(100); 
    digitalWrite(5, HIGH);
  delay(100); 
    digitalWrite(6, HIGH);
  delay(100); 
    digitalWrite(7, HIGH);
  delay(100); 
    digitalWrite(8, HIGH);
  delay(100); 
    digitalWrite(9, HIGH);
  delay(100); 
    digitalWrite(10, HIGH);
  delay(100);
     digitalWrite(10, LOW);
     delay(100);
    digitalWrite(9, LOW);
  delay(100); 
    digitalWrite(8, LOW);
  delay(100); 
    digitalWrite(7, LOW);
  delay(100); 
    digitalWrite(6, LOW);
  delay(100); 
    digitalWrite(5, LOW);
  delay(100); 
    digitalWrite(4, LOW);
  delay(100); 
    digitalWrite(3, LOW);
  delay(100); 
    digitalWrite(2, LOW);
  delay(100); 
    digitalWrite(0, LOW);
  delay(100); 
      digitalWrite(0,HIGH);
  delay(100); 
    digitalWrite(2, HIGH);
  delay(100); 
    digitalWrite(3, HIGH);
  delay(100); 
    digitalWrite(4, HIGH);
  delay(100); 
    digitalWrite(5, HIGH);
  delay(100); 
    digitalWrite(6, HIGH);
  delay(100); 
    digitalWrite(7, HIGH);
  delay(100); 
    digitalWrite(8, HIGH);
  delay(100); 
    digitalWrite(9, HIGH);
  delay(100); 
    digitalWrite(10, HIGH);
  delay(100); 
         digitalWrite(10, LOW);
     delay(100);
    digitalWrite(9, LOW);
  delay(100); 
    digitalWrite(8, LOW);
  delay(100); 
    digitalWrite(7, LOW);
  delay(100); 
    digitalWrite(6, LOW);
  delay(100); 
    digitalWrite(5, LOW);
  delay(100); 
    digitalWrite(4, LOW);
  delay(100); 
    digitalWrite(3, LOW);
  delay(100); 
    digitalWrite(2, LOW);
  delay(100); 
    digitalWrite(0, LOW);
  delay(100); 
  }
  
}