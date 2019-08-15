#include<stdio.h>
int main()
{
	int n,rev = 0,r;
	printf("enter the integer:");
	scanf("%d",&n);
	while (n != 0) {
		   r = n % 10;
		   n = n / 10;
		   rev = rev * 10 + r;
	}
	printf("reversed number : %d",rev);
}
