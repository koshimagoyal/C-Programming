#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int a,rev=0,bi=0,oct=0,hex=0,r=0,c,t,b,i,d;
clrscr();
printf("\n Conversions\n");
printf("1.Decimal to any base\n");
printf("2.Binary to any base\n");
printf("enter your choice\n");
scanf("%d",&c);
  switch(c)
 {
   case 1:
       printf("enter the decimal number\n");
     scanf("%d",&a);
     printf("enter the base in which you wish to change");
     scanf("%d",&b);
     t=a;
	  if(b==2)
	      {
		 while(t!=0)
		 {
		  bi=bi*10;
		  r=t%2;
		  bi=bi+r;
		  t=t/2;
		 }
		 while(bi!=0)
		  {
		   rev=rev*10;
		   rev=rev+bi%10;
		   bi=bi/10;
		  }
     printf("the binary conversion of decimal %d is %d",a,rev);
	      }
	  else if(b==8)
	      {
		while(t!=0)
		 {
		  oct=oct*10;
		  r=t%8;
		  oct=oct+r;
		  t=t/8;
		 }
		 while(oct!=0)
		  {
		   rev=rev*10;
		   rev=rev+oct%10;
		   oct=oct/10;
		  }
     printf("the octal conversion of decimal %d is %d",a,rev);
		}
       else if(b==16)
	     {
		while(t!=0)
		 {
		  hex=hex*10;
		  r=t%16;
		  hex=hex+r;
		  t=t/16;
		 }
		 while(hex!=0)
		  {
		   rev=rev*10;
		   rev=rev+hex%10;
		   hex=hex/10;
		  }
     printf("the hexadecimal conversion of decimal %d is %d",a,rev);
	     }
	  else
	  {
	     printf("wrong input\n");
	  }
	  break;
     case 2:
       printf("enter the binary number\n");
       scanf("%d",&a);
       printf("enter the base in which you wish to change");
       scanf("%d",&b);
	t=a;
	    if(b==10)
	       { while(t!=0)
		     {
		      r=t%10;
		      d=d+pow(2,i)*r;
		      t=t/10;
		      i++;
		     }
		     printf("the binary number %d in decimal is %d",a,d);
	       }
	     else if(b==8)
	       {
		  while(t!=0)
		 {
		  bi=bi*10;
		  r=t%2;
		  bi=bi+r;
		  t=t/2;
		 }
		 while(bi!=0)
		  {
		   rev=rev*10;
		   rev=rev+bi%10;
		   bi=bi/10;
		  }

		while(t!=0)
		 {
		  oct=oct*10;
		  r=t%8;
		  oct=oct+r;
		  t=t/8;
		 }
		 while(oct!=0)
		  {
		   rev=rev*10;
		   rev=rev+oct%10;
		   oct=oct/10;
		  }
     printf("the octal conversion of binary %d is %d",a,rev);

	      }
	   else if(b==16)
	     {
	      while(t!=0)
		{
		   r=t%10;
		   d=d+pow(2,i)*r;
		   t=t/10;
		   i++;
		 }

		while(t!=0)
		 {
		  hex=hex*10;
		  r=t%16;
		  hex=hex+r;
		  t=t/16;
		 }
		 while(hex!=0)
		  {
		   rev=rev*10;
		   rev=rev+hex%10;
		   hex=hex/10;
		  }
     printf("the hexadecimal conversion of binary %d is %d",a,rev);
	     }
	      else
	      {
	       printf("wrong input");
	       }

getch();
}
}