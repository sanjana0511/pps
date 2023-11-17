//sum of n natural with functions (with RT With Args)
#include<stdio.h>
int sum(int a);
int main()
{
	int x,s;
	printf("sum of numbers between 1 to ");
	scanf("%d",&x);
	s=sum(x);
	printf("\n\n sum of numbers between 1 to %d is %d",x,s);
}
int sum(int a)
{
	int i,sum1=0;
	for(i=1;i<=a;i++)
	{
		sum1=sum1+i;
	
	}
	return sum1;
}
