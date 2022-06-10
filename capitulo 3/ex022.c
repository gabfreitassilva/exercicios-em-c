#include <stdio.h>

int main() {
    float valorReais, valorDolar, dolarCotacao;

    printf("Digite um valor em R$ (reais): R$ ");
    scanf("%f", &valorReais);

    printf("Entre agora com a cotacao atual do dolar de $ 1,00 (Um dolar): ");
    scanf("%f", &dolarCotacao);

    valorDolar = valorReais / dolarCotacao;

    printf("Com essa cotacao voce poderia comprar $ %.2f\n", valorDolar);
    return 0;
}