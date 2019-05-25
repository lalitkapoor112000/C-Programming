#include<stdio.h>
int main()
{
	int n,fac=1;
	printf("Enter a number to find factorial:");
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		fac*=a;
	}
	printf("Factorial of %d is %d",n,fac);
	return 0;
}
