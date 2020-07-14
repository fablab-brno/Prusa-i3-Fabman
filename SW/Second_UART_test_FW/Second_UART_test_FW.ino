HardwareSerial secondSerial(1);

void setup() {
  Serial.begin(115200);
  secondSerial.begin(115200, SERIAL_8N1, 14, 27);
}

void loop() {
  if (secondSerial.available() > 0) {
    String data = secondSerial.readStringUntil('\n');
    if (data == "Data from RPi") {
      secondSerial.println("Test");
      Serial.println("Comunnication work both way!");
    }
  }
}
