#include<stdio.h>
#define max 100
int main()
{
	int a[max],i,temp,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted array elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	//bubble sort
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("Sorted array elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
