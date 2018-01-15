#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void delChar(char a[])
{
	char b[50];
	int i,k=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(isalpha(a[i]))
		{
			b[k]=a[i];
			k++;
		}
		else
			continue;
	}
	printf("\n New string=%s",b);
}
void main()
{
	char s[50];
	printf("\n enter string");
	gets(s);
	delChar(s);
	getch();
}