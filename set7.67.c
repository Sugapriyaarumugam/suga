#include<stdio.h>

int main()
{
int N;
scanf("%d",&N);
while((N%10)!=0)
{
N++;
}
printf(" %d",N);
}
