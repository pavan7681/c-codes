#include<stdio.h>
int main()
{
	int i = 0,sum = 0,n,r,num[100];
	printf("enter the number:");
	scanf("%d",&n);
	while (n != 0) {
		   r = n % 10;
		   num[i] = r;
		   n = n / 10;
		   sum = sum + num[i];
	}
	printf("\nsum : %d",sum);
}
