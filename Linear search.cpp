#include<stdio.h>
int linear(int b[],int y);
int n;
int main()
{
	int x,trap;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of Array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	trap=linear(a,x);
	printf("Enter element to find:");
	scanf("%d",&x);
	if(trap==0)
	printf("Element not found!");
	else
	printf("%d was found at %d",x,trap);
	return 0;
}
int linear(int b[],int y)
{
    for(int i=0;i<n;i++)
    {
	if(y==b[i])
	return i;
	if(i==n)
	return 0;
    }
	
}
