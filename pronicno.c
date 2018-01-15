#include<stdio.h>
void main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			if((i*(i+1))<=n)
				printf("%d ",i*(i+1));
		}
	}
}
