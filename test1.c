#include<stdio.h>
void main()
{
	int n,a[50],i,j,k,count=0,y,z;
	printf("\n enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	count=1,y=0,z=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i-1]!=a[i]||i==n-1)
		{
			if(count>y)
			{
				y=count;
				z=a[i-1];
			}
			count=1;
		}
		else
		{
			count++;
		}
	}
	printf("%d",z);
}
