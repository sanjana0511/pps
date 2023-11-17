// Swapping of nums with RT without args 
#include<stdio.h>
int swap(void);
int main()
{
	int s;
	s=swap();
	printf( "%d",swap);
}
int swap()
{
	int a,b,temp,s1,s2;
	printf("enter two values");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	s2=b;
	s1=a;
	return s1;
	
}
