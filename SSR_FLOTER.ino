#define relay 2
#define floater 8

void setup() 
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  // Set the floater and relay to be OFF
  pinMode(floater, INPUT_PULLUP);
  digitalWrite(relay, LOW);
}

void loop() 
{
  if (digitalRead(floater) == HIGH)
  {
    digitalWrite(relay, HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(relay, LOW);
    delay(500);
  }
}
