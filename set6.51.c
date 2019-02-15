#include<stdio.h>
int main()
{
int N,m,o,p,q;
scanf("%d",&N);
m=N/100;
o=N%100;
p=o%10;
q=o/10;
printf("\t%d\t%d\t%d",m,q,p);
return 0;
}
