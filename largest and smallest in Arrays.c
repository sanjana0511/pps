//largest n smallest in arrays
#include<stdio.h>
int lar(int A[10]);
int smal(int B[10]);
int main(){
int N[10],i,large,small;
for(i=0;i<5;i++){
	printf("enter array element %d:",i+1);
	scanf("%d",&N[i]);
	large=lar(N);
	small=smal(N);
	}
	printf("\nLargest among array elements is:%d",large);
	printf("\nSmallest among array elements is:%d",small);
	return 0;
}	
int lar(int A[]){
	int i,l;
	for(i=0;i<5;i++){
		if (A[0]<A[i]){
			l=A[i];
}	
}
return l;
}
int smal(int B[]){
	int i,s;
	for(i=0;i<5;i++){
		if (B[0]>B[i]){
			s=B[i];
}	
}
return s;
}

