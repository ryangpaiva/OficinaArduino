// Oficina de Introdução a Arduino
// Mexer no Servo / Demonstração do Alimentador de cachorro
/
*/
#include <Servo.h>  //Incluir biblioteca do Servo
#define pinoSERVO 7 // Definir o pino do servo como 7
#define pinoBOTAO 3 // Definir o pino do Botão como 3
 
Servo s; // Variável que representa o servo
int pos; // Variável que armazena a posição do servo
int leituraBOTAO = 0; // variável para a leitura do botão
 
void setup ()
{
  s.attach(pinoSERVO);  // Mostrar qual o pino do servo
  Serial.begin(9600);   // Iniciar o monitor serial
  s.write(20);          // Inicia motor posição zero
  pinMode(pinoBOTAO, INPUT); // Especifica o botão como INPUT (entrada)
}
 
void loop()
{
  
  char tecla;             // "variável" que armazena o valor da tecla
  tecla = Serial.read();  // Mostra que a tecla é o que é lido no monitor serial

  leituraBOTAO = digitalRead(pinoBOTAO); // Mostra que a leitura do Botão é o que é mandado pelo botão
  
  if(tecla == 'C') {                     // Se a tecla for igual a "C":
  for(pos = 0; pos < 90; pos++)    // loop clássico: Para pos = o, enquanto pos for menor que 90, adicionar + 1 até pos ficar menor que 90
  {
    s.write(pos);                  // Mandar servo escrever essa posição do servo
  delay(10);                       // Pequeno delay para evitar problemas
  }
delay(1500);   
  for(pos = 90; pos >= 20; pos--)
  {
    s.write(pos);
    delay(10);
  }
  }

  
  if(leituraBOTAO == HIGH) {    // Se a leitura do botão for "HIGH" ou "1":
  for(pos = 0; pos < 90; pos = pos+1) 
  {
    s.write(pos);
  delay(10);
  }
delay(1500);
  for(pos = 90; pos >= 20; pos--)
  {
    s.write(pos);
    delay(10);
  }
}
}
