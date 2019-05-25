#include<stdio.h>
int square(int x);
int main()
{
	int n;
	printf("Enter a number to find square :");
	scanf("%d",&n);
	n=square(n);
	printf("Square =%d",n);
	return 0;
}
int square(int x)
{
	x=x*x;
	return x;
}
