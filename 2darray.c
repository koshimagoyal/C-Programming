#include<stdio.h>
void func(int a[][10],int n,int m)
{
	int i,j;
	printf("\n array elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void main()
{
	int a[10][10],m,n,i,j;
	printf("\n enter no of rows and columns");
	scanf("%d %d",&n,&m);
	printf("\n enter elements");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	func(a,n,m);
}
