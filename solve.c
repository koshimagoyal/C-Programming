#include<stdio.h>
int func(int i)
{
	if(i%2)
		return (i++);
	else
		return func(i-1);
}
void main()
{
	printf("\n hello");
	main();
	return 0;
}
