#include <WiFi.h>

const char* ssid = "<ssid>";
const char* wpa2 = "<wpa2 passcode>";
IPAddress test;
void setup()
{
  Serial.begin(115200);
  Serial.println("Connecting to WiFi network");
  WiFi.begin(ssid, wpa2);

  while (WiFi.status() != WL_CONNECTED)
{
Serial.println("Still waiting");
} 
if  (WiFi.status() == WL_CONNECTED)
{
  Serial.println("Connected");
}
  Serial.println("IP:"WiFi.localIP());

}

void loop()
{
}
