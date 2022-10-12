#include <stdio.h>

int main()
{
	float base, altura;
	
	printf("informe a base: ");
	scanf("%f", &base);
	printf("informe a altura: ");
	scanf("%f", &altura);
	
	printf("a area e: %f", (base * altura) / 2);
	
	return 0;
}