#include<stdio.h>
int main()
{
	int i,j = 0,factor[100],n,sum = 0;
	printf("enter a number:");
	scanf("%d",&n);
	for (i = 1;i < n;i++) {
		if (n % i == 0) {
			factor[j] = i;
			j++;
		}
	}
	while (sum < n) {
	       sum = sum + factor[j - 1];
	       j--;
	}
	if (sum != n) 
	    printf("not a  perfect number");
	else 
	    printf("perfect number");
}
