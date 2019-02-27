#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 int N,r,c=1;
 scanf("%d",&N);
 while(N>0)
 {
   r=N%10;
   c=c*r;
   N=N/10;
 }
 printf("%d",c);

	return 0;
}
