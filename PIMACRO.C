#include<stdio.h>
#define PI 3.14
#include<conio.h>
void main()
{
	float area,r;
	clrscr();
	printf("\n enter the radius");
	scanf("%f",&r);
	area=PI*r*r;
	printf("\n Area=%f",area);
	getch();
}
