#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ch,i;
	clrscr();
	printf("\n mini calculator");
	printf("\n 1.add");
	printf("\n 2.subtract");
	printf("\n 3.divide");
	printf("\n 4.multiplication");
	printf("\n 5.exponent");
	printf("\n enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\n enter the choice");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	c=a+b;
			break;
		case 2:	c=a-b;
			break;
		case 3:	if(b==0)
			printf("\n unable to divide");
			else
			c=a/b;
			break;
		case 4:	c=a*b;
			break;
		case 5: c=1;
			for(i=0;i<b;i++)
				c=c*a;
			break;
		default: printf("\n wrong input");
			 break;
	}
	printf("\n Answer = %d",c);
	getch();
}