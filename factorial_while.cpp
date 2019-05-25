#include<stdio.h>
int main()
{
	int fac=1,x,temp;
	printf("Enter a number to find factorial:");
	scanf("%d",&x);
	temp=x;
	while(x>0)
	{
		fac*=x;
		x--;
	}
	printf("Factorial of %d is %d",temp,fac);
	return 0;	
}
