#include<stdio.h>
int main()
 {
  int num,i;
  double n[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &num);

  for(i=0;i<num;++i)
   {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &n[i]);
   	 if (n[0]<n[i]) 
		{
    	  n[0]=n[i];
    	} 
   }
  		printf("Largest element = %.2lf", n[0]);
  return 0;
}
