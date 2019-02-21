#include <stdio.h>

int main(void) {
 int n[100],i,large;
 for(i=1;i<=10;i++)
 {
 scanf("%d",&n[i]);
 }
 large=n[0];
 for(i=1;i<=10;i++)
 {
   if(n[i]>large)
   {
     large=n[i];
   }
 }
 printf("%d",large);
return 0;
}
