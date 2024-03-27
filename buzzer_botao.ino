// C++ code
//

int buzzer = 9;
int bPin = 13;
int estadoB = 0;


void setup()
{
  pinMode(bPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  
  estadoB = digitalRead(bPin);
  if (estadoB == HIGH){
	tone(buzzer, 440);
  	delay(2000);
    noTone(buzzer);
  
  	tone(buzzer, 440);
  	delay(2000);
    noTone(buzzer);

  	tone(buzzer, 440);
  	delay(2000);
    noTone(buzzer);

  	tone(buzzer, 392);
  	delay(2000);
    noTone(buzzer);

  	tone(buzzer, 440);
  	delay(2000);
    noTone(buzzer);

  	tone(buzzer, 261);
  	delay(2000);
    noTone(buzzer);
  
  	tone(buzzer, 440);
  	delay(2000);
    noTone(buzzer);

  	tone(buzzer, 329);
  	delay(2000);
    noTone(buzzer);

    tone(buzzer, 392);
  	delay(2000);
    noTone(buzzer);
    
  }	

  else{
  	noTone(buzzer);
  }	

}