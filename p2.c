#include<stdio.h>
int main()
{
int fact=1,i,N;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    fact=i*fact;
}
printf("%d",fact);
 return 0;
