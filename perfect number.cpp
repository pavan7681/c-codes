#include<stdio.h>
int main()
{
	int i = 1,n,sum = 0,r;
	printf("enter a number:");
	scanf("%d",&n);
	while (i < n) {
		   r = n % i;
		   if (r == 0) {
		   	   sum = sum + i;
		   }
		   i++;
	}
	if (sum != n) 
	    printf("not a  perfect number");
	else 
	    printf("perfect number");
}
