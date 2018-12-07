#define tactile 2
#define led 3
bool btnval = 0;
bool state = 0;

void setup()
{
   pinMode(tactile,INPUT);
   pinMode(led,OUTPUT);
}

void loop()
{
  delay(50);
  btnval = digitalRead(tactile);
  if (btnval == 1 && state == 0){
   digitalWrite(led,HIGH);
   state = 1;
   delay(50);
  }
   else if(btnval == 1 && state == 1) 
  {
    digitalWrite(led,LOW);
    state = 0;
    delay(50);
  }    
}  
