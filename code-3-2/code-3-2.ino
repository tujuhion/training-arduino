#define led 3
int ascii;
void setup()
{
   Serial.begin(9600);
   pinMode(led,OUTPUT);
}
void loop()
{
  delay(50);
  if (Serial.available() > 0)
    ascii = Serial.read();
    if (ascii == 49){
     digitalWrite(led, HIGH); 
    }
  else if (ascii == 48){
     digitalWrite(led, LOW); 
  }   
}
