#define R 6
#define G 5
#define B 3

int buzzer = 8 ;
void setup()
{

  Serial.begin(9600);
  pinMode(R, OUTPUT); 
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop()
{

 
  tone(buzzer, 200, 200);
  delay (300);
  noTone(buzzer);  
    analogWrite(R, 255);
    analogWrite(G, 255);
    analogWrite(B, 0);
    Serial.println("Cor Amarela");
   tone(buzzer, 660, 200);
  delay(300);
  noTone(buzzer);
    analogWrite(R, 255);
    analogWrite(G, 0);
    analogWrite(B, 255);
    Serial.println("Cor Rosa");
  tone(buzzer, 660, 200);
  delay(300);
  noTone(buzzer);
  
    analogWrite(R, 0);
    analogWrite(G, 255);
    analogWrite(B, 0);
    Serial.println("Cor Verde");
  tone(buzzer, 660, 200);
  delay(300);
  noTone(buzzer);
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 255);
    Serial.println("Cor Azul");
  tone(buzzer, 660, 200);
  delay(300);
  noTone(buzzer);
    analogWrite(R, 255);
    analogWrite(G, 0); 
    analogWrite(B, 0);
    Serial.println("Cor vermelha");
  tone(buzzer, 660, 200);
  delay(300);
  noTone(buzzer);
    analogWrite(R, 80);
    analogWrite(G, 80);
    analogWrite(B, 80);
    Serial.println("Cor ciza");
  delay(1000);
}



