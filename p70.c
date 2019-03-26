#include <stdio.h>

int main()
{
    char a[1000],b[1000]="answer";
    gets(a);
    strcat(a,b);
    printf("%s",a);
    
}
