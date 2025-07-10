// Aqui é Definido os Valores dos LEDs
const int ledPins[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // Temos 13 LEDs em Questão

// Aqui é uma Matriz que Mapea, Conforme o Número Digitado, Qual é o Padrão que Deve ser Aceso ou Desligado.
const int mapPins[][13] = {
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0}, // 0
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 1
    {1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0}, // 2
    {1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0}, // 3
    {0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0}, // 4
    {1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0}, // 5
    {1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0}, // 6
    {1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0}, // 8
    {1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0}  // 9
};

void setup() {
    // Aqui Ocorre a Transformação dos Valores Para a Exibição na Placa.
    for (int i = 0; i < 13; i++) {
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW); // Inicia com os LEDs Desligados.
    }

    Serial.begin(9600);
    Serial.println("Digite um número (0-9):");
}

void loop() {
    if (Serial.available()) {
        int num = Serial.parseInt(); //A Váriavel "num" é a que Recebe o Valor de Entrada.
        if (num >= 0 && num <= 9) {
            for (int i = 0; i < 13; i++) {
                digitalWrite(ledPins[i], mapPins[num][i]);  //Num é Passada Para a Matriz "mapPins", e o Programa Procura seu Valor Dentro Dela.
            }
        }
        Serial.println("Digite um número (0-9):");
    }
}