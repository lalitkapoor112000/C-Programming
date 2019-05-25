#include<stdio.h>
int main()
{
	for(int a=1;a<=15;a++)
	{
		for(int b=a;b<=15;b++)
		{
			printf(" ");
		}
		for(int c=1;c<=a;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
