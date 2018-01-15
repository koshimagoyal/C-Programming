#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],s[2][2],i,j;
	clrscr();
	printf("\n enter the 2X2 first matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n enter the 2X2 second matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			s[i][j]=a[i][j]-b[i][j];
	}
	printf("\n First matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n Second matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
	printf("\n Subtraction of matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",s[i][j]);
		printf("\n");
	}
	getch();
}
