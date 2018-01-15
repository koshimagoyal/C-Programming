#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,rev=0;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("\n reverse of given number = %d",rev);
	getch();
}