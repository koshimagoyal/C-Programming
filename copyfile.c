#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int ch;
	char str,fname[50],target[50];
	printf("\n enter filename");
	scanf("%s",fname);
	printf("\n write content in file");
	fp1=fopen(fname,"w");
	while((str=getchar())!=EOF)
		putc(str,fp1);
	fclose(fp1);
	printf("\n enter name of target file");
	scanf("%s",target);
	fp1=fopen(fname,"r");
	fp2=fopen(target,"w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		putc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp2);
	fclose(fp1);
	printf("\n reading target file");
	fp2=fopen(target,"r");
	while((str=fgetc(fp2))!=EOF)
	{
		putchar(str);
	}
	fclose(fp2);
}
