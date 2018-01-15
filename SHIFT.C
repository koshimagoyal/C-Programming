#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&a);
	printf("\n Left shift by 1 bit = %d",a<<1);
	printf("\n Right shift by 1 bit = %d",a>>1);
	getch();
}