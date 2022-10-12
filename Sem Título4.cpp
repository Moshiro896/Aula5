#include <stdio.h>

int main()
{
	float altura, massa;
	
	printf("informe a altura: ");
	scanf("%f", &altura);
	printf("informe a massa: ");
	scanf("%f", &massa);
	
	printf("o imc e: %f", massa / (altura * altura));
	
	return 0;
}