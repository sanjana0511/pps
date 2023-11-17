#include<stdio.h>
int main()
{
	int n=5,*f,i;
	f=(int*)malloc(1*sizeof (int));
	*f=1;
	while(n!=0)
	{
		*f=(*f)*i;
		--n;
	}
	printf("\n factorial is %d ",*f);
	return 0;
}
