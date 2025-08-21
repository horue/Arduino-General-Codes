int vermelhoCarro = 13;
int amareloCarro = 12;
int verdeCarro = 11;
int vermelhoPedestre = 10;
int verdePedestre = 9;


void setup() {
  pinMode(vermelhoCarro, OUTPUT);
  pinMode(amareloCarro, OUTPUT);
  pinMode(verdeCarro, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
}

void loop() {
  digitalWrite(vermelhoCarro, HIGH);
  digitalWrite(verdePedestre, HIGH);

  delay(4000);

  digitalWrite(vermelhoCarro, LOW);
  digitalWrite(verdePedestre, LOW);
  digitalWrite(amareloCarro, HIGH);
  digitalWrite(vermelhoPedestre, HIGH);

  for(int i = 0; i<=3; i++){
    digitalWrite(vermelhoPedestre, HIGH);
    delay(150);
    digitalWrite(vermelhoPedestre, LOW);
    delay(150);
  }

  digitalWrite(amareloCarro, LOW);
  digitalWrite(vermelhoPedestre, HIGH);
  digitalWrite(verdeCarro, HIGH);
  delay(4000);
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdeCarro, LOW);
  
}
