#include <stdio.h>

int main() {
    float numero, quintaParte;

    printf("Digite um numero real qualquer: ");
    scanf("%f", &numero);

    quintaParte = numero / 5;

    printf("A quinta parte desse numero e: %f\n", quintaParte);
    return 0;
}