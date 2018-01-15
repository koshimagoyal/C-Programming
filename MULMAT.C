#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],s[2][2],i,j,k,sum=0;
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
		{
			for(k=0;k<2;k++)
			sum=sum+(a[i][k]*b[k][j]);
			s[i][j]=sum;
			sum=0;
		}
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
	printf("\n Multiplication of matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",s[i][j]);
		printf("\n");
	}
	getch();
}
