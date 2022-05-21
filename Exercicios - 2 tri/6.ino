void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(2)){
  Serial.println("Bom Dia");
    delay (500);
  }
  
  else if (digitalRead (3)){
   Serial.println("Boa Tarde");
    delay (500);
  }
  else if (digitalRead (4)){
   Serial.println("Boa Noite");
    delay (500);
  }
  else if (digitalRead (5)){
   Serial.println("Tudo Bem?");
    delay (500);
  }
  else if (digitalRead (6)){
   Serial.println("Oi");
    delay (500);
  }
}