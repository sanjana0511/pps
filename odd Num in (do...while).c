#include<stdio.h>
int main()
{
	int i=1,n,on;
	printf("enter n value ");
	scanf("%d",&n);
	do
	{
		on=i*2-1;
		printf("\t %d",on);
		i++;
	}while(i<=n/2);
	return 0;
}
