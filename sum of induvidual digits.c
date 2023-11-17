//prg to implement sum of individual digits
#include<stdio.h>
int main()
{
int n,num,rem,sum=0;
printf("\n enter the number");
scanf("%d",&n);
num=n;// 75
while(n!=0)
{
rem=n%10;//5
sum=sum+rem;//5
n=n/10;
}
printf("\n sum of individual digits of %d is %d",num,sum);
return 0;
}
