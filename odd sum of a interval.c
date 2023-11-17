//odd numbers sum 
#include<stdio.h>
int main()
{
	int i,n,on,s=0;
	printf("enter no of Terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
     on=2*i+1;   
	 s=s+on;
	}
	printf("Sum of odd Numbers in given Num is %d",s);
	return 0;
	
}
