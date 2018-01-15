#include<stdio.h>
void main()
{
	int i,j,t,k;
	long int n,r=1,b[100][100];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			i=j;
			r=1;
			//printf("\nj=%d",j);
			while(i>0)
			{
				r=r*i;
				i=i-1;
			}
			if(r<=n)
				b[k][0]=j;
		}
	}
	for(i=0;i<t;i++)
		printf("%ld\t",b[k][0]);
}
