#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
  int v,b,c,a1,b1,c1,a2,b2,c2;
  scanf("%d\t%d",&v,&b);
  scanf("%d\t%d",&a1,&b1);
  scanf("%d\t%d",&a2,&b2);
  c=abs(v-b);c1=abs(a1-b1);c2=abs(a2-b2);
  printf("%d\n%d\n%d",c,c1,c2);
}
