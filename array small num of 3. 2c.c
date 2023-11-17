#include<stdio.h>
int main()
{ 
   int n[100],i;
   printf("enter num of elments in array");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter array elements : %d",i+1);
	scanf("%d",&n[i]);
   	if(n[i]==n[1]){
  	if((n[i]<n[i+2])&&(n[i]<n[i+2]))
		{
			printf("smallest num is %d",n[1]);
   		}
	 }
    }
   return 0;
}
