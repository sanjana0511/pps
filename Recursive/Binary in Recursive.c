#include<stdio.h>
 int main(){
    int n,bindig=0,rem,place=1;
	printf("\nEnter a num : ");
	scanf("%d",&n);
	printf("\nBinary Digits of Given Num is : ");
	while(n!=0){
	rem=n%2;
	n=n/2;
	bindig=bindig+(rem*place);
	place=place*10;
	}
	printf("%d",bindig);
	return 0;
}
