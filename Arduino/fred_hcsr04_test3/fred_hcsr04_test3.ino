const int trigPin = 11;
const int echoPin = 10;
const int buzzPin = 6;
const int ledPin = 5;


long duration;
float distance;
void setup() {
//  serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  tone(buzzPin, 1000);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  digitalWrite(ledPin, HIGH);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.34*(duration/2);
  
  if (distance < 20) {
    digitalWrite(buzzPin, HIGH);
    digitalWrite(ledPin, LOW);
  
  }

  else {
    digitalWrite(buzzPin,LOW);
    
  }
delay(300);
}
