int bp = 7;
int lp = 10;
int eb =0;

void setup(){
  pinMode(lp , OUTPUT); 
  pinMode(bp, INPUT);
    
}

void loop() {
  eb = digitalRead(bp);
  if (eb == HIGH){
    digitalWrite(lp , HIGH);
    delay(100);
    digitalWrite(lp , LOW);
    delay(100);
}    
  else {
    digitalWrite(lp, LOW);
  }
}