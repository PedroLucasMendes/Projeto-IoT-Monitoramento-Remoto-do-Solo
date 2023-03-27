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

## 💻 Montagem do Circuito
O circuito  é composto por diversos componentes eletrônicos que trabalham em conjunto para fornecer informações precisas sobre as condições climáticas e do solo.

O **sensor de umidade do solo** é responsável por medir a quantidade de água presente no solo. Ele funciona por meio de dois eletrodos que são inseridos no solo, criando uma corrente elétrica entre eles. Essa corrente elétrica é interrompida quando o solo está úmido, permitindo a medição da umidade.

O **sensor de umidade do ar** é responsável por medir a quantidade de vapor de água presente no ar. Ele é composto por um higrômetro, que é um dispositivo que mede a umidade do ar. O higrômetro é combinado com outros sensores para fornecer uma leitura precisa da umidade do ar.

O **sensor de temperatura** é responsável por medir a temperatura ambiente. Ele é composto por um termistor, que é um tipo de resistor cuja resistência varia com a temperatura. A resistência do termistor é medida e convertida em uma leitura de temperatura.

Esses sensores são conectados a um microcontrolador, como o **Arduino**, que é responsável por coletar, processar e enviar os dados de leitura. O microcontrolador também é responsável por controlar o funcionamento dos sensores e garantir a precisão das leituras.

<div align="center">
  <img src="https://user-images.githubusercontent.com/104802373/227652379-b39e78fe-d21c-4e9b-bb10-f166bc9d7916.png" width="900" height"800">
</div>
<div align="center"><b>Imagem acima faz uma leve referencia do circuito desenvolvido no tinkercad para uma melhor compreensão.</b></div>
</br>
<div align="center">
  <img src="https://user-images.githubusercontent.com/104802373/228059403-70b80a34-0428-49b7-be74-ad58c4acb247.png" width="300" height "300">
</div>
<div align="center"><b>Imagem acima é o circuito pronto.</b></div>

## :iphone: LoRa
Observa-se na imagem que existe um shield chamado Dragino, onde o mesmo faz a comunicação sem fio. Utilizando um chip chamado de LoRa, uma tecnologia de comunicação sem fio de longo alcance, que utiliza modulação de espalhamento espectral para transmitir dados em baixa taxa de bits e com baixo consumo de energia. Essa tecnologia é ideal para aplicações de IoT (Internet das Coisas) que requerem comunicação de longa distância, com baixo custo e baixo consumo de energia, como monitoramento ambiental, rastreamento de ativos e automação industrial. Além disso, a tecnologia LoRa permite a criação de redes de sensores sem fio, com alcance de até 15 km em áreas urbanas e 50 km em áreas rurais, o que a torna uma opção interessante para projetos que envolvem grandes áreas geográficas.
