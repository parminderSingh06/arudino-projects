int led1 = 2;
int led2 = 3;
int led4 = 4;
int led8 = 5;
int count = 0;
int countTo = 15;
int d = 3000;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led8, OUTPUT);
}

void loop() {
  while(count <= countTo){
    binaryDisplay(count);
    ledsLow();
    count++;
  }
  count = 0;
}

void binaryDisplay(int num){
  if(num >= 8){
    digitalWrite(led8,HIGH);
    num = num - 8;
  }
  if(num >= 4){
    digitalWrite(led4,HIGH);
    num = num - 4;
  } 
  if(num >= 2){
    digitalWrite(led2,HIGH);
    num = num - 2;
  }
  if(num >= 1){
    digitalWrite(led1, HIGH);
    num = num - 1;
  }
}

void ledsLow(){
  delay(d);
  digitalWrite(led8,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);
}