#include<stdio.h>
void fact1(int n,int *fact);
int main()
{
	int n=5,f=1;
	fact1(n,&f);
	return 0;
	}
void fact1(int n,int *fact)
{
	int i;
	for(i=1;i<=n;i++){
		*fact=(*fact) *i;
	}
	printf("Factorial of %d id %d",n,*fact);
}	
	
