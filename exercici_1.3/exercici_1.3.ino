void setup()                // comença el programa
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

void loop()                 // es va executant 
{
  Serial.println("Hello world!");  // surt Hello world
  delay(1000);
}

