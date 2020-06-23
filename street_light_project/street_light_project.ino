void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(D2,OUTPUT);

}

void loop() {
int s=analogRead(A0);
Serial.println(s);
if (s<7){
  digitalWrite(D2,HIGH);
  
}
else{
  digitalWrite(D2,LOW);
}
delay(500);
}
