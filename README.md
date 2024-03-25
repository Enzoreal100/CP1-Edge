# CP1-Edge
## Detecção de luz com arduino para as adegas da Vinheria Agnello

Olá, professor! Seja bem-vindo ao nosso projeto do primeiro Chechpoint de Edge Computing!
Nosso grupo é composto por 5 alunos:

Enzo Gaião Real
Gabriel Henrique Padula
Gustavo Pasquini Lucas
Rodrigo Hydeik Mendes Nakata
Vitor Couto Victorino

Nosso projeto é baseado em 3 LEDs que acendem em casos específicos de luminosidade, onde o verde é ligado quando a situação está sobre controle e sem afetar a qualidade dos vinhos, usamos o valor de 2 lumens, representando uma sala escura, com quase nenhuma luz sendo emitida para a mesma. Os LEDs amarelo e vermelho, acendem em caso de alerta ou luminosidade crítica entrando a sala respectivamente, encontrado os valores em lumens nas ints "lim1" e "lim2".

Temos no arduíno (disponível em [https://www.tinkercad.com/things/g68p2i9tnIT-mighty-robo-bruticus/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=Tq3o37AieVuAOY-zoQDzqp7dTdbS8q0AULuOWi4KCdc]): 
- três LEDs ligados as portas 13, 12 e 11;
- Um Buzzer ligado a porta 9 com um resistor de 100 Ohms;
- Um LDR ligado a porta A0, com um resistor de 10k Ohms em um circuito;

No código, temos as ints que são usadas para evidenciar as portas de cada componente, int para o valor cru recebido pelo LDR, int para converter esse valor em Lumens.
Após o void setup, vemos em loop uma parte para a escrita dos valores detectados pelo LDR no console e dois ifs, sendo:
- O primeiro, para acender os LEDs em caso de luminosidade ok, em estado de alerta ou em estado crítico;
- O segundo, para o buzzer tocar na frequência 440hz (Lá padrão) ao caso de luminosidade crítica ou em estado de alerta.

e por fim, temos uma função para converter o valor cru do fotoresistor em Lumens (medida padrão de luminosidade), usando de medidas tiradas por nós com um sensor de luminosidade em uma sala de 1,5m2, sendo:
- 4 lumens, uma sala com somente a luz refletida da lua como fonte de luminosidade;
- 10 lumens, uma sala com uma forte fonte de luz, como um monitor LED ligado em branco com o máximo brilho.
e com isso, temos o projeto completo e funcional!



