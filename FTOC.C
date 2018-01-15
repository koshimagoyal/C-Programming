#include<stdio.h>
#include<conio.h>
void main()
{
	float temp,f;
	char unit;
	clrscr();
	printf("\n enter the temperature");
	scanf("%f",&temp);
	fflush(stdin);
	printf("\n enter the unit");
	scanf("%c",&unit);
	if(unit=='c'||unit=='C')
	{
		f=temp*1.8+32;
		printf("\n temperature in fahrenheit = %f F",f);
	}
	else if(unit=='f'||unit=='F')
	{
		f=(temp-32)/1.8;
		printf("\n temperature in celsius = %f C",f);
	}
	else
		printf("\n incorrect unit");
	getch();
}