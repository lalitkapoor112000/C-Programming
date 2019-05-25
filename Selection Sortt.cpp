#include<stdio.h>
#define max 2000
int main()
{
	int a[max],n,temp,min;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//selection
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			
		}
	}
	printf("Sorted Array:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}



