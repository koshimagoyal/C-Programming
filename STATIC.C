#include<stdio.h>
#include<conio.h>
void increment()
{
	static int i=0;
	int a=0;
	i++;
	a++;
	printf("\ni=%d",i);
	printf("\na=%d",a);
}
void main()
{
	clrscr();
	increment();
	increment();
	increment();
	getch();
}