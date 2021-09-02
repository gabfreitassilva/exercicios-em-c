#include <stdio.h>
int main() {
    int i, j;
    printf("Informe dois número inteiros: ");
    scanf("%d %d", &i, &j);
    printf("Primeiro número = %d e Segundo número = %d\n", i, j);
    printf("%d == %d e %d\n", i, j, i == j);
    printf("%d != %d e %d\n", i, j, i != j);
    printf("%d <= %d e %d\n", i, j, i <= j);
    printf("%d >= %d e %d\n", i, j, i >= j);
    printf("%d < %d e %d\n", i, j, i < j);
    printf("%d > %d e %d\n", i, j, i > j);
}