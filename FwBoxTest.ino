//
// Copyright (c) 2022 Fw-Box (https://fw-box.com)
// Author: Hartman Hsieh
//
// Description :
//   None
//
// Connections :
//   None
//
// Required Library :
//   None
//

#define DEVICE_TYPE 35
#define FIRMWARE_VERSION "1.0.8"

void setup()
{
  Serial.begin(115200);

  Serial.println("begin...");
} // void setup()

void loop()
{
  Serial.printf("millis() = %d\n", millis());
  delay(3000);
} // END OF "void loop()"
