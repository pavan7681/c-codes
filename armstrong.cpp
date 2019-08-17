#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0,s,j = 0,n,r,num[100],count = 0;
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
	for (i = count;i > 0;i--) {
		j = j + pow(num[i - 1],count);
	}
	if ( j == s) {
		printf("armstrong number");
	}
	else {
		printf("not an amstrong number");
	}
}
