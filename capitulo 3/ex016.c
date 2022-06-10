#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O seu antecessor e: %d \nO seu sucessor e: %d\n", antecessor, sucessor);
    return 0;
}