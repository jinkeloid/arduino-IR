

#include <IRremote.h>

int RECV_PIN = 11;
int relay = 5;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(5,OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
    if(results.value==2160034684)      
  {
  digitalWrite(12,1);                //点亮LED
   Serial.println("turn on LED"); //串口显示开灯
   digitalWrite(relay, HIGH);
  }
  else if(results.value==2160040294)  
  {
   digitalWrite(12,0);            //熄灭LED
    Serial.println("turn off LED");    //串口显示关灯
    digitalWrite(relay, LOW);
  }
    
  }
}
