#include <stdio.h>
int main() 
{
	int a,i,s[10],min=99,max=0;
	scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       scanf("%d",&s[i]);
   }
   for(i=0;i<a;i++)
   {
       if(s[i]>max)
       {
           max=s[i];
       }
   }
   for(i=0;i<a;i++)
   {
       if(s[i]<min)
       {
           min=s[i];
       }
   }
   printf("%d",min,max);
	return 0;
}
