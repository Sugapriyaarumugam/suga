#include<stdio.h>
#include<conio.h>
void main()
{
    int a,c;
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        c++;
    }
    printf("%d",c);

    getch();
}
