//Area and Perimeter of a Square
#include<stdio.h>
int main()
{
	int s,A=0,P=0;
	printf("Enter value of Side of Square");
	scanf("%d",&s);
	A=s*s;
	P=4*s;
	printf("\nArea of Square is %d",A);
	printf("\n Perimeter of Square is %d",P);
	return 0;
}
