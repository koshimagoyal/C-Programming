#include<stdio.h>
#include<conio.h>
#define pi 3.14
float param(int r)
{
      return (2*pi*r);
}
float area(int r)
{
	return (pi*r*r);
}
void main()
{
	float r;
	clrscr();
	printf("\n enter the radius");
	scanf("%f",&r);
	printf("\n The area = %f",area(r));
	printf("\n The parameter = %f",param(r));
	getch();
}