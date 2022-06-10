#include <stdio.h>

int main() {
    float velocidadeKm, velocidadeMs;

    printf("Digite uma velocidade(km/h): ");
    scanf("%f", &velocidadeKm);

    velocidadeMs = velocidadeKm / 3.6;

    printf("sua velocidade convertida em metros por segundo e %.2f m/s\n", velocidadeMs);
    return 0;
}