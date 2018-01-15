#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10],*p;
	int i,count1=0,count2=0;
	printf("\n enter the string");
	scanf("%s",s);
	p=&s;
	for(i=0;*(p+i)!='\0';i++)
	{
	       if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
			count1++;
	       else
			count2++;
	}
	printf("\n No of vowels = %d",count1);
	printf("\n No of consonants = %d",count2);
	getch();

}