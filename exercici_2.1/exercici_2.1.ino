int a = 5;
int b = 10;
int c = 20;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");       // valor a A
  Serial.println(a);
  Serial.print("b = ");       // valor a B
  Serial.println(b);
  Serial.print("c = ");       // valor C
  Serial.println(c);

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // dividir
  Serial.println(c / b);

  Serial.print("c % b = ");       // módul
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // restar
  Serial.println(b - c);
}

void loop()  // we need this to be here even though its empty
{
}

