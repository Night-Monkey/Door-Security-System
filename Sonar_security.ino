int new_tiger = 2;
int new_echo = 3;
int buzz=11;
int new_ledPin = 12;
double new_Duration, new_Distance;

void setup2()
{
  pinMode(new_tiger, OUTPUT);
  pinMode(new_echo, INPUT);
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
  pinMode(new_ledPin, OUTPUT);
}
void loop2()
{
  digitalWrite(new_tiger, HIGH);
  delayMicroseconds(1000);
  digitalWrite(new_tiger, LOW);
  new_Duration = pulseIn(new_echo, HIGH);
  new_Distance = ((new_Duration / 2.0) / 29.1);
  Serial.print("\ncm = ");
  Serial.print(new_Distance);
  //delay(500);
  if (new_Distance < 150.0)
  {
    digitalWrite(new_ledPin, HIGH);
    digitalWrite(buzz, HIGH);
  }
}
