#include<stdio.h>
int sn(int n);
int cou(int n);
int main(){
	int num,sum,count;
	printf("\nEnter any Num :");
	scanf("%d",&num);
	sum=sn(num);
	printf("\nSum of Digits is :%d",sum);
	count=cou(num);
	printf("\n count = %d",count);
	return 0;
}
int sn(int n)
{
	if(n>0){
	return (n%10+sn(n/10));}
	else{
	return 0;}
}
int cou(int n){
int x,i,rem;
for(i=1;n!=0;i++){
	rem=n%10;
	n=n/10;
	x=i;
}
return x;
}
