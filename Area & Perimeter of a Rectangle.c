//Area and Perimeter of a Rectangle
#include<stdio.h>
int main()
{
	int l,b,A=0,P=0;
	printf("Enter Length and Breadth of Rectangle");
	scanf("%d %d",&l,&b);
	A=l*b;
	P=2*(l+b);
	printf("\nArea of Rectangle is %d",A);
	printf("\nPerimeter of Rectangle is %d",P);
	return 0;
}
