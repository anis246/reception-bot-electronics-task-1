#include <Servo.h>

Servo shoulder_l;
Servo arm_l;
Servo wlbow_l;

Servo shoulder_r;
Servo arm_r;
Servo wlbow_r;


void setup() {
  shoulder_l.attach(9);  
  arm_l.attach(10); 
  wlbow_l.attach(11);
  
  shoulder_r.attach(6);  
  arm_r.attach(5); 
  wlbow_r.attach(3);  
  
  delay(1000); 
  
  shoulder_l.write(0);
  arm_l.write(0);
  wlbow_l.write(0);
  
  shoulder_r.write(0);
  arm_r.write(180);
  wlbow_r.write(180);
  
  delay(5000); 
  
  
}

void loop() {
 
  ready();
  
  delay(5000);
  
  happy();
  
  delay(5000);
  
  angry();

  delay(5000);
  
}

void ready(){
  
  shoulder_l.write(0);
  arm_l.write(45);
  wlbow_l.write(45);
  
  shoulder_r.write(0);
  arm_r.write(135);
  wlbow_r.write(135);
}

void happy(){
  
  
  shoulder_l.write(180);
  arm_l.write(45);
  wlbow_l.write(45);
  
  shoulder_r.write(180);
  arm_r.write(135);
  wlbow_r.write(135);
  
  delay(1000);
  
  for (int i = 0; i <= 3; i++) { 
  
  arm_l.write(90);
  wlbow_l.write(90);
  arm_r.write(90);
  wlbow_r.write(90);
  
  delay(1000);
  
  arm_l.write(45);
  wlbow_l.write(45);
  arm_r.write(135);
  wlbow_r.write(135);
    
  delay(1000);
  }
}

void angry(){
  
  
  shoulder_l.write(0);
  arm_l.write(45);
  wlbow_l.write(45);
  
  shoulder_r.write(0);
  arm_r.write(135);
  wlbow_r.write(135);
  
  delay(1000);
  
 for (int i = 0; i <= 3; i++) {
  
  arm_l.write(90);
  wlbow_l.write(90);
  arm_r.write(90);
  wlbow_r.write(90);
  
  delay(1000);
  
  arm_l.write(45);
  wlbow_l.write(45);
  arm_r.write(135);
  wlbow_r.write(135);
   
  delay(1000);
  }
}
