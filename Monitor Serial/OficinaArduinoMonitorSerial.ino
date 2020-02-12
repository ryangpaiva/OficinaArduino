// Oficina de Introdução a Arduino
// Mexer no Monitor Serial
/*    Lembretes:
 *  Qualquer dúvida, nos chame! :)
 
 *  Se estiver tendo problemas ao copiar o código, vá ao CodePile ;)
 
 *  Duas barras (//) servem para comentar, são ignorados pelo Arduino (não precisa escrever oq estiver nelas)
 
 *  Cuidado ao conectar as coisas, não queremos fritar Arduino hoje rsrs 
 
*/

#define pinoLED 13                          // Definir LED como porta 13 (o compilador irá substituir todas as menções de "pinoLED" por "13") (TODAS ETAPAS)
int i = 0;                                  // Definindo nossa variável para contagem de piscadas (ETAPA 3)

void setup(){                               // Void setup prepara o nosso código para o void loop: Usa para inicializar variáveis, configurar o modo dos pinos(INPUT ou OUTPUT), inicializar bibliotecas, etc.(TODAS AS ETAPAS)                          
pinMode (pinoLED, INPUT);                   // Configura nosso LED como OUTPUT (TODAS AS ETAPAS)
Serial.begin(9600);                         // Configurando baud rate como 9600 (ETAPA 1,2,3)
Serial.println("Monitor Serial iniciado com sucesso!"); // Checando se o Monitor Serial está funcionando (ETAPA 1,2,3)
}

//Etapa 1
*void loop() {
  digitalWrite(pinoLED, HIGH);              // Liga nosso LED, colocando ele como HIGH digital(porta digital)write(escreve)             
  Serial.println("LED ligado");             // Escreve no Monitor Serial
  delay(1000);                              // Um intervalo de 1000 milissegundos (1 seg)
  digitalWrite(pinoLED, LOW);               // Desliga nosso LED, colocando ele como LOW digital(porta digital)write(escreve)   
  Serial.println("Led desligado");          // Escreve no Monitor Serial   
  delay(1000);                              // Um intervalo de 1000 milissegundos (1 seg)                         
}
*/

//Etapa 2
* void loop(){
  digitalWrite(pinoLED, HIGH); 
  Serial.println("LED ligado");
  delay(1000);
  digitalWrite(pinoLED, LOW);
  Serial.println("Led desligado");
  i = i + 1;                                // Aumenta em 1 unidade nossa variável de contagem (Definida lá em cima) a cada loop
  Serial.println(i);                        // Escreve o valor da nossa variável no Monitor Serial
  delay(1000);                             
  }

*/

//Etapa 3  
*  void loop(){
  char tecla;                               // Define uma nova variável de caractere (char)
  tecla = Serial.read();                    // Muda o valor da nossa variável "tecla" de acordo com oque é lido no Monitor Serial
  if(tecla == 'L'){                         // Se o valor da nossa variável tecla for "L" ,então:
    digitalWrite(pinoLED, HIGH);            
    Serial.println("Led Ligado");
  }
  if(tecla == 'D'){                         // Se o valor da nossa variável tecla for "D" ,então:
    digitalWrite(pinoLED, LOW); 
    Serial.println("Led Desligado");            
    }
  delay(1000);
}
*/
