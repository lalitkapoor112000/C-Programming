#include<stdio.h>
int main()
{
	int a,z=1;
	printf("enter the number to find the factorial:");
	scanf("%d",&a);
	int tepm=a;
	while(a>0)
	{
		z=z*a;
		a=a-1;
	}
	printf("the factorial of %d is %d",tepm,z);
	return 0;
}
