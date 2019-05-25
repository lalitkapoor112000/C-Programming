#include<stdio.h>
int main()
{
	int p,n;
	printf("Enter a number to print pattern:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n-1;j++)
		{
			printf("    ");
		}
		p=i;
		for(int k=1;k<=i;k++)
		{
			printf("%d   ",p++);
		}
		p=p-2;
		for(int l=1;l<=i-1;l++)
		{
			printf("%d   ",p--);
		}
		printf("\n");
	}
	return 0;
}

