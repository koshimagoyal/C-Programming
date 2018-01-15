#include<stdio.h>
#define a 24
#include<conio.h>
void main()
{
	clrscr();
	#ifdef a
		printf("a=%d",a);
	#endif
	printf("\n a is defined");
	getch();
}
