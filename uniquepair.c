#include <stdio.h>

int main() {
	//code
	long int t,k,l;
	long int i,j;
	scanf("%ld",&t);
	for(k=0;k<t;k++)
	{
		long int n;
		scanf("%ld",&n);
		long int a[n],b[n][1000];
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		int count=0;
		j=0;
		l=0;
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
			if(count==1)
			{
				b[k][l]=a[i];
				l++;
			}
		}
		long int s=l;
		for(i=0;i<l-1;i++)
		{
		    for(j=0;j<l-1-i;j++)
		    {
		if(b[k][j]>b[k][j+1])
		{
			long int temp;
			temp=b[i][j];
			b[i][j]=b[i][j+1];
			b[i][j+1]=temp;
		}
		    }
		}
		for(j=0;j<s;j++)
		{
			printf("%ld ",b[k][j]);
		}
		printf("\n");
	}
	return 0;
}
