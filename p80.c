#include <stdio.h>
int main() 
{
    int N,a[50],i,j,m=0;
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0]-a[1];
    for(i=0;i<N;++)
    {
        for(j=i+1;j<Nj++)
        {
            if(a[i]<a[j])
            {
            if(a[j]-a[i]<m)
            {
                m=a[j]-a[i];
            }
            }
            if(a[i]>a[j])
            {
            if(a[i]-a[j]<m)
            {
                m=a[j]-a[i];
            }
            }
        }
    }
    printf("%d",m);
}
