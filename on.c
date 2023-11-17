#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter any num");
	scanf("%d",n);
	while(i<=n)
	{
		sum=sum+i;
		i++;	
	}
	printf("\n sum of %d num is %d",n,sum);
	return 0;
}
