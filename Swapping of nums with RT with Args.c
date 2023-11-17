// Swapping of nums with RT with args 
#include<stdio.h>
int swap(int a,int b);
int main()
{
	int x,y;
	printf("enter any two nums");
	scanf("%d %d",&x,&y);
	swap(x,y);
}
int swap(int a,int b)
{
	int temp,s;
	temp=a;
	a=b;
	b=temp;
}
