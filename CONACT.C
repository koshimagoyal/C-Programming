#include<stdio.h>
#include<conio.h>
void concate(int a[],int b[],int n,int n2)
{
	int k,i,j,c[10];
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
	printf("\n concatenated array\n");
	for(i=0;i<k;i++)
		printf("%d\t",c[i]);
}
void main()
{
	int a[10],b[10],i,n,n2;
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
	concate(a,b,n,n2);
	getch();
}