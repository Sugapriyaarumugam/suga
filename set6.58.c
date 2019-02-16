#include<stdio.h>

int main()
{
int N,i,K;
scanf("%d %d",&N,&K);
int a[100];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;a[i]<=K;i++)

{
    if(a[i]==K)
    {
 printf("yes");
break;
    }
    else 
    {
        printf(" ");
    
        
    }
}
if(a[i]!=K)
{
printf("no");
}
}
