#include<stdio.h>
void main()
{
	extern int y;
	int x=3;
	printf("x=%d y=%d",x,y);
}
int y=7;
