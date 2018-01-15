#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\n enter the 5 numbers");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Minimum = %d",a[0]);
	printf("\n Maximum = %d",a[4]);
	getch();
}