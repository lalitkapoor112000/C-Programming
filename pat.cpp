#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number to print triangle:");
	scanf("%d",&n);
	int temp=n;
		for(int a=1;a<=n;a++)
		{
			for(int b=a;b<=n;b++)
			{
				printf(" ");
				
			}
			for(int c=1;c<=a;c++)
				{
					
					printf("*");
				}
			printf("\n");
		}
		return 0;
}
