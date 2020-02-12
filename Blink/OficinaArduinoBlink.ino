// Oficina de Introdução a Arduino
// Acender e Piscar LED

/*    Lembretes:
 *  Qualquer dúvida, nos chame! :)
 
 *  Se estiver tendo problemas ao copiar o código, vá ao CodePile ;)
 
 *  Duas barras (//) servem para comentar, são ignorados pelo Arduino
 
 *  Cuidado ao conectar as coisas, não queremos fritar Arduino hoje rsrs 
 
*/

#define pinoLED 13                          // Definir LED como porta 13 (o compilador irá substituir todas as menções de "pinoLED" por "13")

void setup(){                               // Esta função irá configurar a porta 13 como de INPUT (entrada
pinMode (pinoLED, INPUT);
}

void loop() {                              // Esta função é onde o nosso código roda
  digitalWrite(pinoLED, HIGH);              // Liga o LED, colocando ele como HIGH 
  delay(1000);                              // Espera 1000 milisegundos (1 segundo) até a próxima ação
  digitalWrite(pinoLED, LOW);               // Desliga o LED, colocando ele como LOW 
  delay(100);                               // Espera 1000 milisegundos (1 segundo) até a próxima ação
}
