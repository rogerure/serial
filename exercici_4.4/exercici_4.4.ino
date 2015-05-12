float KgCo2 = 40;

void setup() 
{
  Serial.begin(9600);     

  if (  KgCo2 < 3.2)
  {
    Serial.print("A");
    }
 else if( KgCo2 < 6.5)
  {
    Serial.print("B");
    }
  else if( KgCo2 < 11.1)
  {
    Serial.print("C");
    }
  else if( KgCo2 < 17.7)
  {
    Serial.print("D");
    }
  else if( KgCo2 < 38.2)
  {
    Serial.print("E");
    }
  else if( KgCo2 < 43.2)
  {
    Serial.print("F");
    } 
   else
   {}
}
void loop() {
  

}
