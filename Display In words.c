//display Num in Words
#include<stdio.h>
int main()
{
int n,num,rem,x,i;
printf("Enter no of Num");
scanf("%d",&x);
printf("\n enter the number");
scanf("%d",&n);
num=n;// 75
for(i=1;i<=x;i++)
{
rem=n%10;
scanf("%d",&rem);
if(rem=0)
printf(" zero");
if(rem=1)
printf(" one");
if(rem=2)
printf(" two");
if(rem=3)
printf(" three");
if(rem=4)
printf(" four");
if(rem=5)
printf(" five");
if(n=6)
printf(" six");
if(n=7)
printf(" seven");
if(n=8)
printf(" eight");
if(n=9)
printf(" nine");
n=n/10;
}
}
