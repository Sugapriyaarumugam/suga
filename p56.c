#include <stdio.h>
#include<string.h>
int main()
{
 char s[50],ch;
    int i,c=0,l=0;
    scanf("%s %c",s,&ch);
    l=strlen(s);
    if(l<100000)
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            c=i+1;
            break;
        }
    }
printf("%d",c);
}
