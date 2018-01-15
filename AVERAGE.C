#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	float avg=0.0;
	printf("\n enter the 5 numbers");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		sum+=a[i];
	avg=sum/5;
	printf("\n Average=%.2f",avg);
	getch();
}