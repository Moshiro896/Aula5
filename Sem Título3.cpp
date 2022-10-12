#include <stdio.h>

int main()
{
	float a, b, c;
	
	printf("digite o primeiro numero: ");
	scanf("%f", &a);
	printf("digite o segundo numero: ");
	scanf("%f", &b);
	printf("digite o terceiro numero: ");
	scanf("%f", &c);
	
	printf("primeira funcao: %f \n", (a * b) / c);
	printf("segunda funcao: %f \n", (a * a) + b + c * 5);
	printf("terceira funcao: %f \n", a * b * c + b + (c / 3) * 5 - 1);
	printf("quarta funcao: %f", ((a * b * c) * (a * b * c) * (a * b * c)) / 2);
	
	return 0;
}
