//variable declaration
int neg1=13;
int neg2=12;
int neg3=11;
int neg4=10;
int neg5=9;
int neg6=8;
int neg7=7;
int neg8=6;
int neg9=5;

int pos1=4;
int pos2=3;
int pos3=2;

int delayTime=100, i=0;

void setup() {
  // put your setup code here, to run once:
pinMode(neg1,OUTPUT);
pinMode(neg2,OUTPUT);
pinMode(neg3,OUTPUT);
pinMode(neg4,OUTPUT);
pinMode(neg5,OUTPUT);
pinMode(neg6,OUTPUT);
pinMode(neg7,OUTPUT);
pinMode(neg8,OUTPUT);
pinMode(neg9,OUTPUT);

pinMode(pos1,OUTPUT);
pinMode(pos2,OUTPUT);
pinMode(pos3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<=6;i++){
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, HIGH);
  
  digitalWrite(neg1, LOW);
  digitalWrite(neg2, HIGH);
  digitalWrite(neg3, HIGH);
  digitalWrite(neg4, HIGH);
  digitalWrite(neg5, HIGH);
  digitalWrite(neg6, HIGH);
  digitalWrite(neg7, HIGH);
  digitalWrite(neg8, HIGH);
  digitalWrite(neg9, LOW);

  delay(delayTime);

  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, HIGH);
  
  digitalWrite(neg1, HIGH);
  digitalWrite(neg2, LOW);
  digitalWrite(neg3, HIGH);
  digitalWrite(neg4, HIGH);
  digitalWrite(neg5, HIGH);
  digitalWrite(neg6, HIGH);
  digitalWrite(neg7, HIGH);
  digitalWrite(neg8, LOW);
  digitalWrite(neg9, HIGH);

  delay(delayTime);

  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, HIGH);
  
  digitalWrite(neg1, HIGH);
  digitalWrite(neg2, HIGH);
  digitalWrite(neg3, LOW);
  digitalWrite(neg4, HIGH);
  digitalWrite(neg5, HIGH);
  digitalWrite(neg6, HIGH);
  digitalWrite(neg7, LOW);
  digitalWrite(neg8, HIGH);
  digitalWrite(neg9, HIGH);

  delay(delayTime);

  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, HIGH);
  
  digitalWrite(neg1, HIGH);
  digitalWrite(neg2, HIGH);
  digitalWrite(neg3, HIGH);
  digitalWrite(neg4, LOW);
  digitalWrite(neg5, HIGH);
  digitalWrite(neg6, LOW);
  digitalWrite(neg7, HIGH);
  digitalWrite(neg8, HIGH);
  digitalWrite(neg9, HIGH);

  delay(delayTime);

  digitalWrite(pos1, LOW);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, HIGH);
  
  digitalWrite(neg1, HIGH);
  digitalWrite(neg2, HIGH);
  digitalWrite(neg3, HIGH);
  digitalWrite(neg4, HIGH);
  digitalWrite(neg5, LOW);
  digitalWrite(neg6, HIGH);
  digitalWrite(neg7, HIGH);
  digitalWrite(neg8, HIGH);
  digitalWrite(neg9, HIGH);

  delay(delayTime);
  
  digitalWrite(pos1, HIGH);
  digitalWrite(pos2, HIGH);
  digitalWrite(pos3, LOW);
  
  digitalWrite(neg1, HIGH);
  digitalWrite(neg2, HIGH);
  digitalWrite(neg3, HIGH);
  digitalWrite(neg4, LOW);
  digitalWrite(neg5, HIGH);
  digitalWrite(neg6, LOW);
  digitalWrite(neg7, HIGH);
  digitalWrite(neg8, HIGH);
  digitalWrite(neg9, HIGH);

  delay(delayTime);
}
}
