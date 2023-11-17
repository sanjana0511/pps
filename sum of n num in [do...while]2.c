//sum of n natural nums using do....while loop
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter any num");
	scanf("%d",n);
	do
	{
		sum=sum+i;
		++i;
	}
	while(i<=n);
	printf("%d",sum );
	return 0;
}
