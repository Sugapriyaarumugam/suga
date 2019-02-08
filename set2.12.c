#include<stdio.h>
void main()
{
  int N,r=0,s=0,t;
  scanf("%d",&N);
  t=N;
  if(N<=1000)
  {

    while(N!=0)
    {
      r=N%10;
      s=(s*10)+r;
      N=N/10;
    }

  }
  
  if(t==s)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
