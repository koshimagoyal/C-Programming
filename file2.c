#include<stdio.h>
void main()
{
	FILE *fp;
	int ch,noofchar=0,noofline=1;
	char filename[20];
	printf("\n enter the filename");
	scanf("%s",filename);
	fp=fopen(filename,"w");
	fprintf(fp,"hy how r u \n i am a file");
	fclose(fp);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\n error in opening file");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		if(ch=='\n')
			noofline++;
		noofchar++;
		ch=fgetc(fp);
	}
	if(noofchar>0)
		printf("\n In file %s there are %d lines and %d characters",filename,noofline,noofchar);
	else
		printf("\n File is empty");
	fclose(fp);
}
