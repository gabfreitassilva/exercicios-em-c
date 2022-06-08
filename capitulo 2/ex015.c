#include <stdio.h>

int main() {
    char caractere;
    int number;
    float valor;

    printf("Digite um caractere qualquer: ");
    caractere = getchar();

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    printf("Digite um valor com casas decimais: ");
    scanf("%f", &valor);

    printf("\tCaractere lido: \"%c\" \n\tNumero inteiro lido: %d \n\tValor com casas decimais lido: %f\n", caractere, number, valor);
    return 0;
}