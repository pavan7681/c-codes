#include<stdio.h>
int main()
{
	int i = 0,j = 0,k,s,n,r,num[100],count = 0,fact[100];
	printf("enter the number:");
	scanf("%d",&n);
	s = n;
	while (n != 0) {
		   r = n % 10;
		   num[i] = r;
		   i = i + 1;
		   count++;
		   n = n / 10;
	}
	for (i = count;i >= 0;i--) {
		fact[i] = num[i];
		for (k = num[i] - 1;k > 0;k--) {
			if (k == 0) {
				k = 1;
			}
			fact[i] = fact[i] * k;
			
			
		}
		j = fact[i]+j;
	}
	if (j == s) {
		printf("strong number");
	}
	else {
		printf("not a strong number");
	}
	
}
