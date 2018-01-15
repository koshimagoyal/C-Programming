#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],i,j;
	clrscr();
	printf("\n enter the 2X2 matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n Original matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n transpose of matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",a[j][i]);
		printf("\n");
	}
	getch();
}