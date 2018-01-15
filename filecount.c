#include<stdio.h>
void main()
{
	FILE *fp;
	int l=0,w=0,c=0;
	char str,fname[50];
	printf("\n enter filename");
	scanf("%s",fname);
	printf("\n write content in file");
	fp=fopen(fname,"w");
	while((str=getchar())!=EOF)
		putc(str,fp);
	fclose(fp);
	fp=fopen(fname,"r");
	while((str=fgetc(fp))!=EOF)
	{
		if(str=='\n')
		{
			l++;
			w++;
		}
		else if(str==' ')
			w++;
		else
			c++;
	}
	fclose(fp);
	printf("\n Lines=%d\nWords=%d\nCharacters=%d",l,w,c);
}
