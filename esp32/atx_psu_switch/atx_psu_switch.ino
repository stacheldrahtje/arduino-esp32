#include <WiFi.h>

const char* ssid = "<ssid>";
const char* wpa2 = "<wpa2 passcode>";

void setup()
{
  Serial.begin(115200)
  Serial.println("Connecting to WiFi network";
  WiFi.begin(ssid, wpa2);

  if ((WiFi.status) == "WL_CONNECTED")
{
Serial.println("Connected");
} 
else {
  Serial.println("Still waiting");
}

void loop()
{
}
