//Factorial of A Num
#include<stdio.h>
int main()
{
	int n,i=1;
	float f=1;
	printf("enter any num");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	
	}
	printf("Factorial of %d is %f",n,f);
    return 0;
}
