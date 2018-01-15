#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\n enter the largest no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
			printf("%d",j);
		for(k=i-2;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			if(i==n&&j==1)
				continue;
			else
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
			printf("%d",j);
		for(k=n-i+2;k<=n+i;k++)
			printf(" ");
		for(j=1;j<=n-i;j++)
			printf("%d",j);
		printf("\n");
	}
}
