int role=2;
int nemSensor=A0;

int sinirDeger=500;

void setup()
{
  pinMode(role,OUTPUT);
  pinMode(nemSensor,INPUT);
  digitalWrite(role,HIGH);
  Serial.begin(9600);
}
void loop()
{
  int nem = analogRead(nemSensor);
  Serial.println(nem);

  if(nem>=sinirDeger)
  {
    digitalWrite(role,LOW);
    delay(1000);
    digitalWrite(role,HIGH);
    delay(4000);
  }
  else
  {
    digitalWrite(role,HIGH);  
  }

}

  
