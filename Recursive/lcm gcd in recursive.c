//Lcm and Gcd of 2 num in Recursive
#include<stdio.h>
int lg2num(int a,int b);
int main(){
	int x,y,lcm,gcd;
	printf("enter any 2 num");
	scanf("%d %d",&x,&y);
	lcm=lg2num(x,y);
	gcd=(x*y)/lcm;
	printf("\n Lcm and Gcd of %d,%d is %d,%d",x,y,lcm,gcd);
	return 0;
}
int lg2num(int a,int b)
{
	if(b==0){
		return a;
	}
	else{
		return lg2num(b,a%b);
	}
}
