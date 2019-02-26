#include <stdio.h>

int main(void) {
 int n[100],i,lar;
 for(i=1;i<=10;i++)
 {
 scanf("%d",&n[i]);
 }
 lar=n[0];
 for(i=1;i<=10;i++)
 {
   if(n[i]>lar)
   {
     lar=n[i];
   }
 }
 printf("%d",lar);
return 0;
}
