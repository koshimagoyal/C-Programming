#include<stdio.h>
#include<conio.h>
void main()
{
	float height,f;
	char unit;
	clrscr();
	printf("\n enter the height");
	scanf("%f",&height);
	fflush(stdin);
	printf("\n enter the unit");
	scanf("%c",&unit);
	if(unit=='c'||unit=='C')
	{
		f=height/30.48;
		printf("\n height in feet = %f feet",f);
	}
	else if(unit=='f'||unit=='F')
	{
		f=height*30.48;
		printf("\n height in cm = %f cm",f);
	}
	else
		printf("\n incorrect unit");
	getch();
}