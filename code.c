#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h> 
char auth[] = "XXXXXXXXXXXXXXXXXXXXXXX"; 
char ssid[] = "Srijill”; 
char pass[] = "Srijill@123"; 
void setup() { 

// put your setup code here, to run once: 
Serial.begin(9600);
 Blynk.begin(auth,ssid,pass); 

} 
void loop() {

 // put your main code here, to run repeatedly: 
Blynk.run();

}