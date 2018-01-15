#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,count;
	clrscr();
	printf("\n enter 10 elemenets");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<10;j++)
		{
			if(a[i]>a[j])
				count++;
			else
				continue;
		}
		if(count==9)
			printf("\n Greatest number in array is %d",a[i]);
	}
	getch();
}