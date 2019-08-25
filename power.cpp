#include<stdio.h>
int main()
{
	int A,n,temp;
	long sum =1;
	printf("enter the number:");
	scanf("%d",&A);
	printf("enter the power:");
	scanf("%d",&n);
	while (temp < n) {
     	   sum = sum * A;
		   temp++;
    }
    printf("%ld",sum);
    
}
