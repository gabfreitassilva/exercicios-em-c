#include <stdio.h>
int main() {
    int dias;
    float anos;
    printf("Digite um número de dias: ");
    scanf("%d", &dias);
    anos = dias / 365.0;
    printf("%d dias equivalem a %.2f anos\n", dias, anos);
}