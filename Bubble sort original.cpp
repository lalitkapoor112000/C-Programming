#include<stdio.h>
#define max 2000
int main()
{
	int a[max],n,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("Sorted Array:");
for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
