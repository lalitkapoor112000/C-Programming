#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,rem,res=0;
	printf("Enter a number to check armstrong :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		res=res+pow(rem,3);
		n=n/10;
	}
	if(res==temp)
	printf("Armstrong Number");
	else
	printf("Not Armstorng");
	return 0;
}
