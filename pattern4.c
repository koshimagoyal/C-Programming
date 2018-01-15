#include<stdio.h>
#define N 5
void main()
{
	int i,j,k,count=5,c;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
			printf("%2d",i);
		printf("\n");
	}
}
