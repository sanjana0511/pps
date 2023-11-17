//Logical Operators
#include<stdio.h>
int main()
{
	int a=10,b=5,L;
	L=((a>b)&&(a==b));
	printf("\n Logic value= %d",L);
	L=((a>b)||(a==b));
	printf("\n Logic value= %d",L);
	L=((a>b)!=(a==b));
	printf("\n Logic value= %d",L);
	return 0;
}
