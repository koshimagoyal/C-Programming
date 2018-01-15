#include<iostream.h>
#include<conio.h>
void main()
{
	int m,n,i,a[5][5],b[5];
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		for(j=0;j<b[i];j++)
			cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		cin>>p;
		for(j=0;j<b[p];j++)
			cout<<a[i][j]<<"\t";
	}
	getch();
}