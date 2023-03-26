<h1 align="center">Projeto-IoT-Monitoramento-Remoto-do-Solo</h1>

## ℹ️ Sobre o projeto
O projeto, que tem como objetivo monitorar a umidade do solo, do ar e a temperatura ambiente, é uma iniciativa fundamental para contribuir com a gestão sustentável dos recursos naturais e para a promoção de ambientes saudáveis e confortáveis para as pessoas. A partir da coleta de dados dessas variáveis, é possível identificar padrões de comportamento e fazer ajustes necessários para garantir o melhor aproveitamento dos recursos disponíveis e a preservação da natureza. Além disso, o monitoramento desses parâmetros pode ser útil em diversas áreas, como agricultura, construção civil, saúde pública, entre outras.

## 🔌 Tecnologias
Para o desenvolvimento do projeto foram usadas as seguintes tecnologias:
- [Arduino](https://www.arduino.cc/en/software/): Para fazer as conexões com os sensores.
- [RaspBerry](https://www.raspberrypi.com): Para fazer a comunicação com a Nuvem.
- [Firebase](https://firebase.google.com/?hl=pt-br): A nuvem para fazer o armazenamento de dados.
- [Java](https://dashboard.heroku.com/): Para o desenvolvimento do aplicativo.

Além disso, foram usados os seguintes dispositivos:
| Dispositivos                            |
|-----------------------------------------|
| [LoRa](https://www.gta.ufrj.br/ensino/eel878/redes1-2018-1/trabalhos-vf/lora/) |
| [Sensor de umidade e temperatura (DHT11)](https://www.filipeflop.com/produto/sensor-de-umidade-e-temperatura-dht11/) |
| [Sensor de umidade do solo](https://www.filipeflop.com/produto/sensor-de-umidade-do-solo-higrometro/) 

### 💻 Montagem do Circuito
##
O circuito  é composto por diversos componentes eletrônicos que trabalham em conjunto para fornecer informações precisas sobre as condições climáticas e do solo.

O **sensor de umidade do solo** é responsável por medir a quantidade de água presente no solo. Ele funciona por meio de dois eletrodos que são inseridos no solo, criando uma corrente elétrica entre eles. Essa corrente elétrica é interrompida quando o solo está úmido, permitindo a medição da umidade.

O **sensor de umidade do ar** é responsável por medir a quantidade de vapor de água presente no ar. Ele é composto por um higrômetro, que é um dispositivo que mede a umidade do ar. O higrômetro é combinado com outros sensores para fornecer uma leitura precisa da umidade do ar.

O **sensor de temperatura** é responsável por medir a temperatura ambiente. Ele é composto por um termistor, que é um tipo de resistor cuja resistência varia com a temperatura. A resistência do termistor é medida e convertida em uma leitura de temperatura.

Esses sensores são conectados a um microcontrolador, como o **Arduino**, que é responsável por coletar, processar e enviar os dados de leitura. O microcontrolador também é responsável por controlar o funcionamento dos sensores e garantir a precisão das leituras.

<div align="center">
  <img src="https://user-images.githubusercontent.com/104802373/227652379-b39e78fe-d21c-4e9b-bb10-f166bc9d7916.png" width="900" height"800">
</div>
<div align="center"><b>Imagem acima faz uma leve referencia do circuito desenvolvido no tinkercad para uma melhor compreensão.</b></div>
