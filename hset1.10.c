#include <stdio.h>

int main()
{
   int a[200],b[200],n,m,i,j,count=0;
   scanf("%d\t%d",&n,&m);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
   scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
   for(j=0;j<m;j++)
   {
   if(a[i]==b[j])
   {
   count++;
   }
   }
   }
   if(count==m)
   {
   printf("yes");
   }
   else
   {
   printf("no");
   }
    return 0;
}
