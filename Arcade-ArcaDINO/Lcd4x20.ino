#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

#define BotA 2
#define BotB 3
#define BotC 4
#define BotD 5

int nQuestao = 10;
int array[10];
  
byte dinoR[8] = {
  B00000,
  B00111,
  B00111,
  B10110,
  B11111,
  B01010,
  B01010,
  B00000,
};

byte dinoAgachadoR[8] = {
  B00000,
  B00000,
  B00111,
  B00111,
  B10110,
  B11111,
  B01010,
  B00000,
};

byte dinoL[8] = {
  B00000,
  B11100,
  B11100,
  B01101,
  B11111,
  B01010,
  B01010,
  B00000,
};


byte dinoAgachadoL[8] = {
  B00000,
  B00000,
  B11100,
  B11100,
  B01101,
  B11111,
  B01010,
  B00000,
};

byte dinoDeitado1[8] = {
  B00010,
  B00001,
  B00010,
  B00001,
  B00000,
  B01011,
  B11111,
  B00000,
};

byte dinoDeitado2[8] = {
  B00001,
  B00010,
  B00001,
  B00010,
  B00000,
  B01011,
  B11111,
  B00000,
};

byte olho [8] = {
  B00000,
  B00000,
  B00000,
  B01110,
  B11100,
  B11111,
  B11111,
  B01110,
};
byte boca [8] = {
  B00000,
  B10001,
  B01010,
  B00100,
  B00000,
  B00000,
  B00000,
  B00000,
};
  
byte pisca [8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
};

void setup(){
  pinMode(BotA, INPUT);
  pinMode(BotB, INPUT);
  pinMode(BotC, INPUT);
  pinMode(BotD, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  lcd.begin(20, 4);
  lcd.createChar(6, olho);
  lcd.createChar(7, boca);
  lcd.createChar(8, pisca);
  lcd.clear();
  piscada();
  delay (2000);
  piscada();
  delay (2000);
  lcd.clear();
  lcd.setCursor(3,1); 
  lcd.print("Seja Bem Vindo");
  lcd.setCursor(4,2); 
  lcd.print ("ao arcaDINO");
  delay (4000);
  lcd.clear();
  lcd.setCursor(3,1); 
  lcd.print("Acerte e avance");
  lcd.setCursor(7,2); 
  lcd.print ("no jogo");
  delay (4000);
  lcd.clear();
  lcd.setCursor(5,1);
  lcd.print("Boa sorte!");
  delay (2000);  
  lcd.clear();
  Serial.begin(9600);
  lcd.createChar(0, dinoR); 
  lcd.createChar(1, dinoAgachadoR);
  lcd.createChar(2, dinoL); 
  lcd.createChar(3, dinoAgachadoL);
  lcd.createChar(4, dinoDeitado1);
  lcd.createChar(5, dinoDeitado2);
  geraSequencia();
}

void piscada(){
      led();
      lcd.setCursor(7,1);
      lcd.write(byte(6));
      lcd.setCursor(12,1);
      lcd.write(byte(6));
      lcd.setCursor(8,2);
      lcd.write(byte(7));
      lcd.setCursor(9,2);
      lcd.write(byte(7));
      led();
      lcd.setCursor(10,2);
      lcd.write(byte(7));
      lcd.setCursor(11,2);
      lcd.write(byte(7));
      delay (2000);
      lcd.setCursor(7,1);
      lcd.write(byte(8));
      lcd.setCursor(12,1);
      lcd.write(byte(8));
}

void correto(){
   lcd.clear();
          lcd.setCursor(4,0);
          lcd.print("Correto!");
        lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(1));
          lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(1)); 
          lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          lcd.setCursor(8,1);
          lcd.write(byte(3));
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          lcd.setCursor(8,1);
          lcd.write(byte(3)); 
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(1));
          lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(1)); 
          lcd.setCursor(8,1);
          lcd.write(byte(0));
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          lcd.setCursor(8,1);
          lcd.write(byte(3));
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          lcd.setCursor(8,1);
          lcd.write(byte(3)); 
          lcd.setCursor(8,1);
          lcd.write(byte(2));
          delay (500);
}
  
void errado(){
   lcd.clear();
          lcd.setCursor(5,0);
          lcd.print("Errado!");
          lcd.setCursor(8,1);
          lcd.write(byte(4));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(5));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(4));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(5));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(4));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(5));
          delay (500);
          lcd.setCursor(8,1);
          lcd.write(byte(4));
          delay (1000);
}

void led(){
  digitalWrite(8, HIGH);
  delay (500);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay (500);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay (500);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay (500);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay (500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay (500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay (500);
  digitalWrite(8, LOW);
}
      
void loop(){
  for (int i = 0; i < nQuestao; i++){
      SelecionaQuestao(array[i]);
  }
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fim de Jogo!");
  
  delay(2000);
}

void SelecionaQuestao(int nQuestao){
  
 //Qiímica
  switch(nQuestao){
    case 0:
        lcd.clear();
           lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 1");
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("Qual o elemento");
          lcd.setCursor(5,1);
          lcd.print("[Hg]?");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-Mercurio");
          lcd.setCursor(0,1);
          lcd.print ("B-Ouro");
          delay (500);
          lcd.clear ();
          lcd.setCursor(0,0);
          lcd.print ("C-Magnesio");
          lcd.setCursor(0,1);
          lcd.print ("D-Cobre");
        if(AnalisaBotao()=='A'){
          correto();
        }else{
         errado();
        }
    break;
    case 1:
          lcd.clear();
           lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 2");
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("Qual a montanha");
          lcd.setCursor(0,1);
          lcd.print("mais alta do BR?");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-Pão de Açucar");
          lcd.setCursor(0,1);
          lcd.print ("B-Pico do Jaragua");
          delay (500);
          lcd.clear ();
          lcd.setCursor(0,0);
          lcd.print ("C-Pico da Neblina");
          lcd.setCursor(0,1);
          lcd.print ("D-Pico da Bandeira");
        if(AnalisaBotao()=='C'){
          correto();
        }else{
         errado();
        }
    break;
    
    //História
    case 2:
        lcd.clear();
           lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 3");
          lcd.clear();
          lcd.setCursor(1,0);
          lcd.print ("Quem escreveu");
          lcd.setCursor(1,1);
          lcd.print("a obra Hamlet?");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-Virginia Woolf");
          lcd.setCursor(0,1);
          lcd.print ("B-Edgar Alan Poe");
          delay (500);
          lcd.clear ();
          lcd.setCursor(0,0);
          lcd.print ("C-Shakespeare");
          lcd.setCursor(0,1);
          lcd.print ("D-Jane Austen");
        if(AnalisaBotao()=='B'){
          correto();
        }else{
         errado();
        }
    break;
        //Inglês
    case 3:
         lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 4");
          lcd.clear();
          lcd.setCursor(2,0);
    lcd.print ("[Peacock] em");
          lcd.setCursor(2,1);
          lcd.print ("portugues:");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-Ampulheta");
          lcd.setCursor(2,1);
          lcd.print ("B-Abutre");
          delay (500);
          lcd.clear ();
          lcd.setCursor(0,0);
          lcd.print ("C-Papagaio");
          lcd.setCursor(2,1);
          lcd.print ("D-Pavao");
        if(AnalisaBotao()=='D'){
          correto();
        }else{
         errado();
        }
    break;
    
    //Matemática
    case 4:
        lcd.clear();
           lcd.clear();
          lcd.setCursor(0,0);
    lcd.print("Questao 5");
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("(3X14+154-161)X0");
          lcd.setCursor(3,1);
          lcd.print("e igual a:");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-0        B-504");
          lcd.setCursor(0,1);
          delay (500);
          lcd.setCursor(0,1);
          lcd.print ("C-614      D-146");
        if(AnalisaBotao()=='A'){
          correto();
        }else{
         errado();
        }
    break;
    case 5:
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 6");
          lcd.clear();
          lcd.setCursor(4,0);
          lcd.print("15 X 5 =");
          lcd.clear();
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("  A-30    B-45");
          lcd.setCursor(0,1);
          lcd.print ("  C-60    D-75");
          if(AnalisaBotao()=='D'){
          correto();
          }else{
          lcd.clear();
          errado();
        }
    break;
    
    //Geografia
    case 6:
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 7");
          lcd.clear();
          lcd.setCursor(2,0);         
          lcd.print("Qual o menor");
          lcd.setCursor(1,1); 
          lcd.print("pais do mundo?");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-India");
          lcd.setCursor(2,1);
          lcd.print ("B-Brasil");
          delay(500);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("C-Vaticano");
          lcd.setCursor(0,1);
          lcd.print ("D-Escocia");
        if(AnalisaBotao()=='C'){
          correto();
        }else{
          errado();
        }
    break;
    
    case 7:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Questao 8");
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("Manaus e capital");
          lcd.setCursor(1,1);
          lcd.print ("de que estado?");
          delay (1000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("  A-SP    B-AM");
          lcd.setCursor(0,1);
          lcd.print ("  C-RJ    D-TO");
        if(AnalisaBotao()=='B'){
         correto();
        }else{
          lcd.clear();
         errado();
        }
    break;
    
    //História
    case 8:
        lcd.clear();
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Questao 9");
        delay (2000);
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print ("Quando o fogo");
        lcd.setCursor(1,1);
        lcd.print("foi descoberto?");
        delay (3000);
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print ("A-Neolitico");
        delay  (1000);
        lcd.setCursor(0,1);
        lcd.print ("B-Paleolitico");
        delay  (1000);
        lcd.setCursor(0,2);
        lcd.print ("C-Idade media");
        delay  (1000);
        lcd.setCursor(0,4);
        lcd.print ("D-Idade da pedra");
        if(AnalisaBotao()=='B'){
        correto();
        }else{
         errado();
        }
    break;
    case 9:
        lcd.clear();
          lcd.setCursor(5,1);
          lcd.print("Questao 10");
          delay (2000);
          lcd.clear();
          lcd.setCursor(3,1);
          lcd.print ("Quem pintou o");
          lcd.setCursor(5,2);
          lcd.print ("[Abapuru]?");
          delay (3000);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print ("A-Romero Britto");
          delay (1000);
          lcd.setCursor(0,1);
          lcd.print ("B-Tarsila A.");
          delay (1000);
          lcd.setCursor(0,2);
          lcd.print ("C-Picasso");
          delay (1000);
          lcd.setCursor(0,4);
          lcd.print ("D-Di Cavalcante");
        if(AnalisaBotao()=='B'){
          correto();
        }else{
         errado();
        }
    break;
  }
  
}

char AnalisaBotao(){
  bool BotaoPressionado = true;
  
  while(BotaoPressionado){
    if(digitalRead(BotA)){
      BotaoPressionado = false;
      return 'A';
    }else if(digitalRead(BotB)){
      BotaoPressionado = false;
      return 'B';
    }else if(digitalRead(BotC)){
      BotaoPressionado = false;
      return 'C';
    }else if(digitalRead(BotD)){
      BotaoPressionado = false;
      return 'D';
    }
  }
}


void geraSequencia(){
  randomSeed(random(0, 1000));
  for (int i = 0; i < nQuestao; i++){     
    array[i] = i;
  }
  for (int i = 0; i < nQuestao; i++) {    
    int temp = array[i];
    int novoIndice = random(nQuestao);
    array[i] = array[novoIndice];
    array[novoIndice] = temp;
  }
}