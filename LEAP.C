#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%400==0)
		printf("\n %d is leap year and century year",n);
		else
		printf("\n %d is leap year",n);
	}
	else
		printf("\n %d is not leap year",n);
	getch();
}