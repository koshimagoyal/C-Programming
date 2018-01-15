#include<stdio.h>
#include<conio.h>
void main()
{
	const int a=10;
	int *p;
	clrscr();
	p=&a;
	printf("\n Value before change = %d",a);
	*p= 20;
	printf("\n Value after change = %d",a);
	getch();
}