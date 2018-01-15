#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	float per;
	clrscr();
	printf("\n enter the 5 numbers");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		sum=sum+a[i];
	per=sum/5;
	printf("\n Total=%d",sum);
	printf("\n Percentage=%0.2f %",per);
	getch();
}