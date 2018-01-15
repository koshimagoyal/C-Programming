#include<stdio.h>
#include<conio.h>
void main()
{
	int k,n,a[10],i,count=0;
	clrscr();
	printf("\n enter the number in decimal");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		k=n%2;
		n=n/2;
		a[i]=k;
		count++;
	}
	fflush(stdin);
	printf("\n Binary Equivalent = ");
	for(i=count-1;i>=0;i--)
		printf("%d",a[i]);
	getch();
}