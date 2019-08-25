#include<stdio.h>
int main()
{
	int i,n,r,count,sum = 0,s;
	printf("enter the number:");
	scanf("%d",&n);
	s = n;
	while (n != 0) {
		   r = n % 10;
		   count = 1;
		   for (i = 1;i <= r;i++) {
		   	   count = count * i;
		   }
		   sum = sum + count;
		   n = n / 10;
	}
	if (sum == s) {
		printf("strong number");
	}
	else {
		printf("not a strong number");
	}
	
}
