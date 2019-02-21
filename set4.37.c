#include <stdio.h>
#include <string.h>

int main(void) {
int a,b,n;
scanf("%d\t%d",&a,&b);
n=a;
a=b;
b=n;
printf("%d\t%d",a,b);
  return 0;
}
