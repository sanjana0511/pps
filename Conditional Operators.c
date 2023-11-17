// Conditional Operators
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	(n>0)?printf("\n %d is a Positive Number",n ):printf("\n %d is a Negative Number",n);
	return 0;
}
