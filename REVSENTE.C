#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverseSentence(char b[])
{
	char c[50];
	int len,i,index,wstart,wend;
	len=strlen(b);
	index=0;
	wstart=len-1;
	wend=len-1;
	while(wstart>0)
	{
		if(b[wstart]==' ')
		{
			i=wstart+1;
			while(i<=wend)
			{
				c[index]=b[i];
				i++;
				index++;
			}
			c[index++]=' ';
			wend=wstart-1;
		}
		wstart--;
	}
	for(i=0;i<=wend;i++)
	{
		c[index]=b[i];
		index++;
	}
	c[index]='\0';
	printf("\n Reverse Sentence\n");
	puts(c);
		}
	}
}
void main()
{
	char s[50];
	clrscr();
	printf("\n enter any string");
	gets(s);
	printf("\n original sentence\n");
	puts(s);
	reverseSentence(s);
	getch();
}