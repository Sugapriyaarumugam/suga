#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,s=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
t=s/n;
printf("%d",t);
return 0;
}
