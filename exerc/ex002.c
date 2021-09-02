#include <stdio.h>
int main() {
    int x, y, z;
    
    // Primeiro exemplo
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
    
   // Segundo exemplo
    /*
    x = y = 10;
    printf("x = %d \ny = %d\n", x, y);
    z = x++;
    printf("z = %d \nx = %d\n", z, x);
    z = ++x;
    printf("z = %d \nx = %d\n", z, x);
    x = -x;
    printf("x = %d\n", x);
    y++;
    printf("y = %d\n", y);
    */
}