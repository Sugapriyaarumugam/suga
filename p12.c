#include <stdio.h>


int main()
{
       int N,k;
   scanf("%d %d",&N,&k);
   int M[n],i,s,j;
   if((n>=1&&n<=1000)&&(k>=1&&k<=1000))
   {
   for(i=0;i<N;i++)
   {   
       scanf("%d",&M[i]);
   }
   
      for(j=1;j<=k;j++)
 {
    s=M[n-1];
     for(i=N-1;i>0;i--)
   { 
     M[i]=M[i-1];
     }
   M[0]=s;
   }
    for(i=0;i<N;i++)
   {
       
       printf("%d ",M[i]);
   }
   
   }
}
