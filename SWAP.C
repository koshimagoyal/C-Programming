#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter the two numbers");
	scanf("%d %d",&a,&b);
	printf("\n Before swapping a = %d and b = %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping a = %d and b = %d",a,b);
	getch();
}