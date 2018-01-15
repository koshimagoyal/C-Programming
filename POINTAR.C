#include<stdio.h>
#include<conio.h>
void main()
{
	int a=8,*p,*s,d=9;
	float b=2.2,*q;
	char c='a',*r;
	clrscr();
	p=&a;
	q=&b;
	r=&c;
	s=&d;
	printf("\n Value of int pointer=%d",*p);
	printf("\n Address of pointer=%u",p);
	printf("\n Increment in address of pointer=%u",p+1);
	printf("\n Value of int pointer=%d",*s);
	printf("\n Addition of two pointers=%d",*p+*s);
	printf("\n Value of float pointer=%.2f",*q);
	printf("\n Address of pointer=%u",q);
	printf("\n Increment in address of pointer=%u",q+1);
	printf("\n Value of char pointer=%d",*r);
	printf("\n Address of pointer=%u",r);
	printf("\n Increment in address of pointer=%u",r+1);
	getch();
}