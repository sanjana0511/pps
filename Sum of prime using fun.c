//Sum of Prime nums using Functions (without RT With Args)
#include<stdio.h>
void sum(int end);
void main()
{
	int x;
	printf("find sum of all prime num between 1 to ");
	scanf("%d",&x);
	sum(x);
}
void sum(int end)
{
	int i,j,flag,s=0;
	for(i=2;i<=end;i++)
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
		if(flag==1)
		{
			printf("%d, ",i);
			s=s+i;
		}	
	}
	printf("sum of prime nums is %d",s);
}
