#include<stdio.h>
void main()
{
	FILE *fp;
	int l=0,w=0,c=0;
	char str;
	fp=fopen("hello.txt","w");
	while((str=getchar())!=EOF)
		putc(str,fp);
	fclose(fp);
	fp=fopen("hello.txt","r");
	while((str=fgetc(fp))!=EOF)
	{
		if(str=='\n')
		{
			l++;
			w++;
		}
		else if(str==' ')
			w++;
		else
			c++;
	}
	fclose(fp);
	printf("\n Lines=%d\nWords=%d\nCharacters=%d",l,w,c);
}
