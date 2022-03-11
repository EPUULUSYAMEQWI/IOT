// C++ code
//
int Red = 13;
int Green = 1;
int Yellow = 7; 
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1, HIGH);
  delay(1000);
  digitalWrite(1, LOW);
    delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}