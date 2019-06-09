
  void setup() {
  // put your setup code here, to run once:
Serial.begin(2000000);

}

void loop() {
int Inp = analogRead(A1);
float ConstV = (1/(1024/4.827)); // V / analogRead
float V = ConstV * Inp;

Serial.print("5V: ");
Serial.println(V);
}
