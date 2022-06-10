#include <stdio.h>

int main() {
    int idadeUsuario, anoNascimento;

    printf("Digite a sua idade: ");
    scanf("%d", &idadeUsuario);

    anoNascimento = 2022 - idadeUsuario;

    printf("Voce nasceu no ano de %d\n", anoNascimento);
    return 0;
}