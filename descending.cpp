#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n");
	if (a > b && a > c && b > c) 
	    printf("%d %d %d ",a,b,c);
	if (b > a && a > c && b > c) 
	    printf("%d %d %d ",b,a,c);
	if (c > b && c > a && b > a) 
	    printf("%d %d %d ",c,b,a);
    if (c > a && c > b && a > b) 
	    printf("%d %d %d ",c,a,b);
	if (a > b && a > c && c > b) 
	    printf("%d %d %d ",a,c,b);
	if (b > c && c > a && b > a) 
	    printf("%d %d %d ",b,c,a);
}
