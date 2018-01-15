#include<stdio.h>
void main()
{
	int x=30,*y,*z;
	y=&x;
	z=y;
	printf("%d %d",y,z);
	*y++=*z++;
	x++;
	printf("x=%d y=%d z=%d",x,y,z);
}
