#include <stdio.h>

int main() {
    char caractere;
    printf("Digite um caractere qualquer: ");
    caractere = getchar();

    printf("O caractere lido foi: \"%c\"\n", caractere);
    return 0;
}