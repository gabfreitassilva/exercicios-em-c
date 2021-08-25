#include <stdio.h>
int main() {
    int i, valorUser;

    printf("Digite um valor: ");
    scanf("%d", &valorUser);

    for (i = 0; i != valorUser; i++) {
        printf("Volta %d\n", i);
    }
    
}