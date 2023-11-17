//fibonacci number using functions (without RT with Args)
#include<stdio.h>
void fibb(int n);
void main()
{
	int x;
	printf("enter number of terms");
	scanf("%d",&x);
	fibb(x);
}
void fibb(n)
{
	int a,b,c,i=1;
	a=0;
	b=1;
	c=0;
	printf("\n fibanacco terms");
	for (i=1; i<=n; i++)
	{
	printf("\n %d",c);
	a=b;
	b=c;
	c=a+b;
	}
}
