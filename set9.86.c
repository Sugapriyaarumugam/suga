#include <stdio.h>

int main(void) {
  int a,b,c,s,i,m;
  scanf("%d %d %d",&a,&b,&c);
  s=(c*(2*a+(c-1)*b))/2;
  m=a+(c-1)*b;
  for(i=a;i<=m;i++)
  {
    if(i==m)
    {
      printf("%d",s);
    }
  }
}
