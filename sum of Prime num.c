#include<stdio.h>
int sum()
{
	int i,j,end,flag,s=0;
	printf("find sum of all prime num between 1 to ");
	scanf("%d",&end);
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
	return 0;
}
