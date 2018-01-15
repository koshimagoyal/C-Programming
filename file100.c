#include<stdio.h>
 void main()
 {
 	FILE *fp1,*fp2;
 	int ch;
 	char fname1[50],fname2[50];
 	printf("enter the name of the file1");
 	scanf("%s",fname1);
 	fp1=fopen(fname1,"w");
 	printf("enter the contents in file1");
	while((ch=getchar())!=EOF)
	putc(ch,fp1);
 	fclose(fp1);
 	printf("enter the name of file2");
 	scanf("%s",fname2);
 	fp2=fopen(fname2,"w");
 	printf("enter the contents in file 2");
	while((ch=getchar())!=EOF)
	putc(ch,fp2);
 	fclose(fp2);
 	fp1=fopen(fname1,"r");
 	fp2=fopen(fname2,"a");
 	ch=fgetc(fp1);
 	while(ch!=EOF)
 	{
	putc(ch,fp2);
 	ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen(fname2,"r");
    printf("reading append file\n");
    ch=fgetc(fp2);
 	while(ch!=EOF)
 	{
	putchar(ch);
 	ch=fgetc(fp2);
    }
   fclose(fp2); 
    
 }
