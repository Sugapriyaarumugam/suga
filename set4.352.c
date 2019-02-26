#include<stdio.h>
int main()
{
    char S[100];
    int i,b=0;
    scanf("%s",&S);
    for(i=0;S[i]!='\0';i++)
    {
        if((S[i]>=48)&&(S[i]<=57))
        {
        b++;
    }
    }
    printf("%d",b);
    return 0;
}
  
