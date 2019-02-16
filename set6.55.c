#include <stdio.h>

int main()
{
    int N,M,S;
    scanf("%d",&N,&M);
    S=N*M;
    if(S%2==0)
    {
    printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
