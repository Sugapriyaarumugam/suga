#include <stdio.h>
int main()
{
    int N,i,a[50],j,t=0;
    scanf("%d",&N);
    if(N<=10000)
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    a[0]='\0';
    for(i=1;i<N;i++)
    {
        printf("%d",a[i]);
    }
}
