//Addition of Two Matrices
#include<stdio.h>
int main(){
	int a[5][5],b[5][5],sum[5][5],i,j,r,c;
	printf("Enter Row size");
	scanf("%d",&r);
	printf("Enter Coloumn size");
	scanf("%d",&c);
	printf("Enter elements of Matrice A \t");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	printf("Enter elements of Matrice B \t");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		sum[i][j]=a[i][j]+b[i][j];
		printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
