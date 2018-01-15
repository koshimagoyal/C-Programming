#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	int i,flag=0;
	printf("\n enter the string");
	scanf("%s",s1);
	printf("\n enter the second string");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[i])
			flag=flag+1;

	}
	if(flag==i)
		printf("\n Strings are equal");
	else
		printf("\n Strings are not equal");
	getch();
}