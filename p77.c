#include <stdio.h>
int main()
{
    int s,a[1000],m,i,c=1,c1=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        if(a[i]<a[i+1])
        {
          c++;    
        }
        else
        {
            if(c1<c)
            {
                c1=c;
                c=1;
            }
        }
    }
    
        printf("%d",c1);
    return 0;
}
