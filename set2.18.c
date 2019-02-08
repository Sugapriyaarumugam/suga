#include<stdio.h>
#include<math.h>
int main()
{
  int N,t,r,s,i,Q;
  scanf("%d %d",&N,&Q);
    for(i=N+1;i<Q;++i)
    {
    t=i;
    s=0;
    
    while(t!=0)
    {
      r=t%10;
      s=s+(r*r*r);
      t=t/10;
    }
 
 if(i==s)
 {
  printf("%d ",i);
}
}
}
