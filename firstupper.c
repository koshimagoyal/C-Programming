#include<stdio.h>
void main()
{
	int t,n,i,j;
	char a[100];
	scanf("%d",&t);
	fflush(stdin);
	while(t--)
	{
		gets(a);
		n=strlen(a);
		a[0]-=32;
		for(i=1;i<=n;i++)
		{
			if(a[i]==' ')
				a[i+1]-=32;
		}
		puts(a);
	}
}
