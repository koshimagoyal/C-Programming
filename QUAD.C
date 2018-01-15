#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,r1,r2;
	clrscr();
	printf("\n enter the coefficients");
	scanf("%d %d %d",&a,&b,&c);
	fflush(stdin);
	d=(b*b)-(4*a*c);
	printf("\nd=%.2f",d);
	if(d>=0)
	{
	     r1=((-b)+(sqrt(d)))/(2*a);
	     r2=((-b)-(sqrt(d)))/(2*a);
	     printf("\n r1=%.2f and r2=%.2f",r1,r2);
	}
	else
		printf("\n imaginary roots");
	getch();
}