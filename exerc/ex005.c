#include <stdio.h>
int main() {
    float notaAluno, primeiraNota, segundaNota, media;
    printf("Qual foi a sua nota: ");
    scanf("%f", &notaAluno);
    if(notaAluno > 6.0) {
        printf("Você foi aprovado acima da média.\n");
    }
    else {
        printf("Você não atingiu a média para ser aprovado.\n");
    }
    printf("A média do exame é 6.0\n");

    printf("Qual foi a sua primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Qual foi a sua segunda nota: ");
    scanf("%f", &segundaNota);
    media = (primeiraNota + segundaNota) / 2;
    if(media >= 6) {
        printf("Aprovado!\n");
    }
    else {
        printf("Reprovado!\n");
    }
}