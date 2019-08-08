#include<stdio.h>
int main()
{
	int n1,n2,n3,n,count=2;
	printf("enter the series number:");
	scanf("%d",&n);
	n1 = 0;
	n2 = 1;
	while (count != n) {
	     n3 = n1 + n2;
		 count = count + 1;
		 if (count != n) {
		    n1 = n2;
		    n2 = n3;
	     } 
	}
	printf("%d",n3);
}
