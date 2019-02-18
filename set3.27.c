#include <stdio.h>

int main()
{
    char s[1000];
    int i,l;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            printf("yes");
            break;
        }
else
{
    printf("no");
    break;
}
    }
    
   

}
