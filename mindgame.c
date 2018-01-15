#include<stdio.h>
void main()
{
	int t,k,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		for(i=1;i<=10;i++)
		{
			if(i==abs(i-(((i*2)+k)/2)))
				printf("%d",i);
		}
	}
}
