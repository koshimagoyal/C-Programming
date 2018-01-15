#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],t,n,i,j,k;
	printf("\n enter the no of test cases");
	scanf("%d",&t);
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter array elements");
	for(j=0;j<t;j++)
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	for(j=0;j<t;j++)
		for(i=0;i<n;i++)
			for(k=0;k<n;k++)
			{
				if(a[i]>a[j])
					printf("\n greatest no = %d",a[i]);
			}
	getch();
}