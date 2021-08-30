#include <stdio.h>
int main() {
    int x, y, z;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    printf("Digite o terceiro número: ");
    scanf("%d", &z);
    printf("%d\n", y = x++);
    printf("%d\n", z = ++y);
    printf("%d\n", x = x-y+z);
    printf("%d\n", y = x - z--);
}