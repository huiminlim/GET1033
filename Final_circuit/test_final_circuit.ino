#define btnPin A4
#define irPin A5
#define ledPin 13

int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(btnPin, INPUT);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read if btn is pressed
  // if pressed, btn = 1
  // else btn is 0
  int btn = analogRead(btnPin);

  // toggles state
  // initially, state is 0, meaning box is closed
  // state = 1, collecting letter
  state = (btnPin == 1)? !state: state;

  int ir = analogRead(irPin);
  Serial.println(ir);
  if(ir > 500) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);
  
}
