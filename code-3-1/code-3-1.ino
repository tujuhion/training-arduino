void setup()
{
   Serial.begin(9600);
}

void loop()
{
  delay(50);
  for (int i=0; i<255; i++)
  {
    Serial.println(i);
    delay(100);
  }
}
