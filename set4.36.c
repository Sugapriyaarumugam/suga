#include <stdio.h>
#include <string.h>

int main(void) {
char s[100];
int c=0,i,n;
scanf("%[^\n]*c",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')))
{

}
else
{
  c++;
}
}
printf("%d",c);
  return 0;
}
