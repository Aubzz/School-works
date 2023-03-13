#include <stdio.h>
int main()
{ 
	int num;
	
	printf("Enter a number from 1-7: ");
	scanf("%d", &num);
	
	if (num == 1)
		printf("1 is equvalent to Monday");
	else if(num == 2)
		printf("2 is equvalent to Tuesday");
	else if (num == 3)
		printf("3 is equvalent to Wednesday");
	else if(num == 4)
		printf("4 is equvalent to Thursday");
	else if(num == 5)
		printf("5 is equvalent to Friday");
	else if(num == 6)
		printf("6 is equvalent to Saturday");
	else if(num == 7)
		printf("7 is equvalent to Sunday");
	else
		printf("Invalid input number");
return 0;
}
