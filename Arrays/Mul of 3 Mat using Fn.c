#include<stdio.h>
void mat();
int main(){
	mat();
	
	return 0;	

void mat(){
	int A[10][10],B[10][10],E[10][10],D[10][10],mul[10][10],i,j,k,r,c;
		printf("Enter Row size and coloumn size : ");
	scanf("%d %d",&r,&c);
	printf("Enter elements of Matrice A \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&A[i][j]);
		}} 
	printf("\nEnter elements of Matrice B \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&B[i][j]);
		}}
			printf("\nEnter elements of Matrice C \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&E[i][j]);
		}
		}	
	printf("\n Multipicated Matrix is:\n");		
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)    
	{    
	D[i][j]=0;    
	for(k=0;k<c;k++)    
	{    
	D[i][j]+=A[i][k]*B[k][j];  
	scanf("%d",&D[i][j]);  
	}}}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)    
	{    
	mul[i][j]=0;    
	for(k=0;k<c;k++)    
	{    
	mul[i][j]+=D[i][k]*E[k][j];  
	sEanf("%d",&mul[i][j]);  
	}}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d",mul[i][j]);
	}
	printf("\n");
}
}

}
