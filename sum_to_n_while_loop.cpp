#include<stdio.h>
int main()
{
	int x,sum=0;
	printf("Enter a number to print sum:");
	scanf("%d",&x);
	int temp=x;
	while(x>0)
	{
		sum+=x;
		x--;
	}
	printf("Sum upto %d is %d",temp,sum);
}
