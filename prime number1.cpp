#include<stdio.h>
int main()
{
	int k,n,m,i;
	printf("enter the number:");
	scanf("%d",&n);
	for (i = 2;i < n;i++) {
		k = n % i;
		if (k == 0)
		{
		    printf(" not prime ");
		    break;
		}
	
	}
	if (i == n)
	{
		printf(" prime");
	}
}
