#include <stdio.h>

int main()
{
   int N,a[100],i,j,t=0;
   if(1<=N<=10000)
   {
       scanf("%d",&N);
       
   }
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
  
   for(i=0;i<N;i++)
   {
       for(j=i+1;j<N;j++)
       {
       if(a[i]>a[j])
       {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
       }
   }
   }
   for(i=0;i<N;i++)
   {
   printf("%d",a[i]);
}

}
