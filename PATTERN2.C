#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	clrscr();
	printf("\n enter the no till where you want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k<=n;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		 printf("\n");
	}
	getch();
}