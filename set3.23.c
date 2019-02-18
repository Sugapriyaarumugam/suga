#include <stdio.h>

int main()
{
   int N,a[100],i,min;
   if(1<=N<=10000)
   {
       scanf("%d",&N);
       
   }
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   min=a[0];
   for(i=0;i<N;i++)
   {
       if(a[i]<min)
       {
           min=a[i];
       }
   }
   printf("%d",min);
}
