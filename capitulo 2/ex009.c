#include <stdio.h>

int main() {
    float valor1, valor2;
    printf("Digite dois valor com casas decimais (separads por um espaco): ");
    scanf("%f%f", &valor1, &valor2);

    printf("O primeiro valor foi: %f \nO segundo valor foi: %f\n", valor2, valor1);
    return 0;
}