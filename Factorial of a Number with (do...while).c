#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter n value");
	scanf("%d",&n);
	do
	{
	    f=f*i;
	    i++;
	}while(n>=i);
	printf("\n Factorial of %d is %d",n,f);
	return 0;
}
