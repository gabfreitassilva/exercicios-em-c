#include <stdio.h>

int main() {
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);

    printf("Valor lido em forma de notacao cientifica: %e\n", num);
    return 0;
}