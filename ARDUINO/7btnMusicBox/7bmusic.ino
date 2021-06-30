#define DoK 2
#define ReK 3
#define MiK 4
#define FaK 5
#define SoK 6
#define RaK 7
#define SiK 8
#define Beep 9
#define pausetime 200
void setup()
{
  pinMode(DoK,INPUT);
  pinMode(ReK,INPUT);
  pinMode(MiK,INPUT);
  pinMode(FaK,INPUT);
  pinMode(SoK,INPUT);
  pinMode(RaK,INPUT);
  pinMode(SiK,INPUT);
  pinMode(Beep,OUTPUT);
  digitalWrite(DoK,HIGH);
  digitalWrite(ReK,HIGH);
  digitalWrite(MiK,HIGH);
  digitalWrite(FaK,HIGH);
  digitalWrite(SoK,HIGH);
  digitalWrite(RaK,HIGH);
  digitalWrite(SiK,HIGH);
  digitalWrite(Beep,HIGH);
}
void loop()
{
  while(!(digitalRead(DoK)==LOW||digitalRead(ReK)==LOW||digitalRead(MiK)==LOW||digitalRead(FaK)==LOW||digitalRead(SoK)==LOW||digitalRead(RaK)==LOW||digitalRead(SiK)==LOW)) ;
  if(digitalRead(DoK)==0)
  {
    delay(20);
    if(digitalRead(DoK)==0)
    {
      tone(Beep,262,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(ReK)==0)
  {
    delay(20);
    if(digitalRead(ReK)==0)
    {
      tone(Beep,294,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(MiK)==0)
  {
    delay(20);
    if(digitalRead(MiK)==0)
    {
      tone(Beep,330,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(FaK)==0)
  {
    delay(20);
    if(digitalRead(FaK)==0)
    {
      tone(Beep,349,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(SoK)==0)
  {
    delay(20);
    if(digitalRead(SoK)==0)
    {
      tone(Beep,392,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(RaK)==0)
  {
    delay(20);
    if(digitalRead(RaK)==0)
    {
      tone(Beep,440,pausetime);delay(pausetime);
    }
  }
  if(digitalRead(SiK)==0)
  {
    delay(20);
    if(digitalRead(SiK)==0)
    {
      tone(Beep,494,pausetime);delay(pausetime);
    }
  }
}
