int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = analogRead(A4);
  state = (btn == 1)? !state: state;
  Serial.println(state);
}
