#include <stdio.h>

int main() {
    char caractere1, caractere2, caractere3;
    printf("Digite tres caracteres (sem espaco):");
    caractere1 = getchar();
    caractere2 = getchar();
    caractere3 = getchar();

    printf("Primeiro caractere: %c \nSegundo caractere: %c \nTerceiro caractere: %c\n", caractere1, caractere2, caractere3);
    return 0;
}