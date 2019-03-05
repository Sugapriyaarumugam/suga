#include<stdio.h>
#include<conio.h>
int main()
{
    int N,k,i,a=1,l=0;
    scanf("%d%d",&N,&k);
    for(i=0;i<N/2;i++)
    {
        a=a*k;
        if(a==N)
        {
            printf("yes");
            break;
        }
        
    }
    if(a!=N)
    {
        printf("no");
    }
    return 0;
}
