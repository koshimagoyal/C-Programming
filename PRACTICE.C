#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp,*fp2;
	int ch;
	char f1[20],f2[20],str;
	clrscr();
	printf("\n enter filename");
	gets(f1);
	fp=fopen(f1,"w");
	printf("\n enter content of first file");
	while((str=getchar())!=EOF)
		fputc(str,fp);
	fclose(fp);
	//fflush(stdout);
	fflush(stdin);
	//printf("\n enter filename2");
	//gets(f2);
	//fflush(stdin);
	fp2=fopen("abc.txt","w");
	fflush(stdin);
	printf("\n enter content of second file");
	fflush(stdin);
	while((str=getchar())!=EOF)
	{       fflush(stdin);
		fputc(str,fp2);
	}
	fclose(fp2);
	printf("\n read content of first file");
	fp=fopen(f1,"r");
	fflush(stdin);
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	fclose(fp);
	printf("\n read content of second file");
	fp2=fopen(f2,"r");
	fflush(stdin);
	while((ch=fgetc(fp2))!=EOF)
		putchar(ch);
	fclose(fp2);
	fp=fopen(f1,"r");
	fp2=fopen(f2,"a");
	fflush(stdin);
	while((str=fgetc(fp))!=EOF)
		fputc(str,fp2);
	fclose(fp2);
	printf("\n read again content of second file");
	fp2=fopen(f2,"r");
	fflush(stdin);
	while((ch=fgetc(fp2))!=EOF)
		putchar(ch);
	fclose(fp2);
	getch();
}