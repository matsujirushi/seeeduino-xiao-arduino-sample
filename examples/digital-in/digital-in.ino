constexpr int BTN = 0;  // D0
constexpr int LED = 13; // YELLOW_LED

void setup()
{
  pinMode(BTN, INPUT_PULLDOWN);
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, digitalRead(BTN) ? LOW : HIGH);
}
