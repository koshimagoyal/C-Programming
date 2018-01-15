#include<stdio.h>
void main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n], s=0,flag=0,p=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		//printf("s=%d",s);
		for(i=1;i<=n;i++)
		{
			if(((s+i)%2)==0&&flag==0)
			{
				printf("%d",i);
				flag=1;
			}
		}
		if(p<t)
			printf("\n");
	}
}
