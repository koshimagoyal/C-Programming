#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	int i;
	printf("\n enter the string");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("\n Copied String = %s",s2);
	getch();
}