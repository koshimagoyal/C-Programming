#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10],s3[20];
	int i,j,l;
	clrscr();
	printf("\n enter the string1");
	scanf("%s",s1);
	printf("\n enter the string2");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s3[i]=s1[i];
	}
	l=i;
	for(i=0;s2[i]!='\0';i++)
	{
	       s3[l]=s2[i];
	       l++;
	}
	s3[l]='\0';
	printf("\n Concatenate String = %s",s3);
	getch();
}