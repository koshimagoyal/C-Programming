#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("\n enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
			printf("%d",j);
		for(k=2;k<=i;k++)
			printf("%d",k);
		printf("\n");
	}
}
