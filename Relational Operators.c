//Relational Operators
#include<stdio.h>
int main()
{
	int a,b,res;
	printf(" Enter any two numbers");
	scanf("%d %d",&a,&b);
	res=a==b;
	printf("\n %d",res);
	res=a<b;
	printf("\n %d",res);
	res=a>b;
	printf("\n %d",res);
	res=a<=b;
	printf("\n %d",res);
	res=a>=b;
	printf("\n %d",res);
	res=a!=b;
	printf("\n %d",res);
	return 0;
}
