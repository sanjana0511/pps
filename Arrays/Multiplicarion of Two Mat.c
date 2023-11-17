#include<stdio.h>
int main(){
	int a[5][5],b[5][5],mul[5][5],i,j,k,r,c;
	printf("Enter Row size and coloumn size :");
	scanf("%d %d",&r,&c);
	printf("Enter elements of Matrice A \t");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	printf("\nEnter elements of Matrice B \t");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}}
		printf("\n Multipicated Matrix is:\n");
		for(i=0;i<r;i++)    
	{    
	for(j=0;j<c;j++)    
	{    
	mul[i][j]=0;    
	for(k=0;k<c;k++)    
	{    
	mul[i][j]+=a[i][k]*b[k][j];    
	}}}
for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
		}
 }
			
			
			
			
