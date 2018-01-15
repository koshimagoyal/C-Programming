#include<stdio.h>
void main()
{
	FILE *fp1;
	int ch;
	char str,fname[50];
	printf("\n enter filename");
	scanf("%s",fname);
	fp1=fopen(fname,"w");
	printf("\n enter contents of file");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	fp1=fopen(fname,"r");
	printf("\n reading of file");
	while((str=fgetc(fp1))!=EOF)
	{
		putchar(str);
	}
	fclose(fp1);
	printf("\n again opening the file to write");
	fp1=fopen(fname,"a");
	printf("\n write file of contents");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	printf("\n reading again");
	fp1=fopen(fname,"r");
	printf("\n reading of file");
	while((str=fgetc(fp1))!=EOF)
	{
		putchar(str);
	}
	fclose(fp1);
}
