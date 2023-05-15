int BlueLed = 32;
int Sensor = 10;
float sensorValue;

void setup() {
  pinMode(BlueLed, OUTPUT);
  pinMode(25, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(25);
  delay(200);
  if(sensorValue < 3000)
  {
    digitalWrite(BlueLed, LOW);
    Serial.println(sensorValue);
  }
  else
  {
    digitalWrite(BlueLed, HIGH);
    Serial.println(sensorValue);
  }
}
