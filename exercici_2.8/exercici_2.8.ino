int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("La HD es de ");
  Serial.print(drive_gb);
  Serial.println("GB ");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;
  drive_kb = drive_mb * 1024;

  Serial.print("Pot guardar ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes");
  
  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;
  real_drive_kb = real_drive_mb * 1000;
  
  Serial.print("En realitat guarda ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes");
  Serial.print("Perds ");
  Serial.print(drive_kb-real_drive_kb);
  Serial.println(" Kilobytes");
}

void loop()      //we need this to be here even though its empty
{
}

