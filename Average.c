#include <stdio.h>

int main ()
{
	int quiz1;
	int quiz2;
	int quiz3;
	int aver;
	
	printf("Enter a number for Quiz 1: ");
	scanf("%d",&quiz1);
	
	printf("Enter a number for Quiz 2: ");
	scanf("%d",&quiz2);
	
	printf("Enter a number for Quiz 3: ");
	scanf("%d",&quiz3);
	
	aver = (quiz1 + quiz2 + quiz3)/3;
	printf("The Average Quiz for %d, %d and %d is: %d", quiz1, quiz2, quiz3, aver);

return 0;	
}

