//Conversion of Binary,Octal,Hexa 
#include<stdio.h>
int bin(int n);
int oct(int n);
int main(){
	int num,binary,octal,hexadec;
	printf("Enter any Num");
	scanf("%d",&num);
	printf("Binary :" );
	binary=bin(num);
	printf("octal :" );
	octal=oct(num);
}
int bin(int n){
		if((n==0)||(n==1)){
		printf("%d",n);
		return ;
	}
	bin(n/2);
	bin(n%2);
}
//printf("\nOctal Config is :");
int oct(int n){
//	printf("\nOctal Config is :");
	if((n==0)||(n<=7)){
		printf("%d",n);
		return;
	}
	oct(n/8);
	oct(n%8);
}

