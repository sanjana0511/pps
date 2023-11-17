#include<stdio.h>
int main()
{
	int *p,i,a[5];
	printf("\n enter array elements");
	p=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",*(p+i));
	}
	return 0;
}
