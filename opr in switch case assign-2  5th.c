#include<stdio.h>
int main()
{
	int a,b,n;
	float res=0;
	printf("enter any two nums");
	scanf("%d %d",&a,&b);
	printf("\n enter if n=1 its Add");
	printf("\n enter if n=2 its Sub");
	printf("\n enter if n=3 its Mul");
	printf("\n enter if n=4 its Div");
	printf("\n enter if n=5 its Mod Div");
	printf("\n enter n value ");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		res=a+b;
		printf("ADD is %f",res);
		break;
	case 2:
		res=a-b;
		printf("SUB is %f",res);
		break;
	case 3:
		res=a*b;
		printf("MUL is %f",res);
		break;
	case 4:
		res=a/b;
		printf("DIV is %f",res);
		break;
	case 5:
		res=a%b;
		printf("MOD DIV is %f",res);
		break; 
	default:
		printf("please enter n value (1-5)only");
	}
}
