#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch,str;
	if(argc<3)
	{
		printf("\n less info");
		return 0;
	}
	printf("\n enter character for first file");
	fp1=fopen(argv[1],"w");
	while((ch=getchar())!=EOF)
		fputc(ch,fp1);
	fclose(fp1);
	printf("\n enter content for second file");
	fp2=fopen(argv[2],"w");
	while((ch=getchar())!=EOF)
		fputc(ch,fp2);
	fclose(fp2);
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"a");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		if(ch==" "||ch=='\n')
			ch=fgetc(fp1);
		else
		{
			str=ch-2;
			fputc(str,fp2);	
			ch=fgetc(fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	printf("\n reading contents");
	fp2=fopen(argv[2],"r");
	while((ch=fgetc(fp2))!=EOF)
		putchar(str);
	fclose(fp2);
	return 0;
}
