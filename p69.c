#include <stdio.h>

int main()
{
   int a[100],n,i,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&k);
   for(i=0;i<n-k;i++)
   {
       printf("%d",a[i]);
   }
   
    
}
