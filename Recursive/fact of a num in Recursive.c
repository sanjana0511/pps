//Fact of Num in Recursive Fumction
#include<stdio.h>
int fact(int a);
int main(){
	int x,f;
	printf("enter the num");
	scanf("%d",&x);
	f=fact(x);
	printf("fatctorial of %d is %d",x,f);
	return 0;
}
int fact(int a){
	if(a<=1)
	{
		return a;
	}
	else{
		return a*fact(a-1);
	}
}

