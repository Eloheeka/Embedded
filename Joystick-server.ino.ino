#include <Servo.h>

#include <Servo.h>
#define x_pin A0
#define y_pin A1
#define hardcoded_vcc A2
#define hardcoded_gnd1 A3

Servo servo;


void setup() {
  Serial.begin(9600);
  pinMode(hardcoded_vcc, OUTPUT);
  pinMode(hardcoded_gnd1, OUTPUT);
  digitalWrite(hardcoded_vcc, HIGH);
  digitalWrite(hardcoded_gnd1, LOW);
  servo.attach(6);
}

void loop() {
  int x_val = analogRead(x_pin);
  int y_val = analogRead(y_pin);
   

   int angle = map(x_val,0,1023,0,180);
   servo.write(angle);
   delay(15);

   Serial.print("X: ");
   Serial.print(x_val);
   Serial.print("   ,Y: ");
   Serial.println(y_val);

}