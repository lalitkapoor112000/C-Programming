#include<stdio.h>
#include "factorial by recursuin"
int main()
{
	int x,f;
	printf("Enter a number to find factorial:");
	scanf("%d",&x);
	f=fact(x);
	printf("Factorial of %d is %d",x,f);
	return 0;
}
