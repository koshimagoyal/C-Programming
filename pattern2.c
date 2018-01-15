#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\n enter the largest no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i+1;j++)
			printf("%d",j);
		for(k=i;k<=n-i;k++)
			printf(" ");
		for(j=i+1;j>=1;j--)
		{
			if(i<n&&j==n)
				continue;
			else
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<=n-i-1;j++)
			printf("%d",j);
		for(k=j;k<=n+i;k++)
			printf(" ");
		for(j=n-i-1;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
}
