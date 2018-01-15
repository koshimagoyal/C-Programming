#include <stdio.h>
#include<stdlib.h>

void main() {
    int no,rep,i,j;
	scanf("%d",&no);
	if(no<1&&no>=200){
	    
	}
	else{
	for(rep=0;rep<no;rep++){
	    
	
	int m,n;
	scanf("%d %d",&m,&n);
	int temp;
	
	int a[m][n];
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        scanf("%d",&temp);
	        a[i][j]=temp;
	    }
	}
	
	int maxrowpos=-1;
	int res=-1;
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        if(a[i][j]==1){
	            
	                //printf("I am here 1");
	            if(j > maxrowpos ){
					maxrowpos=j;
	                res=i;
	               /// printf("I am here %d",j);
	            }
	            break;
	        }
	    }
	}
	
	printf("%d\n",res);
	}
	}
}
