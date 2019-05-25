#include<stdio.h>
int fact(int n);
int main()
{
	int x,fac;
	printf("Enter number to find factorial by recursion:");
	scanf("%d",&x);
	fac=fact(x);
	printf("Factorial of %d is %d",x,fac);
	
}
int fact(int n)
{
	return(n*fact(n-1));
}
