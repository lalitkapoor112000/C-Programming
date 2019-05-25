#include<stdio.h>
int fib(int a);
int main()
{
	int n;
	printf("Enter a number to print fibonacci series:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf("%d  ",fib(i));
	}
}
int fib(int a)
{
	if(a==0 || a==1)
	return 1;
	else
	return (fib(a-1)+fib(a-2));
}
