#include<stdio.h>
void main()
{
	long int t,n,k,a[10][10],i,j,b[10],c[10],p,l,count=0;
	scanf("%ld",&t);
	l=0;
	for(i=0;i<t;i++)
	{
		scanf("%ld %ld",&n,&k);
		for(j=0;j<n;j++)
			scanf("%ld",&a[i][j]);
		count=0;
		for(j=0;j<n;)
		{
			if(a[i][j]>=k)
			{
				a[i][j]+=1;
				j++;
			}
			else
			{
				for(p=0;p<n;p++)
				a[i][p]+=1;
				count++;
			}
		}
		b[l]=count;
		l++;
	}
	for(i=0;i<l;i++)
		printf("\n%d",b[i]);
}
