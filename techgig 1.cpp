#include<stdio.h>
int main(int argc, char *a[])
{
    int t,N,w=0,l=0;
	printf("Enter number of test cases:");
	scanf("%d",&t);
	printf("Enter number of Villains and Player:");
	scanf("%d",&N);
	int v[N],p[N];
	for(int c=1;c<=t;c++)
	{
	printf("Enter strengths of Villains:");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&v[i]);
	}
	printf("Enter strengths of Players:");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&p[i]);
	}	
	for(int i=0;i<N;i++)
	{
		if(v[i]>p[i])
		{
				l++;
			}
		else if(v[i]<p[i])
		{
		w++;
	}
	else if(v[i]==p[i])
	{
		l++;
		w++;
	}
	}
	if(w>l)
	printf("WIN\n");
	else if(w<l)
	printf("LOSE\n");
	else if(l==w)
	printf("Draw\n");
}
return 0;
}


