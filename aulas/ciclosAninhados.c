#include <stdio.h>
int main() {
    int i, valorUser;

    printf("Digite um valor: ");
    scanf("%d", &valorUser);

    for (i = 1; i <= valorUser; i++) {
        printf("Volta %d\n", i);
    }
    
}