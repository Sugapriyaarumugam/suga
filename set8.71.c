
#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,c=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[n-i-1])
        {
            c++;
        }
    }
    if(n==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;

}
