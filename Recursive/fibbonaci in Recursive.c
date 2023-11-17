#include<stdio.h>
int fib(int a);
int main(){
	int series,i;
	printf("enter the series num");
	scanf("%d",&series);
	for(i=0;i<series;i++){
		printf("%d \t",fib(i));
	}
	return 0;
}
int fib(int a){
	if(a<=1)
	{
		return a;
	}
	else{
		return fib(a-1) + fib(a-2);
	}
}

