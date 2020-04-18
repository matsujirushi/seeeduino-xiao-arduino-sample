constexpr int LED1 = 0; // D0
constexpr int LED2 = 1; // D1

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(200);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(200);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(1000);
}
