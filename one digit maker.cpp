#include<stdio.h>
int main()
{
	int n,temp,rem,res=0;
	printf("Enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n/10!=0)
	{
	while(n>0)
	{
		res=0;
		rem=n%10;
		res=res+rem;
		n=n/10;
		
		}
		printf("%d",res);
		n=res;
	}
		return 0;
}
