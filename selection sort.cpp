#include<stdio.h>
#define max 100
int main()
{
	int a[max],i,j,n,min,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     printf("Unsorted array:");
     for(i=0;i<n;i++)
     {
     	printf("%d  ",a[i]);
	 }
	 //selection sort
	 for(i=0;i<n-1;i++)
	 {
	 	min=i;
	 	for(j=i+1;j<n;j++)
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

printf("\n");
printf("Sorted Array:");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
return 0;
}
