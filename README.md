# 🌻 GiraSolar_Energy
---------------------------------
# **👨🏻‍🚀❤🌻 What's Girasolar?**
---------------------------------

![image](https://user-images.githubusercontent.com/65203015/124290698-232a0d80-db2a-11eb-90f7-8b1aba7dc0e1.png)

---------------------------------
# **🪐Esquema de ligação**
---------------------------------

![image](https://user-images.githubusercontent.com/65203015/124290899-5ec4d780-db2a-11eb-9971-817b557b4b2c.png)

---------------------------------
# **🧱Materiais Utilizados No Projeto**
---------------------------------

– 1 Placa Uno SMD + Cabo USB para Arduino;

– 1 Mini Painel Solar Fotovoltaico 12V 125mA;

– 2 Micro Servo Motor 9g SG90 180°;

– 4 LDR Sensor de Luminosidade 5mm;

– 1 Fonte de Alimentação Chaveada 5VDC 1A.

----------------------------------
# **Como Funciona o Código?🤷🏻‍♂️**
----------------------------------
 🚀 No Programa é declarado:
- 2 servos motores que correspondem ao **Eixo X** e **Eixo Y**
- 4 LDR's (FotoResistores) usados para receber o valor analógico de cada direção 
(Inferior Direito e Esquerdo / Superior Direito e Esquerdo) baseado na quantidade de luz captada.

 🚀Com esses valores conseguimos fazer uma média e com o resultado sabemos qual a posição que está com maior luminosidade
   e com isso direcionamos os servos para irem para essa posição

 🚀Basicamente fazemos isso atráves da função IF & Else:
   
   Ex: Se (If) o valor do LDR "A" for maior que "B" faça que o servo se mova para a posição "X"
    Porém se (If Else) o valor do LDR "B" for maior que "A" faça que o servo se mova para a posição "Y"
    
  👨🏻‍🚀Viu como é fácil, use o exemplo do código e tente você mesmo desenvolver o seu próprio projeto!
   
  🌌Tenho certeza que irá conseguir!
  
 ------------------------------------
 # ** 🌻 Primeiro Protótipo**
 ------------------------------------
    
    

