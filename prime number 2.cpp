#include<stdio.h>
int main()
{
	int r,k,n,count,i;
	printf("enter the range:");
	scanf("%d",&r);
	for (n = 2;n <= r;n++) {
    	count = 0;
	    for (i = 1;i <= n;i++) {
		    k = n % i;
	        if (k == 0) {
                count = count + 1;
            }
        }
	    if (count <= 2) {   
           printf(" ");
	       printf("%d",n);
        }
	}
}
