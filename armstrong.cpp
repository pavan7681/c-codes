#include<stdio.h>
int main()
{
	int tsum = 0,s,sum = 1,n,r,temp,count = 0,l;
	printf("enter the number:");
	scanf("%d",&n);
	s = n;
	l = n;
	while (n != 0) {
		   count++;
		   n = n / 10;
	}
	while (s != 0) {
		  temp = 0;
		  r = s % 10;
		  while (temp < count) {
		  	     sum = sum * r;
		  	     temp++;
		  }
		  s = s / 10;
		  tsum = tsum + sum;
		  sum = 1;
	}
	if(l == tsum) {
		printf("armstrong number");
	}
	else {  
		printf("not an amstrong number");
	}
}
