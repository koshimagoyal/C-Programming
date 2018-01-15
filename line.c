#include<stdio.h>
#define cube(x) x*x*x
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
	printf("\nCube=%d",cube(n));
	#undef cube
	#ifndef cube
		printf("\n cube is not defined");
		#define cube(x) x*x*x
	#else
		printf("\n cube is defined");
	#endif
	printf("\n Cube=%d",cube(n));
	#define hello(x) printf("\n hello " #x " ! ");
	hello(john);
	#define concat(x,y) x ## y
	printf("\n%d",concat(1,2));
	#line 100
	printf("\n%d",concat(a,2));
}
