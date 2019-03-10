#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,i,m=0;
    scanf("%d%d",&a,&b);
    if(((a>=1)||(a<=50))&&((b>=1)||(b<=50)))
    m=pow(a,b);
    printf("%d",m);
    else
    printf("invalid");
}
