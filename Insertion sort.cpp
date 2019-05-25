#include<stdio.h>
#define max 100
int main()
{
	int a[max],i,j,k,n;
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
	//insertion sort
	for(i=1;i<n;i++)
	{
		k=a[i];
		for(j=i-1;j>=0 && k<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=k;
	}
	printf("Sorted array elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
