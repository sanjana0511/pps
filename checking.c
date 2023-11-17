#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("\n enter any num");
	scanf("%d",n);
	do
	{
		sum=sum+i;
		++i;
	}
	while(i<=n);
	printf("\n sum of %d num is %d",n,sum);
	return 0;
}
