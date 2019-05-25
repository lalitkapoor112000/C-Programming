#include<stdio.h>
#define max 100
int main()
{
	int a[max],x,n,i;
	printf("Enter size of arrar:");
	scanf("%d",&n);
	printf("Enter %d array elements in ascending order:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search:");
	scanf("%d",&x);
	//Binary Searching
	int mid,u=n-1,l=0;
	while(l<=u)
	{
		mid=(u+l)/2;
		if(x>a[mid])
		{
			l=mid+1;
		}
		else if(x<a[mid])
		{
		u=mid-1;	
		}
		else if(a[mid]==x)
		{
		goto found;
		}
		else
		goto nfound;
	}
	found:
		printf("Element %d was found",x);
		return 0;
		nfound:
			printf("Element not found");
	return 0;
	
}
