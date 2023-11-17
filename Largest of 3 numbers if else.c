//find the biggest of 3 num using if else
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter any 3 nos");
	scanf("%d %d %d ",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n Biggest of three nos is %d",a);
		}
		else
		{
			printf("\n Biggest of three nos is %d",c);
		}
	}
		if(b>c)
		{
			printf("\n Biggest of three nos is %d",b);			
		}
		else 
		{
			printf("\n Biggest of three nos is %d",c);
		}
		return 0;	
}113
