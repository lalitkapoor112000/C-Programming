#include<stdio.h>
int main()
{
	char ch='\0';
	for(int i=0;i<=122;i++)
	{
		if((i>=48 && i<=57) || (i>=65 && i<=90) || (i>=97 && i<=122))
		printf("ASCII of  %c is %d\n",ch,i);
		ch=ch+1;
	}
}
