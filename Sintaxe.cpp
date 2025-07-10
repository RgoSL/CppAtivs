// Padrão de Códigos Assim: Variáveis, Setup, Loop.

// Acima do Setup, são Definidas as Váriaveis Utilizadas.

void setup(){ //Setup, aqui são Definidas as Execuções Únicas(só vão ocorrer uma vez). Além das "Configurações" do Código, como Declarações de Funções e os Objetivos em Questão.

//Exemplos de Keywords: HIGH, LOW, OUTPUT, public, private, main, if, else...
//Funções padrão: Serial.beggin(Parâmetro da velocidade de transmissão em bits, varia de acordo com o componente); , pinMode(nLEDs,OUTPUT);
//Dicas -> "Serial" e "digital" dizem respeito ao tipo de tela do sistema ligado. 
  
  Serial.begin(9600); // Serial Configurado.
  pinMode(pinoLED, OUTPUT);
  
}

void loop(){ //Aqui a Mágica Acontece, Dentro do "loop", os Comandos Ocorrem Repetidas Vezes, um Medidor de Temperatura Declarado aqui Fará o Monitoramento Constantemente, por Exemplo.

//Este Código faz um LED Piscar, Acendendo e Apagando.

digitalWrite(pinoLED, HIGH); //HIGH significa passagem de energia, ou seja, liga o LED.
Serial.println("LED está aceso."); //Mensagem de status para o usuário.
delay(1000); 

  digitalWrite(pinoLED, LOW); //LOW significa "pouca" ou "nada" de energia, ou seja, o LED desliga.
  Serial.println("LED está apagado.");
  delay(1000); //Entre () está o tempo de ativação das execuções, medidos em milissegundos (1 segundo no exemplo).
}