#include<stdio.h>
void main()
{
	int t,i,j,n,s,count,p,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=0;
		p=0;
		l=n;
		while(n>0)
		{
			s=n%10;
			if(s!=0)
			{
			if(l%s==0)
				count++;
			}
			n=n/10;
		}
		printf("%d",count);
		if(p<t)
			printf("\n");
	}
}
