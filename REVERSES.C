#include<stdio.h>
#include<conio.h>
char *reverseString(char *q)
{
	int i,j;
	char *s;
	for(i=0;*q!='\0';i++,q++);
	for(j=i;j>=0;j--)
	{
		s=q[j];
		s++;
	}
	return s;
}
void main()
{
     char *p,*l;
     gets(p);
     l=reverseString(p);
     puts(l);
     getch();
}