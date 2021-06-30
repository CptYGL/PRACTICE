#define red 8
#define grn 9
#define blu 10
#define pin_readTemp A0

void prinTemp()
{
  Serial.print("Temp=");
  Serial.print(analogRead(pin_readTemp));
  Serial.println(" *C");
  delay(100);
}
/*void setColor(int a,int b,int c)
(
 analogWrite(red,255-a);
 analogWrite(grn,255-b);
 analogWrite(blu,255-c);
)*/
void colorshift()
{
  
}

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(grn,OUTPUT);
  pinMode(blu,OUTPUT);
  digitalWrite(red,LOW);
  digitalWrite(grn,LOW);
  digitalWrite(blu,LOW);
  pinMode(pin_readTemp,INPUT);
  Serial.begin(9600);
}
void loop()
{
  prinTemp();
}
