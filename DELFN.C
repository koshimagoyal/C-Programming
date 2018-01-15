#include<stdio.h>
#include<conio.h>
void del(int a[],int n,int n2)
{
	int k,i,c[10];
	k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==n2)
			continue;
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("\n new array\n");
	for(i=0;i<k;i++)
		printf("%d\t",c[i]);
}
void main()
{
	int a[10],b[10],i,n,n2;
	clrscr();
	printf("\n enter size of array");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n array elements\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n enter element you want to delete");
	scanf("%d",&n2);
	del(a,n,n2);
	getch();
}