#include <Arduino.h>
#include <Adafruit_BNO055.h>



Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
const int FSR_PINS[4] = {A0, A1, A2, A3};
//A0 = index
//A1 = middle
//A2 = Ring
//A3 = pinky

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Wire.begin();
  if (!bno.begin()) {
        Serial.println("BNO055 not found");
        while (1);
    }
    bno.setExtCrystalUse(true);

  
}

void loop() {
  
  imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
  
  int fsr[4];
    for (int i = 0; i < 4; i++) {
        fsr[i] = analogRead(FSR_PINS[i]);
    }  

  //commas are for csv format
  Serial1.print(euler.x()); Serial1.print(",");
  Serial1.print(euler.y()); Serial1.print(",");
  Serial1.print(euler.z()); Serial1.print(",");
  Serial1.print(fsr[0]); Serial1.print(",");
  Serial1.print(fsr[1]); Serial1.print(",");
  Serial1.print(fsr[2]); Serial1.print(",");
  Serial1.println(fsr[3]);




  delay(20);
}

