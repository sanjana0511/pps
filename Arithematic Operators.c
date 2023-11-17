//Arithematic Operators
#include<stdio.h>
int main()
{
	int a,b,res=0;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	res=a+b;
	printf("\n Arithematic Sum is %d",res);
	res=a-b;
	printf("\n Arithematic Sub is %d",res);
	res=a*b;
	printf("\n Arithematic Mul is %d",res);
    res=a/b;
    printf("\n Arithematic Div is %d",res);
    res=a%b;
    printf("\n Arithematic Mod Div is %d",res);
    return 0;
}
