#define PMS 2 // Pin for signal from Photomicrosensor
#define LED 12

void setup() {
Serial.begin(9600);
pinMode(PMS, INPUT);
pinMode(LED, OUTPUT);
}
void loop() {
boolean x = digitalRead(PMS);
if (x== 0)
{digitalWrite(LED,0);
}
else
{ digitalWrite(LED,1);
 }
Serial.println(x); 
}
