#include<stdio.h>
#include<math.h>
int main()
{
  int N,t,r=0,s=0,a=0,b;
  scanf("%d",&N);
  t=N;
  b=N;
  if(N<=10000)
  {
      
    while(b!=0)
    {
        a++;
      b=b/10;
      
    }
    while(t!=0)
    {
      r=t%10;
      s=s+pow(r,a);
      t=t/10;
    }
  }
  
  if(s==N) 
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  
}
