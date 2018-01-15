#include<stdio.h>
void main()
{
	int *p1,**p2;
	double *q1,**q2;
	char *c1;
	float *f1;
	printf("\n char=%d",sizeof(c1));
	printf("\n float=%d",sizeof(f1));
	printf("\n%d %d",sizeof(p1),sizeof(p2));
	printf("\n%d %d",sizeof(q1),sizeof(q2));
}
