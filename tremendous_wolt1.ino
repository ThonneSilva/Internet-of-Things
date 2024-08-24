// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
}