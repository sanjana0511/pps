#include<stdio.h>
int main()
{
	int i,n,os=0,es=0;
	printf("enter no of Terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			es=es+i;   
		}
			else
		{	
			os=os+i;
		}
	}
	printf("\n even sum of %d is %d",n,es);  
	printf("\n odd sum of %d is %d",n,os);
	return 0;
}
