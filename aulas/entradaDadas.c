#include <stdio.h>
int main() {
    int numeroDigitado;
    printf("Digite um número: ");
    scanf("%d", &numeroDigitado); // entrada de dados
    printf("%d\n", numeroDigitado); // saída dos dados
    
    char nomeUsuario[20]; // declaração de strings devem conter o tamanho desejado entre os colchetes
    printf("Digite seu nome: ");
    scanf("%s", nomeUsuario); // entrada de strings não usam o "&"
    printf("%s\n", nomeUsuario); // saída de strings
}