const int ledPin = 5; // The pin of your LED
const int trigPin = 11; // The pin to which the TRIG is connected
const int echoPin = 10; // The pin to which the ECHO is connected
const int ledOnTime = 1000; // The time that the LED stays on, after detecting the motion (in milliseconds, 1000ms = 1s)
const int trigDistance = 28; // The distance (and lower than it) at which the sensor is triggered (in centimeters)
const int ledPin2 = 8; //FRED 
const int ledPin3 = 9; //FRED
const int buzzPin = 4;
int duration;
int distance;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin2, OUTPUT); //FRED
  pinMode(ledPin3, OUTPUT); //FRED
  
}
 
void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
 
  if (distance <= trigDistance) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);//FRED
    /*delay(ledOnTime);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW); //FRED*/
    
    
  }

  else  {
    digitalWrite(ledPin, LOW);
  }

  delay(10);
}
