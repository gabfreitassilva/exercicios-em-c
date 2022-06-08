#include <stdio.h>

int main() {
    char caractere;
    printf("Digite um caractere: ");
    caractere = getchar();

    printf("Caractere lido, representacao ASCII: %d\n", caractere);
    return 0;
}