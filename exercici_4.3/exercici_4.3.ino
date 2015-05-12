int tempAigua = 102;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
  if ( tempAigua < 90)
  {
    Serial.print("Aigua es menor que 90C, Aigua encara no bull");
  }
  else if( tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua es major o igual que 90C i menor que 100C, Aigua apunt de bullir");
  }
  else if( tempAigua == 100)
  {
    Serial.print("Aigua es igual que 100C");
  }
}

void loop()   // we need this to be here even though its empty
{
}

