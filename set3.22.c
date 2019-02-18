#include <stdio.h>

int main()
{
   int N,a[100],i,max;
   if(1<=N<=10000)
   {
       scanf("%d",&N);
       
   }
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   max=a[0];
   for(i=0;i<N;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
   printf("%d",max);
}
