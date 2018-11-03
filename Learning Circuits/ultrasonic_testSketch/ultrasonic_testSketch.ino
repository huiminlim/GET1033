#define trig 11
#define echo 12

long distance, duration;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delay(100);
  
  digitalWrite(trig, HIGH);
  delay(100);
  digitalWrite(trig, LOW);

  // read the time taken for sound to travel to barrier
  // and travel back
  duration = pulseIn(echo, HIGH);

  // calculate distance travelled once to barrier
  // take account speed of sound wave in air
  distance = duration*0.034/2;
  
  Serial.println(distance);
}
