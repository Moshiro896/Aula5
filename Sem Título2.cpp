#include <stdio.h>

int main()
{
	float n0, n1;
	
	printf("digite o primeiro numero: ");
	scanf("%f", &n0);
	printf("digite o segundo numero: ");
	scanf("%f", &n1);
	
	printf("multiplicacao: %f \n", n0 * n1);
	printf("divisao: %f \n", n0 / n1);
	printf("adicao: %f \n", n0 + n1);
	printf("subtracao: %f", n0 - n1);
	
	return 0;
}
