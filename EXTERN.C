#include<stdio.h>
#include<conio.h>
void main()
{
	extern int y;
	int x=21;
	clrscr();
	printf("x=%d y=%d",x,y);
	getch();
}
int y=20;