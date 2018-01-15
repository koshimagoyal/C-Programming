#include<stdio.h>
void main()
{
	int t,i,j,n,m,l=0,u=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>j)
					l+=a[i][j];
				else if(i<j)
					u+=a[i][j];
				else
				{
					l+=a[i][j];
					u+=a[i][j];
				}
			}
		}
		printf("%d %d",u,l);
	}
}
