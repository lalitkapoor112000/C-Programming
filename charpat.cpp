#include<stdio.h>
int main()
{
	char n;
	printf("Enter a character to print triangle:");
	scanf("%c",&n);
	
		for(char a='a';a<=n;a++)
		{
			for(char b=a;b<=n;b++)
			{
				printf(" ");
				
			}
			for(char c='a';c<=a;c++)
				{
					
					printf("%c",a);
					
				}
			printf("\n");
		}
		return 0;
}
