#include <stdio.h>
int main() {
    float media, primeiraNota, segundaNota;
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);
    media = ((primeiraNota * 2) + (segundaNota * 3)) / (2 + 3);
    if(media >= 6) {
        printf("Aprovado!\n");
    }
    else {
        printf("Reprovado!\n");
    }
    printf("A sua média foi de %.2f\n", media);
}