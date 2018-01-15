#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[10],s2[20],s3[20];
	clrscr();
	printf("\n enter the string1");
	scanf("%s",s1);
	printf("\n enter the string2");
	scanf("%s",s2);
	printf("\n Copy of second string in third string = %s",strcpy(s3,s2));
	printf("\n Concatenated String = %s",strcat(s1,s2));
	printf("\n Comparison of String2 and string3 = %d",strcmp(s2,s3));
	printf("\n Reverse of String1 = %s",strrev(s1));
	getch();
}