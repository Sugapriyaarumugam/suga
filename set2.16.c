#include<stdio.h>
void main()
{
    int n, i, j, a, b, flag=0;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        flag=0;
         
        for(j=2;j<=i-1;j++)      
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf(" %d ",i);
        }
    }
}
