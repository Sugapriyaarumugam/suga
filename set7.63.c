#include <stdio.h>

int main()
{
  int n=10,k[100],min,i;

  for(i=0;i<10;i++)
  {
      scanf("%d",&k[i]);
  }
  min= k[0];
 
   for (i = 0; i < n; i++)
   {
      if (k[i] < min)
      {
         min = k[i];
      }
   }
  printf("%d",min);
}
