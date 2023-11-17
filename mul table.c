#include <stdio.h>
int main()
{
    int i,j,n;//n=10
    printf("enter the end value is ");
    scanf("%d",&n);
    printf("\n \n Your Multiplication table is below \n \n");
    for(i=1; i<=n; i++)
	{
        for(j=1;j<=n; j++)
		{
                printf("%d\t", i*j);
    	}
   			 printf("\n");
    }
    return 0;
}
