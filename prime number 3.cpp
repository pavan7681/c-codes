#include<stdio.h>
int main()
{
	int r,k,count = 0,i,j = 0,n = 1;
	printf("enter the range:");
	scanf("%d",&r);
	while (j < r) {
		  count = 0;
	      for (i = 1;i <= n;i++) {	
		      k = n % i;
		      if (k == 0) {
			     count = count + 1;	
		      }
	      }
	      if (count <= 2 && n != 1) {
	      	 printf(" ");
             printf("%d",n);
             j = j + 1;
          }
          n = n + 1;
	
	} 

}
	
