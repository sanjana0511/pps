// swapping of nums without RT without args (function type-1)
#include<stdio.h>
void swap();
void main()
{
	swap();
}
void swap()
{
	int a,b,temp;
	printf("enter two values");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n swapped numbers are %d %d",a,b);	
}
