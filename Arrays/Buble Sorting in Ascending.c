// Bubble Sort 
#include<stdio.h>
int main(){
	int a[100],i,j,n,temp;
	printf("\n Enter the Array Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n Elements before Sorting : ");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Sorted list of Array : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
