void setup ()
{
  for(int pin = 2; pin<14; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  for(int i=2; i<10; i++)
  {
    digitalWrite(i, HIGH);
    delay(20);
     digitalWrite(i+1, HIGH);
      delay(20);
      digitalWrite(i+2, HIGH);
      delay(20);
      digitalWrite(i, LOW);
      delay(20);
      digitalWrite(i+1, LOW);
      delay(20);
  }

   for(int i=9; i>1; i--)
   {
     digitalWrite(i, HIGH);
    delay(20);
     digitalWrite(i-1, HIGH);
      delay(20);
      digitalWrite(i-2, HIGH);
      delay(20);
      digitalWrite(i, LOW);
      delay(20);
      digitalWrite(i-1, LOW);
      delay(20);
   }
  
}
