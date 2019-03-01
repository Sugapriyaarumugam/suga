#include <stdio.h>

int main()
{
    int a,b,m,lcm,i;
    scanf("%d %d",&a,&b);
    m=a>b?a:b;
    for(i=0;i<max;i++)
    {
        if(m%a==0 && m%b==0)
        {
            lcm=m;
            break;
        }
        m++;
    }
    printf("%d",lcm);
}
