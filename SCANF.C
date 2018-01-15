#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char str[50],fname[10];
	printf("\n enter the filename");
	scanf("%s",fname);
	fp=fopen(fname,"w");
	printf("\n enter the contents u wnat to store in file");
	while(gets(str)!=NULL)
	{
		gets(str);
		fprintf(fp,"%s",str);
	}
	fclose(fp);
	fp=fopen(fname,"r");
	printf("\n reading contents of file");
	while(!feof(fp))
	{
		fscanf(fp,"%s",str);
		printf("%s",str);
	}
	fclose(fp);
	getch();
}
