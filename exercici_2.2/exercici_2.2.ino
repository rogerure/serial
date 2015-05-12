int a = 3;
int b = 4;
int h;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Nem a calcular la hipotenusa");

  Serial.print("a = "); //alor de a
  Serial.println(a);
  Serial.print("b = "); //valor de b
  Serial.println(b);
  a= a*a;
  b= b*b;
  int c;
  c= a+b;
  h= sqrt(c);
  Serial.print("h = "); //valor de h
  Serial.println(h);
 
}

void loop()  // we need this to be here even though its empty
{
}

