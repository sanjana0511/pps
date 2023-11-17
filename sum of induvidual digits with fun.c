//sum of induvidual digits with functions (with RT With Args)
#include<stdio.h>
int sum(int a);
int main()
{
	int x,s;
	printf("enter any number more than one digit");
	scanf("%d",&x);
	s=sum(x);
}
int sum(int a)
{
	int on,rem,sum1=0;
	on=a;
	while(a!=0)
	{
		rem=a%10;
		sum1=sum1+rem;
		a=a/10;
	}
	return sum1;
}
