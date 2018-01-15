#include<stdio.h>
#include<conio.h>
void myExpo(int a,int b)
{
	int expo=1,i;
	for(i=0;i<b;i++)
		expo=expo*a;
	printf("\n Answer = %d",expo);
}
void main()
{
	int p,q;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&p);
	printf("\n enter the power");
	scanf("%d",&q);
	myExpo(p,q);
	getch();
}