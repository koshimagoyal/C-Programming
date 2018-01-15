#include<stdio.h>
void main()
{
	int i,j,t,k,n,b[10][10];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		int count=0;
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		//printf("%d\n",n);
		k=n-1;
		for(j=0;j<n;j++)
		{
			//printf("\na[j]=%d \t a[k]=%d",a[j],a[k]);
				if(a[j]==a[k])
				{
					count++;
					//printf("\na[j]=%d \t a[k]=%d",a[j],a[k]);	
				}
			k--;
			//printf("%d",a[j]);
			//printf("count=%d",count);
		}
		if(count==n)
			b[i][0]=1;
	}
	for(i=0;i<t;i++)
	{
		if(b[i][0]==1)
			printf("\nPERFECT");
		else
			printf("\nNOT PERFECT");
	}
}
