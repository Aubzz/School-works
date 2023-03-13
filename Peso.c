#include <stdio.h>

int main()
{
	int peso;
	int doll;
	int yen;
	
	printf("Enter how much dollar you have?: ");
	scanf("%d",&doll);
	
	peso = doll*51.50;
	printf("%d dollars is equivalent to %d pesos\n", doll, peso);


return 0;	
}

