
#define Sensor 2
#define LED 3
 
void setup() {
 
pinMode(Sensor,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
 
}
 
void loop() {
 
  bool Detection = digitalRead(Sensor);
   
  if(Detection == HIGH){
    Serial.println("Motion detected !!");
    digitalWrite(LED,HIGH);
  }

  if(Detection == LOW) {
    Serial.println("Clear");
    digitalWrite(LED,LOW);
  }
}
