//Area and Perimeter of a Circle
#include<stdio.h>
int main()
{
	int r;
	float A,P;
	printf("Enter Radius of Circle");
	scanf("%d",&r);
	A=3.14*r*r;
	P=2*3.14*r;
	printf("\nArea of Circle is %f",A);
	printf("\nPerimeter of Circle is %f",P);
	return 0;
}
