// GCD and LCM of Two Nums (without RT with Args)
#include<stdio.h>
void lcm1(int n1,int n2);
void main()
{
	int x,y;
	printf("\n enter any 2 nums");
	scanf("%d %d",&x,&y);
	lcm1(x,y);
}
void lcm1(int n1,int n2)
	{
		int i,gcd,lcm;
		for(i=1;(i<=n1)&&(i<=n2);i++)
		{
			if(n1%i==0&&n2%i==0)
			gcd=i;
		}
		printf("\n The GCD of 2 nums %d and %d is %d ",n1,n2,gcd);
		lcm=(n1*n2)/gcd;
		printf("\n The LCM of 2 nums %d and %d is %d ",n1,n2,lcm);
	}

