#include<stdio.h>
void print(void);
void main()
{
	printf("\n first call");
	print();
	printf("\n second call");
	print();
	printf("\n third call");
	print();
}
void print()
{
	static int x;
	int y=0;
	printf("\n static integer value,x=%d",x);
	printf("\n Integer value,y=%d",y);
	x++;
	y++;
}
