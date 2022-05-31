#include <stdio.h>

int soma(int a,int b) {
	return a + b;
}
int subtracao(int a,int b) {
	return a - b;
}
int multiplicacao(int a,int b) {
	return a * b;
}
int divisao(int a,int b) {
	return a / b;
}

int main() {
	int x, y, z;
	char ch;

	printf("Qual operacao voce deseja (+, -, *, /): ");
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

	printf("Resultado = %d\n", z);

	return 0;
}
