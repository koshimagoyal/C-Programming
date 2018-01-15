#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\n enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
			printf("%d",j);
		printf("\n");
	}
}
