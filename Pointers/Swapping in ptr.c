#include<stdio.h>
void swap(int*x,int*y);
int main(){
	int a,b;
	printf("\nEnter any 2 values : ");
	scanf("%d%d",&a,&b);
    printf("\na=%d\nb=%d\n",a,b);
	swap(&a,&b);
    return 0;
}
void swap(int*x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nSwapped num are %d and %d",*x,*y);
}
