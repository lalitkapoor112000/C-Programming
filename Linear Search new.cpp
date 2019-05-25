#include<stdio.h>
int linear(int b[],int y);
int n;
int main()
{
	int x,trap,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of Array:");
		{
		scanf("%d",&a[i]);
	}
	printf("Enter element to find:");
	scanf("%d",&x);
		for(int i=0;i<n;i++)
	for(i=0;i<n;i++)
    {
	if(x==a[i])
	{
	printf("%d was found at %d",x,i);
	
    }
    break;
    }
    if(n==i)
    printf("Element not found");
    return 0;
}
