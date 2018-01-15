#include<stdio.h>
void main()
{
	FILE *fp1;
	int ch;
	char str;
	fp1=fopen("hello.txt","w");
	printf("\n enter contents of file");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	fp1=fopen("hello.txt","r");
	printf("\n reading of file");
	while((str=fgetc(fp1))!=EOF)
	{
		putchar(str);
	}
	fclose(fp1);
	fp1=fopen("hello.txt","a");
	printf("\n write file of contents");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	fp1=fopen("hello.txt","r");
	printf("\n reading of file")
	while((str=fgetc(fp1))!=EOF)
	{
		putchar(str);
	}
	fclose(fp1);
}
