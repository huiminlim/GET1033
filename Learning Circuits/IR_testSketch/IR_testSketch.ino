void setup() {
  Serial.begin(9600);
}
 
void loop() {
  int sensorValue = analogRead(A5);
  Serial.println(sensorValue);

  if(sensorValue > 500){
    digitalWrite(2, HIGH);
  }
  else {
    digitalWrite(2, LOW);
  }
  
}
