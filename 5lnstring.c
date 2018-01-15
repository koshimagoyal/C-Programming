#include<stdio.h>
void func(char p[][50])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(strlen(p[i])>=5)
			printf("\n%s",p[i]);
	}
}
void main()
{
	char s[5][50];
	int i;
	printf("\n enter 5 strings");
	for(i=0;i<5;i++)
		gets(s[i]);
	printf("\n strings you entered of 5 n more");
	func(s);
}
