#include<stdio.h>
#include<conio.h>
void main()
{
	int *p1,**p2;
	double *q1,**q2;
	char *c1;
	float *f1;
	clrscr();
	printf("\n size of char pointer=%d",sizeof(c1));
	printf("\n size of float pointer=%d",sizeof(f1));
	printf("\n size of int pointer=%d\nsizeof int pointer to pointer=%d",sizeof(p1),sizeof(p2));
	printf("\n size of double pointer=%d\nsizeof double pointer to pointer=%d",sizeof(q1),sizeof(q2));
	getch();
}
