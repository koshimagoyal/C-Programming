#include<stdio.h>
long int fact(int f)
{
	long int fac=1;
	while(f>0)
	{
		fac*=f;
		f-=1;
	}
}
void main()
{
	int t,i,j,n,s,count,p,l,k,g;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=0;
		p=0;
		l=n;
		g=0;
		while(n>0)
		{
			k=n%10;
			s=fact(k);
			g+=s;
			n=n/10;
		}
		if(g==l)
			printf("yes");
		else
			printf("no");
		if(p<t)
			printf("\n");
	}
}
