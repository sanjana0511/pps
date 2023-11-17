#include<stdio.h>
int main()
 {
  int num,i;
  double n[100],sum;
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &num);

  for(i=0;i<num;++i)
   {
    printf("Enter number%d: ", i+1);
    scanf("%lf", &n[i]);
   	sum=sum+n[i];
    } 
  		printf("sum of array elements is = %.2lf",sum);
  return 0;
}
