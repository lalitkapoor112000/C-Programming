#include<stdio.h>
#define max 2000000
int main()
{
	char a[max];
	printf("Enter a string:");
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
