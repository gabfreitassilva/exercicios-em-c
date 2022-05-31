#include <stdio.h>
#include "operacoes.h"

int main() {
	int x, y, z;
	char ch;

	printf("Escolha a operacao (+, -, *, /): ");
	ch = getchar();

	printf("Digite agora 2 numeros: ");
	scanf("%d %d", &x, &y);

	switch(ch) {
		case '+':
			z = soma(x, y);
			break;
		case '-':
			z = subtracao(x, y);
			break;
		case '*':
			z = multiplicacao(x, y);
			break;
		case '/':
			z = divisao(x, y);
			break;
		default:
			z = soma(x, y);
	}

	printf("Resultado da operacao = %d\n", z);

	return 0;
}
