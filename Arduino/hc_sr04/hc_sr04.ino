int const trigPin = 10;     // Defines the data pins of the ultrasonic
int const echoPin = 9;     
int const buzzPin = 2;// Defines the buzzer pin
int const led =7;
void setup()
{
pinMode(trigPin, OUTPUT);   // sets trig pin to have output pulses
pinMode(echoPin, INPUT);    // sets echo pin to be input and get the pulse width
pinMode(buzzPin, OUTPUT);   // sets buzz pin as output to control the sound
pinMode(led, OUTPUT);
}
void loop()
{
int duration, distance;     // The Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
digitalWrite(trigPin, HIGH); // The output pulse with 1ms width on trigPin
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);  // Measures the pulse input in the echo pin
distance = (duration/2) / 29.1;   // Distance is half the duration devided by 29.1 (from datasheet)
// if the distance is less than 0.5 meter and more than 0 (0 or less means over range)
if (distance <= 30 && distance >= 0) {
// It will trigger the Buzzer
digitalWrite(buzzPin, HIGH);
digitalWrite(led, HIGH);
delay(1000);
} else {
// Will no Sound
digitalWrite(buzzPin, LOW);
digitalWrite(led, LOW);
}
// Waits 50 milliseconds
delay(50);
}
