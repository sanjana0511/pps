//Sum of all elements in an Array
#include<stdio.h>
int main(){
	int a[10],sum=0,i;
	printf("Enter elements of an Array \t");
	for(i=0;i<10;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("Sum of all Elements in Array is %d",sum);
		return 0;
}
