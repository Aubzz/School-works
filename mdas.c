#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int sum;
	int diff;
	int prod;
	int quo;
	printf("Enter First Number: ");	
	scanf("%d",&num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	sum=num1 + num2;
	printf("\nThe sum of %d and %d is: %d",num1, num2,sum);

	diff=num1 - num2;
	printf("\nThe difference of %d and %d is: %d",num1, num2, diff);

	prod = num1 * num2;
	printf("\nThe product of %d and %d is: %d",num1, num2, prod);

	quo = num1 / num2;
	printf("\nThe quotient of %d and %d is: %d", num1, num2, quo);

return 0;
}
