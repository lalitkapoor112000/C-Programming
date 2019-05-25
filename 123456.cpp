#include<stdio.h>
int main()
{
	int a,z=1;
	printf("enter the number to find factorial:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		z=z*i;
	}
	printf("the factorial of %d is %d",a,z);
	return 0;
}
