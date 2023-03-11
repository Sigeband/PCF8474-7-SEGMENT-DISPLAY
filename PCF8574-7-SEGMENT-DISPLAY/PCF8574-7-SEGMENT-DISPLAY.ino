#include "Arduino.h" //including librarys
#include "PCF8574.h"

 PCF8574 PCF8574 (0x20);   //define I2c-adress

void setup() {

  Serial.begin(115200); //start serial communication



  PCF8574.pinMode(P0, OUTPUT);
  PCF8574.pinMode(P1, OUTPUT);
  PCF8574.pinMode(P2, OUTPUT);
  PCF8574.pinMode(P3, OUTPUT);
  PCF8574.pinMode(P4, OUTPUT);
  PCF8574.pinMode(P5, OUTPUT);
  PCF8574.pinMode(P6, OUTPUT);
  PCF8574.pinMode(P7, OUTPUT);   //define pin modes 
  PCF8574.begin();  //"start" the I2C device




}

void loop() {


delay(1000);
clear();
write0();

delay(1000);
clear();
write1();

delay(1000);
clear();
write2();

delay(1000);
clear();
write3();

delay(1000);
clear();
write4();

delay(1000);
clear();
write5();

delay(1000);
clear();
write6();

delay(1000);
clear();
write7();

delay(1000);
clear();
write8();

delay(1000);
clear();
write9();







}
void clear() {
PCF8574.digitalWrite(P0, HIGH);
PCF8574.digitalWrite(P1, HIGH);
PCF8574.digitalWrite(P2, HIGH);
PCF8574.digitalWrite(P3, HIGH);
PCF8574.digitalWrite(P5, HIGH);
PCF8574.digitalWrite(P6, HIGH);
PCF8574.digitalWrite(P7, HIGH);

}

void write0() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P3, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW);
}
void write1() { 
  PCF8574.digitalWrite(P1, LOW);
  PCF8574.digitalWrite(P5, LOW);
}
void write2() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P6, LOW);
 PCF8574.digitalWrite(P7, LOW);
 PCF8574.digitalWrite(P3, LOW);
}
void write3() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW);
 PCF8574.digitalWrite(P7, LOW);
}
void write4() {
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P7, LOW);
 PCF8574.digitalWrite(P5, LOW);
  
}
void write5() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW); 
 PCF8574.digitalWrite(P7, LOW);
  
}
void write6() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P3, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW);
 PCF8574.digitalWrite(P7, LOW);
}
void write7() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P5, LOW);  
}
void write8() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P3, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW);
PCF8574.digitalWrite(P7, LOW);
}
void write9() {
 PCF8574.digitalWrite(P0, LOW);
 PCF8574.digitalWrite(P1, LOW);
 PCF8574.digitalWrite(P2, LOW);
 PCF8574.digitalWrite(P5, LOW);
 PCF8574.digitalWrite(P6, LOW);
 PCF8574.digitalWrite(P7, LOW);
  
}
