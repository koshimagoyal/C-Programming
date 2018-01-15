#include<stdio.h>
#include<conio.h>
void main()
{
	int a=8,*p,*p1;
	clrscr();
	p=&a;
	p1=p;
	printf("\n Value of variable=%d",a);
	printf("\n Value of pointer=%d",*p);
	printf("\n Vlaue of pointer to pointer=%d",*p1);
	getch();
}