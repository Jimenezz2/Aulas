const int botao = 2;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

int var;

void loop()
{ 
  digitalWrite (3, HIGH);
  var = digitalRead(botao);
  if (var){
    digitalWrite (3, LOW);
    delay (2000);
  }
  }