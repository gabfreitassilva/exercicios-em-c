#include <stdio.h>

int main() {
    int numero1, numero2, numero3, soma;

    printf("Digite tres valores inteiros: ");
    scanf("%d%d%d", &numero1, &numero2, &numero3);

    soma = numero1 + numero2 + numero3;

    printf("A soma dos tres valores e: %d\n", soma);
    return 0;
}