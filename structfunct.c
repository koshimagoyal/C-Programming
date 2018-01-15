#include<stdio.h>
float midpt(float x,float y)
{
	float m;
	m=(x+y)/2;
	return m;
}
struct coord
{
	float x,y;
};
void main()
{
	struct coord c;
	printf("\n enter the x coordinate");
	scanf("%f",&c.x);
	printf("\n enter the y coordinate");
	scanf("%f",&c.y);
	float q=midpt(c.x,c.y);
	printf("\n X coordinate = %.2f",c.x);
	printf("\n Y coordinate = %.2f",c.y);
	printf("\n Mid-point = %.2f",q);
}
