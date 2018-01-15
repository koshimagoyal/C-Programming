#include<stdio.h>
#include<conio.h>
void main()
{
	int t,no,k,i,count,a[20],b[20],osum=0,esum=0;
	clrscr();
	printf("\n enter the number");
	scanf("%d",&no);
	t=no;
	for(count=0;no>0;count++)
	{
		no=no/10;
	}
	for(i=count;i>0;i--)
	{
		   a[i]=t%10;
		   t=t/10;
	}
	for(i=1;i<=count;i++)
	{
	       if(i%2==0)
			esum+=a[i];
		else
			osum+=a[i];
		printf(" %d",a[i]);
	}
	printf("\n sum of odd digits = %d",osum);
	printf("\n sum of even digits = %d",esum);
	getch();
}