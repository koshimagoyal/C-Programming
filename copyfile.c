#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int ch;
	char str;
	fp1=fopen("source.txt","w");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	fp1=fopen("source.txt","r");
	fp2=fopen("target.txt","w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		putc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp2);
	fclose(fp1);
	fp2=fopen("target.txt","r");
	while((str=fgetc(fp2))!=EOF)
	{
		putchar(str);
	}
	fclose(fp2);
}
