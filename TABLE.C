#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	printf("\n first 10 multiples are\n");
	for(i=1;i<=10;i++)
		printf("%d * %d = %d\n",n,i,n*i);
	getch();
}