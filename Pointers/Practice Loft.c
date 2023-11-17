#include<stdio.h>
void smlg(int n[],int x);
int main(){
	int a[100],n,i;
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	smlg(a,n);
	return 0;}
void smlg(int a[],int x){
	int i;
	for(i=0;i<x;i++){
		if(a[0]<a[i]){
		a[0]=a[i];
		}}
		printf("\nLargest among array elements is:%d",a[0]);
	for(i=1;i<x;i++){
		if(a[0]>a[i]){
		a[0]=a[i];
		}}
			printf("\nSmallest among array elements is:%d",a[0]);

}


