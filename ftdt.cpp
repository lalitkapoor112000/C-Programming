#include<stdio.h>
int main() 
{
	int a,b;
	double divi;
	printf("\n enter two number");
	scanf("%d%d", &a,&b);
	divi=a/b;
	printf("divi of %d,%d, is %f" ,a,b,divi);
	return(0);
}
