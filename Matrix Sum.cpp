#include<stdio.h>
#define max 100
int main()
{
	int b[max][max],r1,c1,c[max][max],sum[max][max];
	printf("Enter row and columns:");
	scanf("%d%d",&r1,&c1);
	printf("Enter matrix A:");
	for(int i=0;i<r1;i++)
	{
		for(int  j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}

	}
		printf("Enter matrix B:");
	for(int i=0;i<r1;i++)
	{
		for(int  j=0;j<c1;j++)
		{
			scanf("%d",&c[i][j]);
		}

	}
	//sum
		for(int i=0;i<r1;i++)
	{
		for(int  j=0;j<c1;j++)
		{
			sum[i][j]=b[i][j]+c[i][j];
		}
	}
	printf("Sum of the matrices:\n");
		for(int i=0;i<r1;i++)
	{
		for(int  j=0;j<c1;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
