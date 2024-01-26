#include <WiFi.h>

//Nework and Server Related Variables
const char* ssid = "<ssid>";
const char* wpa2 = "<wpa2 key>";
IPAddress localip;
IPAddress mqtt_server_ip = (<ip, address, of, mqttserver>);
int mqtt_server_port = 1883;
const char* uname = "<mqtt_uname>";
const char* passwd = "<mqtt_password>";




void connect_wifi()
{
  Serial.println("Connecting to WiFi network");
  WiFi.begin(ssid, wpa2);

  while (WiFi.status() != WL_CONNECTED)
{
//Serial.println("Still waiting");
Serial.println(WiFi.status());
delay (2000);
if (WiFi.status() == WL_CONNECT_FAILED)
  {
    connect_wifi();
  }
} 

if  (WiFi.status() == WL_CONNECTED)
{
  Serial.println("Connected");
}
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
  return;
}

void setup()
{
  Serial.begin(115200);
  connect_wifi();

}

void loop()
{
  if (WiFi.status() == WL_DISCONNECTED)
  {
    Serial.println("disconnected");
    WiFi.disconnect();
    connect_wifi();
  }
}
