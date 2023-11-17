#include<stdio.h>
#include<math.h>
 int main(){
    int n,bindig=0,rem,place=1;
	printf("enter a num");
	scanf("%d",&n);
	printf("Binary Digits of Given Num is : ");
	while(n!=0){
	rem=n%2;
	n=n/2;
	bindig=bindig+(rem*place);
	place=place*10;
	}
	printf("%d\n",bindig);

return 0;
}
