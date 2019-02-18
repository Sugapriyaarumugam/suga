#include <stdio.h>
#include<math.h>

int main()
{
int b[100000],n,i,j,max;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   if(b[i]>b[j] && i!=j)
   {
    max=b[i];
    b[i]=b[j];
    b[j]=max;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%d ",b[i]);
 }

 return 0;
}
