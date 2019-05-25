#include<stdio.h>
int main()
{
	int a,b;
	long  int pro=1;
	printf("Enter to numbers between which you want product:");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		pro*=i;
	}
	printf("Product of numbers from %d to %d is %d",a,b,pro);
	return 0;
	
}
