//Amstrong number (without RT with Args)
#include<stdio.h>
void Amn1(int a);
void main()
{
	int x;
	printf("\n enter any 4 digit nums");
	scanf("%d",&x);
	Amn1(x);
	}
void Amn1(int a)
{
	int on,sum=0,rem;
	on=a;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+(rem*rem*rem*rem);
		a=a/10;
	}
	if(on==sum){
	printf("%d is an Amns num",on);
    }
	else{
	printf("%d is not an Amns num",on);
}
}

