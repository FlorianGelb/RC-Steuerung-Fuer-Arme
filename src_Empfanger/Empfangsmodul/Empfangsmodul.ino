int count = 0;
float V;
float v2;
unsigned long t;
unsigned long t2;
void setup() 
{
  Serial.begin(4800);
}

void loop() 
{
  int Inp = analogRead(A1);
  float ConstV = (1/(1024/4.827)); // V / analogRead
  float v2 = V;
  V = ConstV * Inp;
  if(peak())
  {
    t2 = millis();  
  }
  if(peak())
  {
    t = millis();
  }   
  Serial.println(t-t2);

  
}


bool peak()
{
    if(round(V) > round(v2))
  {
     if(round(V) > 2)
     {
      return true;
     }
     
  }
  return false;
}
 
  /*if(V > 0.1)
  {
    count++;
  }
  if(V < 0.1)
  {
    if(count != 0)
    {
            Serial.println(round((count/10)) * 10);
    }
      count = 0;
  }
  */
