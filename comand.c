#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	printf("\n Number of arguments = %d",argc);
	for(i=0;i<argc;i++)
		printf("\n arg[i]=%s",argv[i]);
	return 0;
}
