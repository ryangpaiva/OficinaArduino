// Oficina de Introdução a Arduino
// Tocar Ode a Alegria de Beethoven com o buzzer
/*    Lembretes:
 *  Qualquer dúvida, nos chame! :)
 
 *  Se estiver tendo problemas ao copiar o código, vá ao CodePile ;)
 
 *  Duas barras (//) servem para comentar, são ignorados pelo Arduino (não precisa escrever oq estiver nelas)
 
 *  Cuidado ao conectar as coisas, não queremos fritar Arduino hoje rsrs 
 
*/


// Definição da porta do buzzer
#define buzzer 8 // Define a entrada digital onde o buzzer está conectado

// Definição das durações das notas e intervalo
#define tempo 400 // Define o tempo padrão de duração das notas
#define intervalo 420 // Define o intervalo padrão entre as notas
#define intervaloLongo 500 // Define o intervalo longo padrão entre as notas

// Definição das Notas Musicais

#define G4 392.00 // Define a frequência de G4 (Sol 4) como 392.00Hz
#define A4 440.00 // Define a frequência de A4 (Lá 4) como 440.00Hz
#define B4 493.88 // Define a frequência de B4 (Sí 4) como 493,88Hz
#define C5 523.25 // Define a frequência de C5 (Dó 5) como 523.25Hz
#define D5 587.33 // Define a frequência de D5 (Ré 5) como 587.33Hz

void setup() {
  pinMode(buzzer, OUTPUT); // Define o pino digital do buzzer como saída
}

void loop() {
  /* tone emite um sinal em uma frequência específica. 
  Sintaxe: tone(pinodesaída, frequência, duração);*/

  // PARTE 1
  partePrincipal();// Toca a parte principal, chamando a função
  tone(buzzer, B4, tempo); // Emite Sí 4
  delay(intervaloLongo); // Espera o intervalo longo entre as notas
  tone(buzzer, A4, tempo); // Emite Lá 4
  delay(intervalo/2); // Espera metade do intervalo entre as notas
  tone(buzzer, A4, tempo); // Emite Lá 4
  delay(intervalo*2); // Espera o dobro do intervalo entre as notas

  // PARTE 2
  partePrincipal();// Toca novamente a parte principal
  tone(buzzer, B4, tempo); // Emite Sí 4
  delay(intervaloLongo); // Espera o intervalo longo entre as notas
  tone(buzzer, G4, tempo); // Emite Sol 4
  delay(intervalo/2); // Espera metade do intervalo entre as notas
  tone(buzzer, G4, tempo); // Emite Sol 4
  delay(intervalo*2); // Espera o dobro do intervalo entre as notas

  parte3(); // Toca a parte 3
}

// Funções das partes da música
void partePrincipal(){ // Toca a parte padrão, que se repete
  notaB4(); // Emite Sí 4 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  notaC5(); // Emite Dó 5 no intervalo padrão
  notaD5(); // Emite Ré 5 no intervalo padrão
  notaD5(); // Emite Ré 5 no intervalo padrão
  notaC5(); // Emite Dó 5 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  notaA4(); // Emite Lá 4 no intervalo padrão
  notaG4(); // Emite Sol 4 no intervalo padrão
  notaG4(); // Emite Sol 4 no intervalo padrão
  notaA4(); // Emite Lá 4 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
}

void parte3(){ // Toca a 3ª parte
  tone(buzzer, A4, tempo); // Emite Lá 4
  delay(intervalo+(intervalo/2)); // Espera um intervalo e meio entre as notas
  notaA4(); // Emite Lá 4 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  
  tone(buzzer, G4, tempo); // Emite Sol 4
  delay(intervalo+(intervalo/4)); // Espera um intervalo e um quarto entre as notas
  
  notaA4(); // Emite Lá 4 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  notaC5(); // Emite Dó 5 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  
  tone(buzzer, G4, tempo); // Emite Sol 4
  delay(intervalo+(intervalo/4)); // Espera um intervalo e um quarto entre as notas

  notaB4(); // Emite Sí 4 no intervalo padrão
  notaC5(); // Emite Dó 5 no intervalo padrão
  notaB4(); // Emite Sí 4 no intervalo padrão
  notaA4(); // Emite Lá 4 no intervalo padrão
  notaG4(); // Emite Sol 4 no intervalo padrão
  notaA4(); // Emite Lá 4 no intervalo padrão
  
  tone(buzzer, D5, tempo); // Emite Ré 5
  delay(intervalo*2); // Espera duas vezes o intervalo entre as notas
}

// Funções das notas com durações e intervalos padrões

void notaB4() { // Define a nota padrão Sí 4
  tone(buzzer, B4, tempo); // Emite Sí 4
  delay(intervalo); // Espera o intervalo entre as notas
}

void notaC5() { // Define a nota padrão Dó 5
  tone(buzzer, C5, tempo); // Emite Dó 5
  delay(intervalo); // Espera o intervalo entre as notas
}

void notaD5() { // Define a nota padrão Ré 5
  tone(buzzer, D5, tempo); // Emite Ré 5
  delay(intervalo); // Espera o intervalo entre as notas
}

void notaA4() { // Define a nota padrão Lá 4
  tone(buzzer, A4, tempo); // Emite Lá 4
  delay(intervalo); // Espera o intervalo entre as notas
}

void notaG4() { // Define a nota padrão Sol 4
  tone(buzzer, G4, tempo); // Emite Sol 4
  delay(intervalo); // Espera o intervalo entre as notas
}
