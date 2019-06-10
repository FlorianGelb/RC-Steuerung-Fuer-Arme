
void setup() 
{
//Serial.begin(9600);
pinMode(12, OUTPUT);
}

void loop() 
{
  send(0);
  send(1);
  send(2);
  send(3);
}

void send(int Richtung)
{
  //bounds();
  switch(Richtung)
  {
    case 0:
      digitalWrite(12, HIGH);
      delay(2500);
      digitalWrite(12, LOW);
      delay(500);
      break;
    case 1:
      digitalWrite(12, HIGH);
      delay(2000);
      digitalWrite(12, LOW);
      delay(500);
      break;
    case 2:
      digitalWrite(12, HIGH);
      delay(1500);
      digitalWrite(12, LOW);
      delay(500);
      break;
    case 3:
      digitalWrite(12, HIGH);
      delay(1000);
      digitalWrite(12, LOW);
      delay(500);
      break;
  } 
  //bounds();  
   }
 
 void bounds()
 {
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
 }
