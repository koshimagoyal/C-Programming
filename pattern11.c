#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("\n enter the no");
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(k=j+n-1;k>=j;k--)
			{
				printf("%4d",k);
			}
			j=j+n;
			printf("\n");
		}
		else
		{
			for(k=1;k<=n;k++)
			{
				printf("%4d",j);
				j++;
			}
			printf("\n");
		}
	}
}
