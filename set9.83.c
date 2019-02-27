#include <stdio.h>
#include<string.h>
int main()
{
     int a,m;
   char s;

       scanf("%d %c %d",&a,&s,&m);
       if(s=='/')
       {
           printf("%d\n",(a/m));
       }
       else
       {
           printf("%d\n",(a%m));
       }

	return 0;
}
