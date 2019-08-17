#include<stdio.h>
int main()
{
	int i = 0,sum = 0,n,r,num[100],count = 0;
	printf("enter the number:");
	scanf("%d",&n);
	while (n != 0) {
		   r = n % 10;
		   num[i] = r;
		   i = i + 1;
		   count++;
		   n = n / 10;
	}
	for ( i = count;i >= 0;i--) {
		sum = sum + num[i - 1];
	}
	printf("\n%d",sum);
}
