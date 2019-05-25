#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a,b;
	printf("Enter two numbers to swap:");
	scanf("%d %d",&a,&b);
	printf("Values before swapping a=%d  b=%d\n",a,b);
	swap(a,b);
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Values after swapping a=%d  b=%d",a,b);
}
