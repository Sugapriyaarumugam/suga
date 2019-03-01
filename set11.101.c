#include <stdio.h>
int main()
{
    char S[1000];
   int a,l,i;
   gets(S);
   scanf("%d",&a);
   l=strlen(S);
   
for(i=l;i>a;i--)
{
    printf("%c",S[i]);
}
}
