int Etat=0;
int capteur=A3;
void setup() {
pinMode(A3,INPUT);
Serial.begin(9600);
}

void loop() {
if(analogRead(A3)>100)
{
  if (Etat==0)Etat=1;
  else Etat=0;
  Serial.println(Etat);
delay(200); 
 }
}
