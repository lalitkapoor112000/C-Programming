#include<stdio.h>
int main()
{
	
	int a,b,sum;
	printf("Enter to numbers for sum bw two numbers:");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		sum*=i;
	}
	printf("Sum of numbers from %d to %d is %d",a,b,sum);
	return 0;
	
}
