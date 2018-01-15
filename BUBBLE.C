#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10],temp;
	clrscr();
	printf("\n enter the 10 array elements");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n Unsorted Elements\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
			   temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			}
		}
	}
	printf("\n Elements in ascending order are\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	getch();
}