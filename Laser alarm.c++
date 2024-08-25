int Laser = 8;
int Ldr = 9;
int buzzer = 11;

void setup() 
{       
    pinMode(Laser,OUTPUT);
    pinMode(Ldr,INPUT);
    pinMode(buzzer,OUTPUT);
    
}

 void loop()
{ digitalWrite(8,HIGH);

  if(digitalRead(Ldr)==LOW)
 {
  digitalWrite(11,LOW);
 }
else
{
  digitalWrite(11,HIGH);
}
}