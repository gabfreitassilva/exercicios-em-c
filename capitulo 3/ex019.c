#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite suas quatro notas: ");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media das notas e de %.2f\n", media);
    return 0;
}