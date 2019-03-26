#include <stdio.h>

int main()
{
    int d,c,b;
    scanf("%d",&d);
    
   for (c = 31; c >= 0; c--)
  {
    b = d >> c;
 
    if (b & 1)
    {
      printf("1");
    }
    else
    {
      printf("0");
  }
  } 
}
  
