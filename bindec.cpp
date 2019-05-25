#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,rem,count=0,j=1,bin=0,dec=0;
	printf("Enter your choice \n1: for Binary to Decimal: \n2: for Decimal to Binary:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter a Binary Number:");
			scanf("%d",&a);
			while(a!=0)
			{
					rem=a%10;
				dec=dec+rem*(pow(2,count));
				a=a/10;
				count++;
			}	
		printf("Decimal Equivalent=%d",dec);
		break;
	     case 2: 
		printf("Enter number in decimal:");
		scanf("%d",&a);
		while(a!=0)
		{
			rem=a%2;
			bin=bin+rem*j;
			a=a/2;
			j=j*10;
		}
		printf("Binary equivalent is %d",bin);
		break;
		default:printf("Invalid Operator");
		}
		return 0;
	}
