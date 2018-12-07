#define pot A0
int pvalue = 0;

void setup()
{
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop()
{
  pvalue = analogRead(pot);
  Serial.println(pvalue);
  delay(500);
}
