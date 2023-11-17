//Odd Num in a Interval of Numbers
#include<stdio.h>
int main()
{
	int n,i,on;
	printf("Enter Any Num");
	scanf("%d",&n);
	for(i=0;(i<=n/2);i++)
	{
	on=2*i+1;
	printf("\t %d",on);
	}
	return 0;
}
