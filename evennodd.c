#include<stdio.h>
void main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int e=0,o=0;
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
				e+=i;
			else
				o+=i;
		}
		printf("%d %d\n",o,e);
	}
}
