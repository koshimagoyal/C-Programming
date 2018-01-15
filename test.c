#include<stdio.h>
void main()
{
	long int t,n,k,a[10][10],i,j,b[10],c[10],p,l,count=0;
	scanf("%ld",&t);
	p=0;
	for(i=0;i<t;i++)
	{
		scanf("%ld %ld",&n,&k);
		b[p]=n;
		c[p]=k;
		for(j=0;j<n;j++)
			scanf("%ld",&a[i][j]);
		p++;
	}
	l=0;
	for(i=0;i<t;i++)
	{
		count=0;
		for(j=0;j<b[l];)
		{
			if(a[i][j]>=c[l])
			{
				a[i][j]+=1;
				j++;
			}
			else
			{
				for(p=0;p<b[l];p++)
				a[i][p]+=1;
				count++;
			}
		}
		printf("\ncount=%ld",count);
		l++;
	}
}
