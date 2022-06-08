#include <stdio.h>

int main() {
    int number1, number2;
    printf("Digite dois valores inteiros (separados por um espaco): ");
    scanf("%d%d", &number2, &number1);

    printf("O primeiro valor foi: %d \nO segundo valor foi: %d\n", number1, number2);
    return 0;
}