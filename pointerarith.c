int main()
{
	int a[]={10,20,30,40};
	int *p1=a;
	int *p2=a+5;
	printf("\n sum=%d",*p1+*p2);
	printf("\n difference=%d",p2-p1);
	p2=p1+2;
	printf("%d\n%d",p1,p2);
	printf("\n diff=%d",*p2-*p1);
}
