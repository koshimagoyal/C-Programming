#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	int k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-k;j++)
		{
			printf("%d",j);
		}
		k++;
		printf("\n");
	}
}
