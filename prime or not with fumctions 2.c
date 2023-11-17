//prime or not in functions (without RT with Args)
#include<stdio.h>
void prime(int a);
void main()
{
	int x;
	printf(" The prime numbers between 1 to  ");
	scanf("%d",&x);
	prime(x);
}
void prime(int a)
{
	int i,j,flag;
	for(i=2;i<=a;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag=1);
		{
			printf("%d, ",i);
		}
	}
}

