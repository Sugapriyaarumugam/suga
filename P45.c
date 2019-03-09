#include <stdio.h>
void main()
{
    int P,A,i,j,p,b,c=0;
	scanf("%d %d",&P,&A);
	for(i=1;i<=P;i++)
	{
	    for(j=1;j<=A;j++)
	{
	    p=2*(i+j);
	    b=i*j;
	    if(p==P && b==A)
	    {  
	      c++;
	        break;
	    }
	}

	}
	if(c==0)
	{
	    printf("no");
	}else
	 printf("yes");
}
