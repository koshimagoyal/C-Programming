#include<stdio.h>
void main()
{
	FILE *fp;
	int ch;
	char str,fname[50];
	printf("\n enter filename");
	scanf("%s",fname);
	printf("\n write content in file");
	fp=fopen(fname,"w");
	while((str=getchar())!=EOF)
		fputc(str,fp);
	fclose(fp);
	printf("\n reading contents");
	fp=fopen(fname,"r");
	fflush(stdin);
	while((str=fgetc(fp))!=EOF)
	{
		putchar(str);
	}
	fclose(fp);
}
