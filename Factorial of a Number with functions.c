//factorial in functions  (with RT with Args)
#include<stdio.h>
int fact(int a); // fun prototype
int main() // main fun enters
{
	int x,f;   // here x is actual parameters
	printf("enter any num");
	scanf("%d",&x);
	f=fact(x);   // fun call
	printf("factorial of %d is %d",x,f);
}
int vfact(int a)  // fun defenetion
{
	int i,fact;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
