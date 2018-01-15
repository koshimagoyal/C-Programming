#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],c[10],i,j,k,n,n2,temp;
	clrscr();
	printf("\n enter size of array1");
	scanf("%d",&n);
	printf("\n enter the array1 elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n enter size of array2");
	scanf("%d",&n2);
	printf("\n enter the array2 elements");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	k=0;
	for(i=0;i<n;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(j=0;j<n2;j++)
	{
		c[k]=b[j];
		k++;
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	printf("\n Sorted merge array\n");
	for(i=0;i<k;i++)
		printf("%d\t",c[i]);
	getch();
}