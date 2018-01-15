#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	int i=0;
	clrscr();
	printf("\n enter the string");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
	printf("\n Length of string=%d",i);
	getch();
}