#include<stdio.h>
void main()
{
  int N,Q,i=0;
  scanf("%d %d",&N,&Q);
  if(N,Q<=10000)
  {
    for(i=N+1;i<Q;i++)
    {
      if(i%2==0)
      {
        printf("%d ",i);
      }
    }
  }
}
