#include "motion.ino"
#include "vibration.ino"
#include "alarm.ino"
#include "camera.ino"
#include "wifi.ino"
#include "sms.ino"
#include "logging.ino"
#include "lights.ino"
#include "lock.ino"

void setup() {
  Serial.begin(9600);

  initMotion();
  initVibration();
  initAlarm();
  initCamera();
  initWiFi();
  initSMS();
  initLogging();
  initLights();
  initLock();
}

void loop() {
  checkMotion();
  checkVibration();
  delay(100);
}
