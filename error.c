#include<stdio.h>
#define cube(x) x*x*x
#error i luv u
void main()
{
	int n;
	scanf("%d",&n);
	printf("Cube=%d",cube(n));
	#undef cube
	#ifdef cube
		printf("\n cube is defined");
	#else
		printf("\n cube is not defined");
		#define cube(x) x*x*x
	#endif
	printf("Cube=%d",cube(n));
	#undef cube
	#ifndef cube
		printf("\n cube is not defined");
		#define cube(x) x*x*x
	#else
		printf("\n cube is defined");
	#endif
	printf("Cube=%d",cube(n));
	#undef cube
	printf("Cube=%d",cube(n));
}
