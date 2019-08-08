#include<stdio.h>
int main()
{
	int n1,n2,n3,n,count=2;
	printf("enter the range:");
	scanf("%d",&n);
	n1 = 0;
	n2 = 1;
	printf("%d",n1);
	printf("\n%d",n2);
	while (count != n) {
	     n3 = n1 + n2;
		 count = count + 1;
		 printf("\n%d",n3);
		 n1 = n2;
		 n2 = n3;  
	}
}
