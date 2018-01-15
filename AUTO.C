#include<stdio.h>
#include<conio.h>
void f1()
{
	auto int i=2;
	printf("\n Value in f1=%d",i);
}
void f2()
{
	auto int i=3;
	printf("\n Value in f2=%d",i);
}
void main()
{
	auto int i=1;
	clrscr();
	f1();
	f2();
	printf("\n Value in main=%d",i);
	getch();
}