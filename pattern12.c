#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("\n enter the no");
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++)
	{
			for(k=j+n;k>=j;k--)
			{
				printf("%d",k);
			}
			printf("\n");
	}
}
