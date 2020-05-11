/*
Test code for the Arduino Uno
Written by Tom Bonar for testing
Sensors being used for this code are the MB70X0 from MaxBotix
*/
const int pwPin1 = 3;
int ledPin1 = 12;
long sensor1, cm;

void setup1 () {
  Serial.begin(9600);
  pinMode(pwPin1, INPUT);
  pinMode(ledPin1, OUTPUT);
}

void read_sensor(){
  sensor1 = pulseIn(pwPin1, HIGH);
  cm = sensor1/58;
}

void loop1 () {
  read_sensor();
  printall();
  //delay(50);
   if (Distance < 150.0)
  {
    digitalWrite(ledPin1, HIGH);
   delay(1000);
  }
  else
    digitalWrite(ledPin1, LOW);
  delay(500);
}

void printall(){
  Serial.print("S1");
  Serial.print(" = ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
}

