int leser_pin = 7;
int ldr_pin = 8;
int motor1F=10;
int motor1B=9;

void setup() {
    Serial.begin(9600);
    pinMode(leser_pin,OUTPUT);
    pinMode(ldr_pin,INPUT);
    pinMode(motor1F, OUTPUT);
    pinMode(motor1B, OUTPUT);
}

void loop() {
  digitalWrite(leser_pin, HIGH);
  
   if( digitalRead( ldr_pin ) == 1){
      digitalWrite( motor1F,HIGH);
   }
   else{
      digitalWrite( motor1F,LOW);
   }
   
   Serial.println( digitalRead( ldr_pin ));
}
