#include <stdio.h>

int main()
{
	int dinheiro;
	
	printf("informe a quantia em dinheiro: ");
	scanf("%d", &dinheiro);
	
	printf("o total perdido foi: %d", dinheiro % 7);
	
	return 0;
}