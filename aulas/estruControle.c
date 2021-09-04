#include <stdio.h>
int main() {
    int idadeUser;
    printf("Qual a sua idade: ");
    scanf("%d", &idadeUser);
    if(idadeUser > 18) {
        printf("Pode tirar carteira de motorista.\n");
    }
    else if(idadeUser == 18) {
        printf("Quase que não vai heim, mas você pode tirar sim sua carteira.\n");
    }
    else {
        printf("Hoje não é o seu dia de tirar a carteira.\n");
    }
}