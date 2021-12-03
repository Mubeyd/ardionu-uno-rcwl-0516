
#define Sensor 2
#define LED 3


 int micro_read = 2;
volatile int iter = 0;


void setup() {

 pinMode(micro_read,INPUT);
 
pinMode(Sensor,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);


 
}

int rv = -1;
 
void loop() {

  // // start section for frequency 1
  
  int v = digitalRead(Sensor);
  if ( v != rv) {
    rv = v;
    char msg[20];
    sprintf(msg, "R %lu %d", millis() / 1000, v );

    Serial.println(msg);

  }
  delay(100);

  // // end section for frequency 1


  // // start section for frequency 2
//   bool val;
//  
//  val = digitalRead(micro_read);
//  if (val){
//    iter+=1;
//    Serial.println(iter);
//    
//    delay(100);
//    if (iter>255){
//      iter = 0;
//    }
//  }
//  delay(10);
  // // end section for frequency 2

  
 
  bool Detection = digitalRead(Sensor);
   
  if(Detection == HIGH){
//    Serial.println("Motion detected !!");
    digitalWrite(LED,HIGH);
  }

  if(Detection == LOW) {
//    Serial.println("Clear");
    digitalWrite(LED,LOW);
  }
}
