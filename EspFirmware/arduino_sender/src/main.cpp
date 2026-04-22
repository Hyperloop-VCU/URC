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
  Serial.begin(115200);
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
  Serial.print(euler.x()); Serial.print(",");
  Serial.print(euler.y()); Serial.print(",");
  Serial.print(euler.z()); Serial.print(",");
  Serial.print(fsr[0]); Serial.print(",");
  Serial.print(fsr[1]); Serial.print(",");
  Serial.print(fsr[2]); Serial.print(",");
  Serial.println(fsr[3]);




  delay(20);
}

