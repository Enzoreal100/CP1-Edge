// C++ code
//
#define VIN 5
#define R 1000

int red = 11;
int yellow = 12;
int green = 13;
int foto = A0;
int sensorValor;
int lim1 = 400;
int lim2 = 800;
int buzz = 9;
int lux;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(foto, INPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValor = analogRead(foto);
  lux = (sensorRawToPhys(sensorValor)) - 2;
  Serial.print(F("Valor do sensor= "));
  Serial.println(sensorValor); // Valor da leitura do sensor
  Serial.print(F("Valor físico do sensor = "));
  Serial.print(lux); // Valor da leitura do sensor em Lumens
  Serial.println(F(" lumen")); 
  delay(1000);
  
  //Caso x quantidade de luz, led tal acende
  if (lux < lim1)
  {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  
  else if (lux < lim2)
  {
	digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }
  
  else
  {
  	digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);

  }
  
  //caso x quantidade de luz, o buzzer aciona

  if (lux < lim1)
  {
      noTone(buzz);
  }
  else if (lux < lim2)
  {
      tone(buzz, 440);
      delay(2000);
      noTone(buzz);
      delay(2000);
  }
  else
  {
      tone(buzz, 440);
      delay(2000);
      noTone(buzz);
      delay(2000);
  }
}
//calculo de conversão para lúmens, do valor recebido pelo LDR
int sensorRawToPhys(int raw)
{
  float Volt = float(raw) * (VIN / float(1024));
  float RLDR = (R * (VIN - Volt))/Volt;
  int phys=500/(RLDR/1000);
  return phys;
}


