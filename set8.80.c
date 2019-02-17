#include <stdio.h>

int main()
{
 int n,rev=0,r=0;

 scanf("%d",&n);
   while(n!=0)
   {
       r=n%10;
       rev=(rev*10)+r;
       n=n/10;
       
   }
   
 n=rev;
    rev=0;
    r=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2==1)
        {
           printf("%d ",r); 
        }
       
        n=n/10;
    }
	return 0;
}
