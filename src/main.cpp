#include <Arduino.h>

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT); // Inicializa o LED_BUILTIN pin como output (saída)
}

void loop()
{
    digitalWrite(LED_BUILTIN, LOW);  // Liga o LED
    delay(1000);                      // Espera um segundo
    digitalWrite(LED_BUILTIN, HIGH); // Desliga o LED
    delay(1000);                      // Espera dois segundos
}