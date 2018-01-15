#include<stdio.h>
void main()
{
	int t,n,i,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],j,count=1;
		p=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;)
		{
			if(a[i]<=0)
				i++;
			else
			{
				for(j=i;j<n;j++)
				{
					a[j]-=1;
				}
				i++;
				count++;
			}
		}
		printf("%d",count);
		if(p<t)
			printf("\n");
	}
}
