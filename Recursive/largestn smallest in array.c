//largest n smallest in arrays
#include<stdio.h>
int main(){
int N[100],n,i,s,l;
printf("enter num of elments in array");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter array element %d :",i+1);
	scanf("%d",&N[i]);
	}
	for(i=0;i<n;i++){
		if (N[0]<N[i]){
			l=N[i];
			printf("Largest among array elements is:%d",l);
		}
			if (N[0]>N[i]){
			s=N[i];
			printf("Smallest among array elements is:%d",s);
		}
	}
return 0;
}
