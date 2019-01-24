#include <stdio.h>

int main()
{
    int i,j,n,p,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
        scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        k=a[0];
        for(j=1;j<i;j++)
        {
            if(k<a[i])
            {
                k=a[j];
                p=j;
            }
        }
    }
        a[p]=0;
            
            printf("%d",k);
     return 0;
     }

    
