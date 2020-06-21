void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(D2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
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
