#include<stdio.h>
#include<conio.h>
void main()
{
	float temp[10],avg,sum=0.0;
	int i;
	clrscr();
	printf("\n enter temperature for 10 days");
	for(i=0;i<10;i++)
		scanf("%f",&temp[i]);
	for(i=0;i<10;i++)
		sum+=temp[i];
	avg=sum/10;
	printf("\n Average = %f",avg);
	getch();
}