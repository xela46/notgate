const int diread1=12;
const int diread2=11;
const int seport=9600;
int recdi1=0;
int predi1=0;
int recdi2=0;
int predi2=0;

void setup() {
  
  Serial.begin(seport);
  pinMode(diread1,INPUT);
  pinMode(diread2,INPUT);
  
}

void loop() {
  
  recdi1 = digitalRead(diread1);
  recdi2 = digitalRead(diread2);
  
  if(predi1!=recdi1) {
    
    Serial.print('a');
    Serial.println(recdi1);
    
    predi1=recdi1;
  }
  
  if(predi2!=recdi2) {
    
    Serial.print('b');
    Serial.println(recdi2);
    
    predi2=recdi2;
  }
  
  
delay(100);
}

