#include<stdio.h>
void main()
{
	int t,n,m,a[200][200],i,j,b[100],c[100][100],k,p,l,d[10],count,min;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		p=0;
		l=0;
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<m;j++)
			{
				if(a[i][j]==1)
				{
					b[p]=i;
					p++;
				}
			}
		}
	}
}
