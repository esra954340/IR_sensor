
int IRSensor = 7;
int LED = 13;
 
void setup() 
{
 
  pinMode (IRSensor, INPUT);
  pinMode (LED, OUTPUT);
}
 
void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 0)
  {
    digitalWrite(LED, HIGH);
    Serial.print("led on ");
  }
  
  else
  {
    digitalWrite(LED, LOW);
    Serial.print("led off ");
  }
Serial.println(statusSensor);
}
