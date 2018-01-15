#include<stdio.h>
#include<conio.h>
void main()
{
	float hra,da,gross,bs;
	clrscr();
	printf("\n enter your basic salary");
	scanf("%f",&bs);
	hra=(20*bs)/100;
	da=(10*bs)/100;
	gross=bs+hra+da;
	printf("\n Hra = %0.2f",hra);
	printf("\n Da = %0.2f",da);
	printf("\n Gross salary = %0.2f",gross);
	getch();
}