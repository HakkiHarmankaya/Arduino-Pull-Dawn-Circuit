void setup() 
{
  pinMode(8, INPUT);
  pinMode(10, OUTPUT);
}

void loop() 
{
  if( digitalRead(8) == 1 )
      digitalWrite(10, HIGH);
    else
      digitalWrite(10, LOW);
}
