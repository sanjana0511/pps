#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
	    {
		    printf("Biggest of 3 nums is %d",a);
		}
		else
		{
			printf("Biggest of 3 nums is %d",c);
		}
	}
	else if(b>a)
		{
			printf("Biggest of 3 nums is %d",b);
		}
		else
		{
			 printf("Biggest of 3 nums is %d",c);
		}	
	return 0;
}
