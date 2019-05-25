#include<stdio.h>
int main()
{
	int sum,x;
	printf("Enter a number to find sum:");
	scanf("%d",&x);
	for(int a=1;a<=x;a++)
	{
		if(a%2!=0)
		sum+=a;
	}
	printf("Sum of all even numbers upto %d is %d",x,sum);
	return 0;
	
}
