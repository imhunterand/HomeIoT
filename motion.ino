const int motionSensorPin = 2;

void initMotion() {
  pinMode(motionSensorPin, INPUT);
  Serial.println("Inisialisasi sensor gerak...");
}

void checkMotion() {
  int motionState = digitalRead(motionSensorPin);
  if (motionState == HIGH) {
    Serial.println("Gerakan terdeteksi!");
    activateAlarm();
    captureImage();
    sendSMS("Peringatan: Gerakan terdeteksi di rumah Anda!");
    logEvent("Gerakan terdeteksi");
    controlLights(true);
    lockDoor();
  } else {
    controlLights(false);
  }
}
