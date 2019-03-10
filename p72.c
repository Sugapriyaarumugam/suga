
#include <stdio.h>
int main()
{
    int N,i,a[50],j,t=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(t<a[i])
        {
            t=a[i];
        } 
    }
   printf("%d",t);

}
