void setup() {
Serial.begin(9600);
 pinMode(8, OUTPUT); // put your setup code here, to run once:
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'a': digitalWrite(8, HIGH);break; // when a is pressed on the app on your smart phone
        case 'd': digitalWrite(8, LOW);break; // when d is pressed on the app on your smart phone
        case 'h': digitalWrite(9, LOW);break;
        case 'e': digitalWrite(9, HIGH);break;
        case 'f': digitalWrite(10, HIGH);break;
        case 'g': digitalWrite(10, LOW);break;
        case 'b': digitalWrite(11, LOW);break;
        case 'c': digitalWrite(11, HIGH);break;
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
