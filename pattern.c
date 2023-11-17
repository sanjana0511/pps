//program 2 Assign 2
#include<stdio.h>
int main()
{
	int i,j;                                           //i==1    *	*   *	*	*
	for(i=1;i<=5;i++)//1 1<=5 										*			*
	{												//					*		*	
		for(j=1;j<=5;j++)//1 1<5 											*	*
		{															//			*
			if((i==1)||(j==5)||(j==i))
			{
				printf("*\t");
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n\n");
	}
	return 0;
}
