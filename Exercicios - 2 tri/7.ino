void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}


void loop()
{
  if (digitalRead(2)){
  Serial.println("Do");
    delay (500);
  }
  
  else if (digitalRead (3)){
   Serial.println("Re");
    delay (500);
  }
  else if (digitalRead (4)){
   Serial.println("Mi");
    delay (500);
  }
  else if (digitalRead (5)){
   Serial.println("Fa");
    delay (500);
  }
  else if (digitalRead (6)){
   Serial.println("Sol");
    delay (500);
  }
    else if (digitalRead (7)){
   Serial.println("La");
    delay (500);
    }
      else if (digitalRead (8)){
   Serial.println("Si");
    delay (500);
}
  }
