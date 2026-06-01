# Sistema Inteligente de Monitoramento e Alerta de Enchentes em Áreas Urbanas utilizando IoT

## Descrição do projeto

Este projeto apresenta uma solução baseada em Internet das Coisas (IoT) para monitoramento de enchentes em áreas urbanas.

O sistema utiliza um microcontrolador ESP32 conectado ao sensor ultrassônico HC-SR04 para medir a distância entre o sensor e a superfície da água.

Quando o nível da água ultrapassa o limite definido, o sistema aciona dois atuadores:

* LED (alerta visual)
* buzzer (alerta sonoro)

Além disso, as informações são transmitidas pela internet utilizando o protocolo MQTT para acompanhamento remoto em tempo real.

---

## Funcionamento

1. O ESP32 conecta à rede Wi-Fi.
2. O sistema conecta ao broker MQTT.
3. O sensor ultrassônico realiza leituras contínuas.
4. Quando o nível está normal:

   * LED desligado
   * buzzer desligado
   * envio de status normal
5. Quando o nível ultrapassa o limite:

   * LED ligado
   * buzzer ativado
   * envio de alerta crítico

---

## Hardware utilizado

* ESP32
* Sensor ultrassônico HC-SR04
* LED
* buzzer
* cabos de conexão
* prototipagem virtual no simulador Wokwi

---

## Interfaces e protocolos

### TCP/IP (Wi-Fi)

Responsável pela conexão do ESP32 com a internet.

### MQTT

Broker utilizado:

broker.hivemq.com

Tópico utilizado:

projeto/enchente/status

Exemplo de mensagem:

{
"nivel":"critico",
"distancia_cm":8,
"alerta":true
}

---

## Código-fonte

Arquivo principal:

projeto_iot_esp32.ino

---

## Objetivo

O objetivo do projeto é contribuir para o monitoramento preventivo de enchentes urbanas por meio da leitura contínua do nível da água, emissão de alertas locais e transmissão remota das informações em tempo real utilizando MQTT.
