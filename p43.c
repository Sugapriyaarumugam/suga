#include<stdio.h>
 
int main()
{
    char N[100000], M[100];
    int c1 = 0,c2 = 0,i,j,flag;
    gets(N);
    gets(M);
    c1=strlen(N);
    c2=strlen(M);
 for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            flag = 1;
            if (N[j] != M[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("yes");
    else
        printf("no");
}
