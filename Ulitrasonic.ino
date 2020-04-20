
#include<Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;
const int colorR = 150;
const int colorG = 0;
const int colorB = 150;

const int trigPin = 9;
const int echoPin = 10;
long hugtsaa;
int zai;
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
    Serial.begin(9600); 
    lcd.begin(16,2);
    lcd.setRGB(colorR,colorG,colorB);
    lcd.print("   Logenstsyms");   
    delay(500);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
hugtsaa = pulseIn(echoPin, HIGH);
zai= hugtsaa*0.034/2;
Serial.print("Зай: ");
Serial.println(zai);

    lcd.setCursor(0,1);
    lcd.print("   Zai: ");
    lcd.print(zai);
    lcd.print("cm    ");
    delay(200);
}
