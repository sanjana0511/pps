// Swapping without RT with args 
#include<stdio.h>
void swap(int x,int y);
void main()
{
	int x,y;
	printf("enter any two nums");
	scanf("%d %d",&x,&y);
	swap(x,y);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
 	printf("\n swapped numbers are %d %d",a,b);
	
}
