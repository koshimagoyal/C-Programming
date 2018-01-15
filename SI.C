#include<stdio.h>
#include<conio.h>
void main()
{
	float principle,rate,si;
	int time;
	clrscr();
	printf("\n enter the principle");
	scanf("%f",&principle);
	printf("\n enter the rate");
	scanf("%f",&rate);
	printf("\n enter the time");
	scanf("%d",&time);
	si=principle*rate*time;
	printf("\n Simple Interest = %f",si);
	getch();
}
