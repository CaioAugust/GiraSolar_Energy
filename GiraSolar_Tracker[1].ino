/* 
Programa: GiraSolar_Tracker
Autor: Caio Augusto
--------------------------
Como o Código Funciona?
R: No Programa é declarado:
- 2 servos motores que correspondem ao **Eixo X** e **Eixo Y**
- 4 LDR's (FotoResistores) usados para receber o valor analógico de cada direção 
(Inferior Direito e Esquerdo / Superior Direito e Esquerdo) baseado na quantidade de luz captada.
--------------------------
   Com esses valores conseguimos fazer uma média e com o resultado sabemos qual a posição que está com maior luminosidade
   e com isso direcionamos os servos para irem para essa posição
--------------------------
   Basicamente fazemos isso atráves da função IF & Else:
Ex: Se (If) o valor do LDR "A" for maior que "B" faça que o servo se mova para a posição "X"
    Porém se (If Else) o valor do LDR "B" for maior que "A" faça que o servo se mova para a posição "Y"
--------------------------
*/

#include <Servo.h>
//Declarando Servos Motores
Servo servohori;
int servoh = 0;
int servohLimitHigh = 160;
int servohLimitLow = 20;

Servo servoverti; 
int servov = 0; 
int servovLimitHigh = 160;
int servovLimitLow = 20;
//Declarando LDR's 
int ldrtopl = 2; //Superior Esquerdo LDR
int ldrtopr = 1; //Superior Direito LDR
int ldrbotl = 3; //Inferior Direito LDR
int ldrbotr = 0; //Inferior Esquerdo LDR

 void setup () 
 {
  servohori.attach(10);
  servohori.write(0);
  servoverti.attach(9);
  servoverti.write(0);
  delay(500);
 }

void loop()
{
  servoh = servohori.read();
  servov = servoverti.read();
  //Ler valores de cada LDR
  int topl = analogRead(ldrtopl);
  int topr = analogRead(ldrtopr);
  int botl = analogRead(ldrbotl);
  int botr = analogRead(ldrbotr);
  //Media dos valores dos LDR's
  int avgtop = (topl + topr) / 2; 
  int avgbot = (botl + botr) / 2; 
  int avgleft = (topl + botl) / 2;
  int avgright = (topr + botr) / 2;

   //Orientação dos servos com base no       resultado das médias
 
     if (avgtop < avgbot)
  {
    servoverti.write(servov +1);
    if (servov > servovLimitHigh) 
     { 
      servov = servovLimitHigh;
     }
    delay(10);
  }
  else if (avgbot < avgtop)
  {
    servoverti.write(servov -1);
    if (servov < servovLimitLow)
  {
    servov = servovLimitLow;
  }
    delay(10);
  }
  else 
  {
    servoverti.write(servov);
  }
  
  if (avgleft > avgright)
  {
    servohori.write(servoh +1);
    if (servoh > servohLimitHigh)
    {
    servoh = servohLimitHigh;
    }
    delay(10);
  }
  else if (avgright > avgleft)
  {
    servohori.write(servoh -1);
    if (servoh < servohLimitLow)
     {
     servoh = servohLimitLow;
     }
    delay(10);
  }
  else 
  {
    servohori.write(servoh);
  }
  delay(50);
}
