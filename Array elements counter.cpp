#include<stdio.h>
int main()
{
	int a[100],b[100],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:")
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	switch(a[i])
	{
		case 1:b[i]++;
		break;
		case 2:b[i]++;
		break;
		case 3:b[i]++;
		break;
		case 3:b[i]++;
		break;
		case 4:b[i]++;
		break;
		case 5:b[i]++;
		break;
		case 6:b[i]++;
		break;
		case 7:b[i]++;
		break;
		case 8:b[i]++;
		break;
		case 9:b[i]++;
		break;
		case 0:b[i]++;
		break;
		default:printf("Wrong Entry!");
	}
	for(int i=0;i<n;i++)
	{
		printf("%d occured %d times:",a[i],b[i]);
	}
}
}
