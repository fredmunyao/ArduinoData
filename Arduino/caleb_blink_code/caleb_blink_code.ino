void setup() {
  pinMode (10, OUTPUT);  //DECLARE pin 13 as output
}
void loop() {
 digitalWrite(10, HIGH);
 delay(3000);
 digitalWrite(10, LOW);
 delay(100);
  
}
