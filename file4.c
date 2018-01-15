#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int ch;
	char file1[20], file2[20];
	printf("\n enter the name of file 1");
	scanf("%s",file1);
	printf("\n enter the nme of file 2");
	scanf("%s",file2);
	fp1=fopen(file1,"r");
	fp2=fopen(file2,"w");
	if(fp1==NULL)
	{
		printf("\n error in opening file");
		exit(0);
	}
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		putc(ch,fp2);
		ch=fgetc(fp1);
	}
	printf("\nCopied\n");
	fclose(fp1);
	fclose(fp2);
	fp2=fopen(file2,"r");
	if(fp2==NULL)
	{
		printf("\n error in opening file");
		exit(0);
	}
	ch=fgetc(fp2);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp2);
	}
	return 0;
}
