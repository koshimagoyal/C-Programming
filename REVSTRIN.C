#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	int i,l,j;
	clrscr();
	printf("\n enter the string");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++);
	j=0;
	for(l=i-1;l>=0;l--)
	{
		s2[j]=s1[l];
		j++;
	}
	s2[j]='\0';
	printf("\n Reversed string = %s",s2);
	getch();
}
