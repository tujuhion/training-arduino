#define tactile 2
#define led 3

void setup()
{
   pinMode(tactile,INPUT);
   pinMode(led,OUTPUT);
}

void loop()
{
  if (digitalRead(tactile)){
   digitalWrite(led,HIGH); 
  }
  else {
    digitalWrite(led,LOW);
  }    
}
