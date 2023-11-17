//Sum of Any Two Numbers
#include<stdio.h>
int main()
{
	int a,b,sum=0,sub=0;
	printf("Enter any Two Numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	printf("\nSum of Two Numbers is %d",sum);
	printf("\nSub of Two Numbers is %d",sub);
	return 0;
}
