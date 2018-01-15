#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	short int b;
	long int c;
	float d;
	double e;
	long double f;
	char g;
	signed int h;
	unsigned int i;
	signed char j;
	unsigned char k;
	clrscr();
	printf("\n Size of int = %d",sizeof(a));
	printf("\n Size of short = %d",sizeof(b));
	printf("\n Size of long = %d",sizeof(c));
	printf("\n Size of float = %d",sizeof(d));
	printf("\n Size of double = %d",sizeof(e));
	printf("\n Size of long double = %d",sizeof(f));
	printf("\n Size of char = %d",sizeof(g));
	printf("\n Size of signed int = %d",sizeof(h));
	printf("\n Size of unsigned int = %d",sizeof(i));
	printf("\n Size of signed char = %d",sizeof(j));
	printf("\n Size of unsigned char = %d",sizeof(k));
	getch();
}