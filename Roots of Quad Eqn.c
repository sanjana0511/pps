//roots of a quadratic eqn
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float R1,R2,d=0;
	printf("enter values of a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	R1=(-b+sqrt(d))/2*a;
	R2=(-b-sqrt(d))/2*a;
	printf("\n Root 1 is %f",R1);
	printf("\n Root 2 is %f",R2);
	return 0;
}
