#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter the two numbers");
	scanf("%d %d",&a,&b);
	printf("\n Before swapping a = %d and b = %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n After swapping a = %d and b = %d",a,b);
	getch();
}