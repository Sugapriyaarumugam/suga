#include <stdio.h>
int main()
{
    char s[50],ch;
    int i,c=0;
    scanf("%s %c",s,&ch);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            c=c+1;
        }
    }
printf("%d",c);
}
