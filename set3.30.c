#include <stdio.h>

int main()
{
    int min1,hr,hr1,min2;
    scanf("%d%d%d%d",&min1,&hr,&min2,&hr1);
    if(hr>hr1)
    {
         hr=hr-hr1;
    }
    else
    {
        hr=hr1-hr;
    }
    if(min1>min2)
    
    {
         min1=min1-min2;
    }
    else
    {
        min1=min2-min1;
    }
    printf("%d %d",hr,min1);
    return 0;
    
}
