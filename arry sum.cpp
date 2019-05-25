#include<stdio.h>
#define max 1000
int asum(int b[],int x);
int main()
{
	int a[max],n,sum;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=asum(a,n);
	printf("sum of all array elements=%d",sum);
	return 0;
}
int asum(int b[],int x)
{
	int s;
	for(int i=0;i<x;i++)
	{
	s+=b[i];	
	}
	return s;
}
