#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "WiFi";
const char* password = "senha";
const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  WiFi.begin(ssid, password);
  client.setServer(mqtt_server, 8884);
}

void loop() {
  int distancia = 35;

  if (distancia <= 10) {
    client.publish("projeto/enchente/status",
    "{\"nivel\":\"critico\",\"alerta\":true}");
  } else {
    client.publish("projeto/enchente/status",
    "{\"nivel\":\"normal\",\"alerta\":false}");
  }
}


