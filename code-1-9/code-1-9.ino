#define led 3

void setup()
{
   pinMode(led, OUTPUT);
}

void loop()
{
  int x = 1;
  for (int i = 0; i <= 255; i=i+x)
  {
     analogWrite(led,i);
     if (i == 255) x = -1;
     if (i == 0) x = 1;
     delay(10);
  }
}
