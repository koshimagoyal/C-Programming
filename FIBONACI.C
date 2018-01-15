#include<stdio.h>
#include<conio.h>
void main()
{
	int t,f,s,n,i;
	clrscr();
	printf("\n enter the no till you want to print series");
	scanf("%d",&n);
	t=1;
	f=1;
	printf("\n fibonacci series is  %d\t  %d",t,f);
	for(i=0;i<n-2;i++)
	{
		s=t+f;
		printf("\t%d",s);
		t=f;
		f=s;
	}
	getch();
}