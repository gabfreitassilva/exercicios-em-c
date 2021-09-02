#include <stdio.h>
int main() {
    int x, y, z;
    printf("Digite três número: ");
    scanf("%d %d %d", &x, &y, &z);
    y = x++;
    printf("%d\n", y);
    z = ++y;
    printf("%d\n", z);
    x = x - y +z;
    printf("%d\n", x);
    y = x - z--;
    printf("%d\n", y);
}