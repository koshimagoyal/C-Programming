#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,j,temp,count,b[3],k;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n sorted array elements are\n");
	for(i=0;i<n;i++)
		printf("\t %d",a[i]);
	printf("\n repeated no are\n");
	for(k=0;k<3;k++)
	{
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				count=count+1;
		if(count==1)
			b[k]=a[i];
	}
	}
	for(k=3;k>0;k--)
		printf("\t %d",b[i]);
	getch();
}