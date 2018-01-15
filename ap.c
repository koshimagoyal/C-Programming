#include<stdio.h>
void main()
{
	int t,n,i,j;
	float a,d,s,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&a);
		scanf("%f",&d);
		scanf("%d",&n);
		s=0.0;
		for(i=0;i<n;i++)
		{
			c=a+i*d;
			s+=c;
		}
		printf("%.2f\n",s);
	}
}
