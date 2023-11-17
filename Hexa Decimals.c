//Converting Decimal to Hexa Decimal
#include<stdio.h>
int main(){
	int n,num,rem,i=1,j;
	char hexa[50];
	printf("Enter any Number");
	scanf("%d",&n);
	num=n;
	while(n!=0){
		rem=n%16;
		if(rem<10)
		rem=rem+48;
		if(rem>10)
		rem=rem+55;
		hexa[i++]=rem;
		n=n/16;
	}	
	printf("Hexa Decimal Num is :");
	for(j=i-1;j>0;j--)
	{
		printf("%d",&hexa[j]);
	}
	return 0;
}
