#include<stdio.h>
int main()
{
	int r,n,a[100],c = 0,i;
	printf("enter the number:");
	scanf("%d",&n);
	while (n != 0) {
	      r = n % 2;
	      a[c] = r;
	      c = c + 1;
	      n =n / 2;
	}
	for (i = c;i >= 1;i--) {
		printf("%d",a[i-1]);
	}
}
