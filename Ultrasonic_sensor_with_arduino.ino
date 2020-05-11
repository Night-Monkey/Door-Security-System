int tiger = 2;
int echo = 3;
//int a=12;
int ledPin = 12;
double Duration, Distance;

void setup()
{
  pinMode(tiger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  // pinMode(a,OUTPUT);
  pinMode(ledPin, OUTPUT);
}
void loop()
{
  digitalWrite(tiger, HIGH);
  delayMicroseconds(1000);
  digitalWrite(tiger, LOW);
  Duration = pulseIn(echo, HIGH);
  Distance = (Duration / 2.0) / 29.1;
  Serial.print("\ncm = ");
  Serial.print(Distance);
  //delay(500);
  if (Distance < 150.0)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }
  else
    digitalWrite(ledPin, LOW);
    delay(200);

}

