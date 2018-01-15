#include<stdio.h>
void main()
{
	int t,i,j,n,s,l,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int count=0;
		for(i=1;i<=n;i++)
		{
			l=i;
			flag=0;
			while(l>0)
			{
				s=l%10;
				l=l/10;
				if(s==0)
					flag=1;
			}
			if(flag==1)
				count++;
		}
		printf("%d",count);
	}
}
