#include<stdio.h>
int main()
{
	int n,rev = 0,r,k;
	printf("enter the integer:");
	scanf("%d",&n);
	k = n;
	while (n != 0) {
		   r = n % 10;
		   n = n / 10;
		   rev = rev * 10 + r;
	}
	if (k == rev) {
	   printf(" palindrome number ");
    }
	else {
	   printf("not palindrome number");
    }
}

