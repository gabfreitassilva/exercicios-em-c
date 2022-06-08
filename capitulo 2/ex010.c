#include <stdio.h>

int main() {
    int day, month, year;
    printf("Digite uma data qualquer (exemplo - 03 02 2002): ");
    scanf("%d%d%d", &day, &month, &year);

    printf("A data inserida foi %d/%d/%d\n", day, month, year);
    return 0;
}