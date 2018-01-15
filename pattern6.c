#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\n enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" * ");
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
			printf(" * ");
		printf("\n");
	}
}
