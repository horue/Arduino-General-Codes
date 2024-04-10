// C++ code
//

int led1 = 13;
int led2 = 12;
int b = 9;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{

  
  digitalWrite(led1, HIGH);
  delay(1000);
  tone(b, led1);
  delay(1000);
  noTone(b);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
  


}