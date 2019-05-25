#include<stdio.h>
int main()
{
    int sum;
	for(int a=1;a<=100;a++)
	{
		if(a%2==0)
		sum+=a;
	}
	printf("Sum of all even numbers upto 100 is %d",sum);
	return 0;	
}
