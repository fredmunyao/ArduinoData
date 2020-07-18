[const int trigPin = 6;
const int echoPin = 5;
const int buzzPin = 3;
const int ledPin =7;

long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = 0.34*(duration/2);

  while(distance < 50);
  {
    digitalWrite(buzzPin, HIGH);
    digitalWrite(ledPin, HIGH);
  }
}
  
 /* while(distance >= 51); 
  
  {
    digitalWrite(buzzPin, LOW);
  }
  delay(300);
}*/
