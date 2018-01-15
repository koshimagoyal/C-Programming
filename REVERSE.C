#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,j;
	clrscr();
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';++i);
	printf("\n length=%d",i);
	for(j=i;j>=0;j--)
	printf("%s",a[j]);
	getch();

}