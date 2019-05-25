#include<stdio.h>
enum boolean{true,false};
enum boolean chk(int n);
int main()
{
	int x;
	printf("Enter a number to check even or odd:");
	scanf("%d",&x);
	if(chk(x)==true)
	printf("Number is Even");
	else
	printf("Number is Odd");
	return 0;
}
enum  boolean chk(int n)
{
	if(n%2==0)
	return true;
	else
	return false;
}
