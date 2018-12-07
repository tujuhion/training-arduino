#define pot A0
#define led 3
int pvalue = 0;
int ledval = 0;

void setup()
{
  pinMode(pot,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  pvalue = analogRead(pot);
  ledval = map(pvalue,0,1023,0,255);
  analogWrite(led,ledval);
  delay(50);
}
