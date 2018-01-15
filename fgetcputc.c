#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str;
	fp=fopen("general.txt","w");
	while((str=getchar())!=EOF)
		fputc(str,fp);
	fclose(fp);
	fp=fopen("general.txt","r");
	fflush(stdin);
	while((str=fgetc(fp))!=EOF)
	{
		putchar(str);
	}
	fclose(fp);
}
