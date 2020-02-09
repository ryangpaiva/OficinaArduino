// Oficina de Introdução a Arduino
// Ligar e Desligar LED com Botão + Monitor Serial

#define pinoLED 13                  // Definir LED como porta 13 (o compilador irá substituir todas as menções de "pinoLED" por "13") (TODAS ETAPAS)
//#define pinoLED2 11               // Definir LED2 como porta 11 (o compilador irá substituir todas as menções de "pinoLED2" por "11") (Competição)
#define pinoBOTAO 12                // Definir Botão como porta 12 (o compilador irá substituir todas as menções de "pinoBOTAO" por "12") (TODAS ETAPAS)
//#define pinoBOTAO2 10             // Definir Botão 2 como porta 10 (o compilador irá substituir todas as menções de "pinoBOTAO2" por "10") (Competição)

int leituraBOTAO = 0;               // Criar uma variável que irá armazenar a leitura do Botão (0 ou 1; HIGH ou LOW)(TODAS AS ETAPAS)
//int leituraBOTAO2 = 0             // Criar uma variável que irá armazenar a leitura do Botão 2 (0 ou 1; HIGH ou LOW)(Competição)


void setup(){                              // Void setup prepara o nosso código para o void loop: Usa para inicializar variáveis, configurar o modo dos pinos(INPUT ou OUTPUT), inicializar bibliotecas, etc.(TODAS AS ETAPAS)                          
pinMode (pinoBOTAO, INPUT);                // Configura o Botão como INPUT (Entrada) (TODAS AS ETAPAS)
//pinMode (pinoBOTAO2, INPUT);             // Configura o Botão 2 como INPUT (Entrada) (Competição)
pinMode (pinoLED, OUTPUT);                 // Configura nosso LED como OUTPUT (TODAS AS ETAPAS)
Serial.begin(9600);                        // Configurando baud rate como 9600 (TODAS AS ETAPAS)
}

void loop(){
  leituraBOTAO = digitalRead(pinoBOTAO);   // Dar um valor (0,1) à nossa variável leituraBOTAO, a partir dessa função digitalRead
//leituraBOTAO2 = digitalRead(pinoBOTAO2); // Dar um valor (0,1) à nossa variável leituraBOTAO2, a partir dessa função digitalRead(ler) (Competição)
 if(leituraBOTAO == HIGH){                 // Se a leitura do botão for 1 (HIGH), fazer:
  digitalWrite(pinoLED, HIGH);             // Liga nosso LED, colocando ele como HIGH digital(porta digital)write(escreve)
  Serial.println("LED ligado");
  delay(800);
  digitalWrite(pinoLED,LOW);
 }
 else{
  digitalWrite(pinoLED, LOW);
  }
  /*
 if(leituraBOTAO2 == HIGH){
  digitalWrite(pinoLED2, HIGH);
  Serial.println("LED Ligado");
  delay(800);
  digitalWrite(pinoLED2, LOW);
  delay(800);
  digitalWrite(pinoLED2, HIGH);
  Serial.println("LED Ligado");
  delay(800);
  digitalWrite(pinoLED2, LOW);
 else{
  digitalWrite(pinoLED2, LOW); 
 }
  }
  */
}
